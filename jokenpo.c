#include <stdlib.h>
#include <stdio.h>
/* Jogo de Jokempo
P para pedra
F para papel
T para tesoura

Melhor de 3 (Limite de 3 rodadas)
quem fizer 2 pontos primeiro ganha
P > T
T > F
F > P

Leonardo Moreno Giantin Rodrigues
RA: 21429414
*/
int main(){
    int jogador1 = 0, jogador2 = 0, rodada = 0, w1 = 0, w2 = 0;
    char jog1, jog2;


    //"letreiro"
    printf(" === JOKENPO === \n ");
    printf("Regras:\n>P = Pedra\n>F = Papel\n>T = Tesoura\n>Melhor de 3!\n<");

     do{
    rodada = rodada + 1; //adiciona valor 1 em rodada, afim de controlar quantas rodadas ocorreram
    printf("----------------\n--- Rodada %i ---\n----------------\n\n", rodada);

//Selecao de opcao jogador 1 com prevencao de erros

    printf("Jogador 1: Pedra, Papel ou Tesoura ?\n");
    scanf(" %c", &jog1);
    jog1 = toupper(jog1); //transforma todos os caracteres em maiusculo
    printf(">Voce escolheu: %c.\n", jog1);


//Selecao de opcao jogador 2 com prevencao de erros

    printf("Jogador 2: Pedra, Papel ou Tesoura ?\n");
    scanf(" %c", &jog2);
    jog2 = toupper(jog2); //transforma todos os caracteres em maiusculo
    printf(">Voce escolheu: %c.\n", jog2);


   //Checagem de quem ganhou + limitador de rodadas.
 // ifelse para definir empate antes do switch case para checar quem ganha ou perde

if (!(jog1 == jog2)){
   switch (jog1)
   {
   case 'P':
       if (jog2 == 'T')
       {
        w1 = w1 + 1;
        printf("\n>>Jogador 1 venceu a %i rodada!<<\n", rodada);
        printf(">Pontuacao<\n>Jogador 1: %i pontos.\n>Jogador 2: %i pontos.\n", w1, w2);
       }else{
        w2 = w2 + 1;
           printf("\n>>Jogador 2 venceu a %i rodada!<<\n", rodada);
           printf(">Pontuacao<\n>Jogador 1: %i pontos.\n>Jogador 2: %i pontos.\n", w1, w2);
       }
       
       break;
   
   case 'F':
       if (jog2 == 'P')
       {
        w1 = w1 + 1;
        printf("\n>>Jogador 1 venceu a %i rodada!<<\n", rodada);
        printf(">Pontuacao<\n>Jogador 1: %i pontos.\n>Jogador 2: %i pontos.\n", w1, w2);
       }else{
        w2 = w2 + 1;
           printf("\n>>Jogador 2 venceu a %i rodada!<<\n", rodada);
           printf(">Pontuacao<\n>Jogador 1: %i pontos.\n>Jogador 2: %i pontos.\n", w1, w2);
       }
       
       break;
   
   case 'T':
       if (jog2 == 'F')
       {
        w1 = w1 + 1;
        printf("\n>>Jogador 1 venceu a %i rodada!<<\n", rodada);
        printf(">Pontuacao<\n>Jogador 1: %i pontos.\n>Jogador 2: %i pontos.\n", w1, w2);
       }else{
        w2 = w2 + 1;
           printf("\n>>Jogador 2 venceu a %i rodada!<<\n", rodada);
           printf(">Pontuacao<\n>Jogador 1: %i pontos.\n>Jogador 2: %i pontos.\n", w1, w2);
       }
       
       break;
   }
 }else{
     printf("\n>>EMPATE!!<<\n Tente novamente.\n");
     rodada = rodada - 1; //retrai uma rodada afim de manter a melhor de tres
 }

    if( w1 == 2 || w2 == 2){
        //adiciona valor 3 para rodadas para encerrar loop do while
        rodada = 3;
    }

    }while(rodada != 3 ); 
    // seleciona quem tem maior numero de vitorias e declara ganhador
    if (w1 > w2){
        printf("\n >> O jogador 1 ganhou o jogo!! <<\n");
    }else{
        printf("\n >> O jogador 2 ganhou o jogo!! <<\n");
    }
    return 0;
}