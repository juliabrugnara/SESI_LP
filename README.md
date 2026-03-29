# Guia de Comandos Git Bash

## Configuração Inicial
### Configure seu usuário e email do Git:

git config --global user.name "Júlia Maria"  
git config --global user.email "julia.brugnara@aluno.senai.br"

## Clonar Repositório
Clone um repositório para sua máquina local:
git clone <URL do repositório>

## Comandos Básicos
- *Verificar status*:
- ``` bash
`git status`

- *Adicionar arquivos*:
  ``` bash
  git add .` (todos) ou `git add <arquivo>`
- *Commitar mudanças*: `git commit -m "Mensagem do commit"`
- *Puxar atualizações (pull)*: `git pull`
- *Enviar mudanças (push)*: `git push`

## Sincronizar com Repositório Remoto
- `git pull` (baixar e mesclar)
- `git push` (enviar mudanças)

## Outros Comandos Úteis
- *Ver histórico*: `git log`
- *Criar branch*: `git branch <nome>`
- *Trocar branch*: `git checkout <nome>`
