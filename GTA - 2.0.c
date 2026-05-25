#include <stdio.h>
#include <string.h>
#include <time.h>

#define MAX_TAREFAS 10
#define MAX_NOME 50

// --- CORES ANSI PALETA HARMONIZADA ---
#define WHITE   "\033[1;37m" // Branco Negrito
#define RED     "\033[1;31m" // Vermelho (Urgente)
#define YELLOW  "\033[1;33m" // Amarelo (Atenção)
#define GREEN   "\033[1;32m" // Verde (Tranquilo)
#define BLUE    "\033[1;34m" // Azul Royal (Planejamento) - Combina com a intensidade
#define RESET   "\033[0m"

struct Data {
    int dia, mes, ano;
};

char nomes[MAX_TAREFAS][MAX_NOME];
struct Data datas[MAX_TAREFAS];
int status[MAX_TAREFAS]; 
int total = 0;

void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void exibirLogo() {
    printf(WHITE);
    printf("      ____________________________________________________\n");
    printf("     |                                                    |\n");
    printf("     |    ____  _____  _          [ Versao 2.6 ]          |\n");
    printf("     |   / ___||_   _|/ \\         ----------------        |\n");
    printf("     |  | |  _   | | / _ \\        ESTUDE COM FOCO         |\n");
    printf("     |  | |_| |  | |/ ___ \\       ENTREGUE NO PRAZO       |\n");
    printf("     |   \\____|  |_/_/   \\_\\                              |\n");
    printf("     |____________________________________________________|\n");
    printf(RESET);
}

