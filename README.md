# Guia de Comandos Git Bash

## Configuração Inicial

Defina seu nome de usuário:
```bash
git config --global user.name "Júlia Maria"
```

Defina seu e-mail:
```bash
git config --global user.email "julia.brugnara@aluno.senai.br"
```

---

## Clonar Repositório

Clone um repositório para sua máquina local:
```bash
git clone <URL_DO_REPOSITORIO>
```

---

## Comandos Básicos

Verificar o status dos arquivos:
```bash
git status
```

Adicionar todos os arquivos alterados:
```bash
git add .
```

Adicionar um arquivo específico:
```bash
git add <NOME_DO_ARQUIVO>
```

Salvar as alterações (Commit):
```bash
git commit -m "Mensagem do commit"
```

---

## Sincronização

Baixar e mesclar atualizações do servidor (Pull):
```bash
git pull
```

Enviar suas alterações para o servidor (Push):
```bash
git push
```

---

## Gestão de Branches e Histórico

Ver o histórico simplificado:
```bash
git log --oneline
```

Criar uma nova branch:
```bash
git branch <NOME_DA_BRANCH>
```

Trocar para uma branch existente:
```bash
git checkout <NOME_DA_BRANCH>
```

Criar e já trocar para a nova branch:
```bash
git checkout -b <NOME_DA_BRANCH>
```
```
