# Trabalho Pratico 1 O Campeao - Fatec 20172 Ciro
1º Trabalho Prático da disciplina de linguagem de programação, professor Ciro, Fatec Carapicuiba, 2017 2º Semestre

## Descrição

Thyago é um torcedor fanático do Sport Clube de Recife e sempre acompanha as
finais dos campeonatos em que seu time está jogando. Como os jogos são geralmente à noite
e Thyago está ocupado nesse horário trabalhando ou ministrando aula, ele não está com tempo
de ver os jogos do seu time de coração e nem acompanhar a pontuação total do campeonato
ao longo do dia, no qual está na rodada final. Deoclécio, que é amigo de Thyago e também
gosta muito de futebol, está assistindo o campeonato e anotou a pontuação de todos os times
até então e também o placar dos jogos da rodada final.

Sua tarefa é ajudar Deoclécio fazendo um programa que, dado o nome dos times
participantes do campeonato, a sua pontuação até então e o placar dos últimos jogos,
determine qual foi o time campeão e a pontuação final desse time.

Regras desse campeonato:

* Cada gol marcado valerá 3 pontos;
* Caso os times empatem, será adicionado +1 ponto para cada time da partida;
* O time vencedor de uma partida ganhará +5 pontos.

Observações:

* É garantido que sempre haverá um time vencedor do campeonato;
* O time Sport sempre aparece nas entradas do problema;
* Não haverá empates de pontuação final entre dois ou mais times após os placares
dados;
* O nome do time da entrada sempre terá apenas uma palavra;
* Os nomes dos times não se repetem, não contém caracteres especiais e possuem no
máximo 49 caracteres;
* Nenhum dos times joga mais de uma vez (mais de uma partida no mesmo caso de
teste).

### Entrada

A entrada contém vários casos de teste. A primeira linha contém um inteiro N (2 ≤ N ≤ 100)
representando a quantidade de times que estão participando do campeonato. Seguem N i linhas
contendo o nome do time S e a pontuação do time P até então (0 ≤ P ≤ 100). Logo após,
seguem N/2 linhas contendo o placar de cada jogo da última rodada, no formato
" TimeA golsA-golsB TimeB ", conforme ilustrado no exemplo abaixo. A entrada termina
com N = 0, a qual não deve ser processada.

### Saída

Para cada caso de teste na entrada, seu programa deve produzir uma linha de saída, contendo
caso o Sport seja o campeão: " O Sport foi o campeao com X pontos :D ", sendo X a
quantidade total de pontos. Caso contrário, o seu programa deve produzir a seguinte linha:
" O Sport nao foi o campeao. O time campeao foi o S com X pontos :( ",
sendo S o nome do time vencedor e X a quantidade total de pontos. Deixe uma linha em
branco depois de cada caso de teste.

### Exemplo
#### Entrada

```
4
Treze 20
Campinense 35
Fortaleza 25
Sport 20
Sport 4-0 Campinense
Fortaleza 2-2 Treze
6
Bahia 42
Sport 43
Vitoria 41
Fortaleza 32
Ceara 33
Campinense 22
Sport 2-0 Bahia
Vitoria 3-1 Ceara
Campinense 2-1 Fortaleza
0
```
#### Saída
```
O Sport foi o campeao com 37 pontos :D
O Sport nao foi o campeao. O time campeao
foi o Vitoria com 55 pontos :(
```
Para resolver este problema você deve obrigatoriamente implementar as seguintes
funções:

```
/* devolve a posição de time no vetor de n strings times */
int pos_time(int n, char times[][50], char * time);
/* devolve a pontuação do time que fez gols1 e levou gols2
* em uma partida */
int calc_pontos(int gols1, int gols2);
/* devolve o índice da posição no vetor n elementos pontos que
* possui o maior valor */
int campeao(int n, int pontos[]);

```

### Informações importantes sobre Trabalho
1. Critérios de avaliação:
a) Corretude: 90%
b) Legibilidade: 10%
2. Todos os trabalhos devem possuir no cabeçalho a identificação dos autores .
3. Trabalhos copiados (com ou sem eventuais disfarces) terão a nota dividida pelo
número de cópias (inclusive o original).
4. Trabalhos atrasados não serão aceitos.
5. Trabalhos com erros de sintaxe (ou seja, erros de compilação) receberão nota ZERO.
6. É muito importante que seu programa tenha comentários e esteja bem indentado, ou
seja, digitado de maneira a ressaltar a estrutura de subordinação dos comandos do
programa. A legibilidade do código será levada em consideração pelo critério de
avaliação do trabalho.
7. Você deve enviar o arquivo fonte (.c) da aplicação para o seguinte e-mail:
ciroct@gmail.com
8. Guarde uma cópia do seu trabalho pelo menos até o final do semestre. Este material
pode ser solicitado pelo professor em caso de extravio.
