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
Victor Hugo Volpiano Fagundes
RA: 21444928
Mashara Arambasic Rebelo da Silva
RA: 21467402
*/
int main(){
    int rodada = 0, w1 = 0, w2 = 0;
    char jog1, jog2;


    //"letreiro"
    printf(" === JOKENPO === \n ");
    printf("Regras:\n>P = Pedra\n>F = Papel\n>T = Tesoura\n>Melhor de 3!<\n");

    do // DO controlador limite de rodadas
    {



    rodada = rodada + 1; //adiciona valor 1 em rodada, afim de controlar quantas rodadas ocorreram
    printf("----------------\n--- Rodada %i ---\n----------------\n\n", rodada);

 //Selecao de opcao jogador 1 com prevencao de erros
    do{
    printf("Jogador 1: Pedra, Papel ou Tesoura ?\n");
    scanf(" %c", &jog1);
    jog1 = toupper(jog1); //transforma todos os caracteres em maiusculo
    printf(">Voce escolheu: %c.\n", jog1);
        if (jog1 != 'P' && jog1 != 'T' && jog1 != 'F')
        {
            printf("\n>>Erro 001: caractere inválido. Tente novamente: \n");
            printf(">P = Pedra\n>F = Papel\n>T = Tesoura\n");
        }
        
    }
    while (jog1 != 'P' && jog1 != 'T' && jog1 != 'F');
    
    


//Selecao de opcao jogador 2 com prevencao de erros

    do{
    printf("Jogador 2: Pedra, Papel ou Tesoura ?\n");
    scanf(" %c", &jog2);
    jog2 = toupper(jog2); //transforma todos os caracteres em maiusculo
    printf(">Voce escolheu: %c.\n", jog2);
        if (jog2 != 'P' && jog2 != 'T' && jog2 != 'F')
        {
            printf("\n>>Erro 001: caractere inválido. Tente novamente: \n");
            printf(">P = Pedra\n>F = Papel\n>T = Tesoura\n");
        }
        
    }
    while (jog2 != 'P' && jog2 != 'T' && jog2 != 'F');


        if (!(jog1==jog2))
        {
            switch (jog1)
            {
            case 'P':
                if (jog2 == 'T')
                {
                    w1 = w1 + 1;
                    printf("\n>>Jogador 1 venceu a %i rodada!<<\n", rodada);
                    printf(">Pontuacao<\n>Jogador 1: %i pontos.\n>Jogador 2: %i pontos.\n", w1, w2);
                }else
                {
                    w2 = w2 + 1;
                    printf("\n>>Jogador 2 venceu a %i rodada!<<\n", rodada);
                    printf(">Pontuacao<\n>Jogador 1: %i pontos.\n>Jogador 2: %i pontos.\n", w1, w2);
                }
                
                
                break;//case P
            
            case 'T':
                if (jog2 =='F')
                {
                    w1 = w1 + 1;
                    printf("\n>Jogador 1 venceu a %i rodada!\n", rodada);
                    printf(">Pontuacao\n>Jogador 1: %i pontos.\n>Jogador 2: %i pontos.\n", w1, w2);
                }else
                {
                    w2 = w2 + 1;
                    printf("\n>>Jogador 2 venceu a %i rodada!\n", rodada);
                    printf(">Pontuacao<\n>Jogador 1: %i pontos.\n>Jogador 2: %i pontos.\n", w1, w2);   
                }
                break;//case T

            case 'F':
                if (jog2 =='P')
                {
                    w1 = w1 + 1;
                    printf("\n>>Jogador 1 venceu a %i rodada!<<\n", rodada);
                    printf(">Pontuacao<\n>Jogador 1: %i pontos.\n>Jogador 2: %i pontos.\n", w1, w2);
                }else
                {
                    w2 = w2 + 1;
                    printf("\n>Jogador 2 venceu a %i rodada!\n", rodada);
                    printf(">Pontuacao\n>Jogador 1: %i pontos.\n>Jogador 2: %i pontos.\n", w1, w2);      
                }
                break;//case F
                
            
            default:
                rodada = rodada - 1;
                printf("\n>ERRO 001: caractere inválido!\n");
                printf("Regras:\n>P = Pedra\n>F = Papel\n>T = Tesoura\n>Melhor de 3!\n<");

                
            }   


            
        }else//else IF JOG1==JOG2
        {
            rodada = rodada -1;
            printf("\n\n>> EMPATE <<\nTente novamente!\n");
        }//FIM else IF JOG1==JOG2
        
    if( w1 == 2 || w2 == 2){ 
        //adiciona valor 3 para rodadas para encerrar loop do while
        rodada = 3;
    }


    }/*fim DO*/ while (rodada != 3); //limitador de rodadas. Cód para de rodar aqui
    
    if (w1 > w2){
        printf("\n >> O jogador 1 ganhou o jogo!! <<\n");
    }else{
        printf("\n >> O jogador 2 ganhou o jogo!! <<\n");
    }

    return 0;
}// fim int main