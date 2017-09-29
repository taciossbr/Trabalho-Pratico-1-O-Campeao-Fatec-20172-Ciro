#include <stdio.h>
#include <string.h>

int pos_time(int n, char times[][50], char * time);
int calc_pontos(int gols1, int gols2);
int campeao(int n, int pontos[]);

int main(){
    int n;
    scanf(" %d", &n);
    while(n > 0){
        char times[n][50], time1[50], time2[50], hifen;
        int pontos[n], gols1, gols2, pos1, pos2, camp, i;
        
        for(i=0;i<n;i++)
            scanf(" %50s %d", times[i], &pontos[i]);
        
        for(i=0;i<n/2; i++){
            scanf(" %50s %d %c %d %50s", time1, &gols1, &hifen,
                 &gols2, time2);
            pos1 = pos_time(n, times, time1);
            pos2 = pos_time(n, times, time2);
            pontos[pos1] += calc_pontos(gols1, gols2);
            pontos[pos2] += calc_pontos(gols2, gols1);
        }
        
        camp = campeao(n, pontos);
        
        if(strcasecmp(times[camp], "Sport") == 0)
            printf("O Sport foi o campeao com %d pontos :D\n\n",
                    pontos[camp]);
        else{
            printf("O Sport nao foi o campeao. ");
            printf("O time campeao foi o %s com %d pontos :(\n\n",
                    times[camp], pontos[camp]);
        }
        scanf(" %d", &n);

    }
    return 0;
}

/* devolve a posição de time no vetor de n strings times */
int pos_time(int n, char times[][50], char * time){
    int i;
    for(i = 0; i < n; i++)
        if(strcasecmp(times[i], time) == 0)
            return i;
    return -1;
}

/* devolve a pontuação do time que fez gols1 e levou gols2
* em uma partida */
int calc_pontos(int gols1, int gols2){
    int pontos = 0;
    pontos += gols1 * 3;
    if (gols1 > gols2)
        pontos += 5;
    else if (gols1 == gols2)
        pontos += 1;
    return pontos;
}

/* devolve o índice da posição no vetor n elementos pontos que
* possui o maior valor */
int campeao(int n, int pontos[]){
    int i, campeao = 0;
    for(i = 0; i < n; i++)
        if (pontos[i] > pontos[campeao])
            campeao = i;
    return campeao;
}