int dataValida(int d, int m, int a) {
    if (a < 2024 || m < 1 || m > 12 || d < 1) return 0;
    int dias[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (m == 2 && ((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0))) dias[1] = 29;
    return d <= dias[m-1];
}

time_t converterParaTimeT(struct Data d) {
    struct tm t = {0};
    t.tm_mday = d.dia;
    t.tm_mon = d.mes - 1;
    t.tm_year = d.ano - 1900;
    return mktime(&t);
}

int calcularDiasRestantes(struct Data entrega) {
    time_t t = time(NULL);
    struct tm *hoje_ptr = localtime(&t);
    struct tm hoje_tm = {0};
    hoje_tm.tm_mday = hoje_ptr->tm_mday;
    hoje_tm.tm_mon = hoje_ptr->tm_mon;
    hoje_tm.tm_year = hoje_ptr->tm_year;
    
    double segundos = difftime(converterParaTimeT(entrega), mktime(&hoje_tm));
    return (int)(segundos / (60 * 60 * 24));
}

void ordenarTarefas() {
    for (int i = 0; i < total - 1; i++) {
        for (int j = 0; j < total - i - 1; j++) {
            int troca = 0;
            if (status[j] > status[j+1]) troca = 1;
            else if (status[j] == status[j+1] && converterParaTimeT(datas[j]) > converterParaTimeT(datas[j+1])) troca = 1;

            if (troca) {
                struct Data tempD = datas[j]; datas[j] = datas[j+1]; datas[j+1] = tempD;
                char tempN[MAX_NOME]; strcpy(tempN, nomes[j]); strcpy(nomes[j], nomes[j+1]); strcpy(nomes[j+1], tempN);
                int tempS = status[j]; status[j] = status[j+1]; status[j+1] = tempS;
            }
        }
    }
}

void adicionarTarefa() {
    if (total >= MAX_TAREFAS) {
        printf(RED "\n[Erro] Lista de tarefas cheia!\n" RESET);
        return;
    }
    printf("\n--- CADASTRAR NOVA TAREFA ---\n");
    printf("Nome da atividade: ");
    fgets(nomes[total], MAX_NOME, stdin);
    nomes[total][strcspn(nomes[total], "\n")] = 0;

    int d, m, a;
    printf("Data de entrega (DD MM AAAA): ");
    while (scanf("%d %d %d", &d, &m, &a) != 3 || !dataValida(d, m, a)) {
        printf(RED "[!] Data invalida. Use o formato DD MM AAAA: " RESET);
        limparBuffer();
    }
    datas[total].dia = d; datas[total].mes = m; datas[total].ano = a;
    status[total] = 0;
    total++;
    limparBuffer();
    printf(GREEN "[OK] Tarefa registrada!\n" RESET);
}

void listarTarefas() {
    if (total > 0) ordenarTarefas();
    printf("\n--- LISTA DE TAREFAS ACADEMICAS ---\n");
    if (total == 0) {
        printf("Nenhuma tarefa pendente.\n");
        return;
    }

    for (int i = 0; i < total; i++) {
        int dias = calcularDiasRestantes(datas[i]);
        char dataStr[12];
        sprintf(dataStr, "%02d/%02d/%04d", datas[i].dia, datas[i].mes, datas[i].ano);

        if (status[i] == 1) { 
            printf(WHITE "%d. [CONCLUIDA]   %-20s [%s]\n" RESET, i + 1, nomes[i], dataStr);
        } else if (dias < 0) {
            if (dias == -1)
                printf(RED "%d. [ATRASADA!]   %-20s [%s] (1 dia de atraso)\n" RESET, i + 1, nomes[i], dataStr);
            else
                printf(RED "%d. [ATRASADA!]   %-20s [%s] (%d dias de atraso)\n" RESET, i + 1, nomes[i], dataStr, -dias);
        } else if (dias == 0) {
            printf(RED "%d. [HOJE!]       %-20s [%s] (ENTREGA HOJE!)\n" RESET, i + 1, nomes[i], dataStr);
        } else if (dias == 1) {
            printf(RED "%d. [AMANHA!]     %-20s [%s] (Falta 1 dia)\n" RESET, i + 1, nomes[i], dataStr);
        } else if (dias <= 2) {
            printf(RED "%d. [CRITICO]     %-20s [%s] (Faltam %d dias)\n" RESET, i + 1, nomes[i], dataStr, dias);
        } else if (dias <= 5) {
            printf(YELLOW "%d. [ATENCAO]     %-20s [%s] (Faltam %d dias)\n" RESET, i + 1, nomes[i], dataStr, dias);
        } else if (dias <= 10) {
            printf(GREEN "%d. [TRANQUILO]   %-20s [%s] (Faltam %d dias)\n" RESET, i + 1, nomes[i], dataStr, dias);
        } else { 
            printf(BLUE "%d. [LONGO PRAZO] %-20s [%s] (Faltam %d dias)\n" RESET, i + 1, nomes[i], dataStr, dias);
        }
    }
}

void concluirTarefa() {
    listarTarefas();
    if (total == 0) return;
    int indice;
    printf("\nDigite o numero da tarefa para concluir: ");
    if (scanf("%d", &indice) == 1 && indice > 0 && indice <= total) {
        status[indice - 1] = 1;
        printf(GREEN "\n=====================================\n");
        printf("   PARABENS! TAREFA FINALIZADA!    \n");
        printf("=====================================\n" RESET);
    } else {
        printf(RED "[!] Numero invalido.\n" RESET);
    }
    limparBuffer();
}

int main() {
    int opcao;
    exibirLogo();

    do {
        printf(WHITE "\n=================================\n");
        printf(" GERENCIADOR DE TAREFAS ACADEMICAS\n");
        printf("=================================\n" RESET);
        printf("1. Cadastrar nova tarefa\n");
        printf("2. Listar tarefas (Ordem de Prazo)\n");
        printf("3. Concluir tarefa (Dar Baixa)\n");
        printf("4. Sair\n");
        printf("Escolha uma opcao: ");
        
        if (scanf("%d", &opcao) != 1) {
            opcao = 0;
            limparBuffer();
        } else {
            limparBuffer();
        }

        switch (opcao) {
            case 1: adicionarTarefa(); break;
            case 2: listarTarefas();   break;
            case 3: concluirTarefa();  break;
            case 4: printf("\nSaindo... Bons estudos!\n"); break;
            default: printf(RED "\n[Erro] Opcao invalida.\n" RESET);
        }
    } while (opcao != 4);

    return 0;
}