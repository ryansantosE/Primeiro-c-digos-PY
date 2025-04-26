#include <stdio.h>
#include <stdlib.h>

int main() {
    char opcao;
    float pesotomates,  pesoextrato, colherdesopa, carboidratos, capacidaderecipiente;
    float carboidratosextrato, carboidratostomatepicado, totalcarboidratos;

    float carboidratosporporcao = 4.0;
    float pesoporporcao = 30.0;
    float colheresporporcao = 2.0;

    //Escolhas de opção

    printf("ESCOLHA UMA DAS OPCOES ABAIXO:\n");
    printf("A - calcular a quantidade de carboidratos no saco de tomate.\n");
    printf("B - calcular a quantidade de carboidratos em uma unica colher de sopa.\n");
    printf("C - calcular a quantidade total do carboidrato presente no extrato.\n");
    printf("D - calcular quantos tomates cabe no recipiente.\n");
    scanf("%c", &opcao);

    switch (opcao){
        case 'A':
        case 'a':
            printf("\nDigite o peso total dos tomates (em gramas): ");
            scanf("%f",  &pesotomates);

            if(pesotomates <= 0){
                printf("invalido, digite um numero maior que zero.\n");
            }
            else {
                carboidratos = (pesotomates * 0.031);
                printf("quantidade de carboidratos no saco de tomate: %.2f g\n", carboidratos);
            }
            break;

        case 'B':
        case 'b':
            printf("digite a quantidade de colheres de sopa do extrato de tomate:\n");
            scanf("%f", &colherdesopa);

            if(colherdesopa <= 0){
                printf("invalido, digite um numero maior que zero.\n");
            }
            else {
                carboidratos = (carboidratosporporcao / colheresporporcao) * colherdesopa;
                printf("a quantidade de carboidratos em %.1f unica colher de sopa e: %.2f g\n", colherdesopa, carboidratos);
            }
            break;
        case 'C':
        case 'c':
            printf("peso dos tomates (em gramas):\n");
            scanf("%f", &pesotomates);

            printf("peso do extrato (em gramas):\n");
            scanf("%f", &pesoextrato);

             if(pesotomates <= 0 || pesoextrato <=0){
                printf("invalido, digite um numero maior que zero.\n");
            }
            else {
                carboidratos = (pesotomates * 0.031);
                carboidratosextrato = (pesoextrato * 0.13333);
                totalcarboidratos = (carboidratos + carboidratosextrato);
                printf("O peso total do carboidrato presente no molho e %.2f g\n", totalcarboidratos);
                if (carboidratos > carboidratosextrato){
                    printf("O carboidrato presente no tomate e maior que no extrato.");
                }
                else {
                    printf("O carboidrato presente no extrato e maior que no tomate.");
                }

            }
         case 'D':
         case 'd':
            printf("capacidade do recipiente (em gramas):\n");
            scanf("%f", &capacidaderecipiente);

            if(capacidaderecipiente <= 0){
                printf("invalido, digite um numero maior que zero.\n");
            }
            else{
                printf("Serao necessarios aproximadamente %.2f g de  tomates para fazer %.2f de extrato artesanal.", (capacidaderecipiente * 6), capacidaderecipiente);
            }


        }



    }

