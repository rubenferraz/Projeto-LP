// Dear programmer:
// When I wrote this code, only god and
// I knew how it worked.
// Now, only god knows it!
// 
// T// Dear programmer:
// When I wrote this code, only god and
// I knew how it worked.
// Now, only god knows it!
// 
// Therefore, if you are trying to optimize
// this routine and it fails (most surely),
// please increase this counter as a
// warning for the next person:
// 
// total hours wasted here ~ 75
//

/*
 * @file main.c. 
 * @authors Marco Bernardes, Gonçalo Valente, Pedro Hilário, Ruben Ferraz, Ruben Serrano
 * @version: 1.0
 */

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <time.h>
#include <ctype.h>
#include "functionalities.h"

/* Comando compilar: gcc trabalho.c func.c -o main -l m;

    Falta criar o makefile;

*/

int main(int argc, char *argv[]){

    int elemento = 0, n, maximo, array[16], escolha, escolhaextra, run = 1, runcvetor = 1, invalido = 0, inputLetra = 0;
    int num, multiplos[tamVetor], fimPrograma = 0, matriz = 0;
    float seno, seno1, seno2, seno3;
    char resposta, respostaVetor;

    /*  Flags  */
    if(argc > 1){
        if(argc == 2 && ((strcmp(argv[1], "--info")) == 0) || (strcmp(argv[1], "-i")) == 0){
            info();
            fimPrograma = 1;
        }

        else if(argc == 2 && ((strcmp(argv[1], "--help")) == 0) || (strcmp(argv[1], "-h")) == 0){
            help();
            fimPrograma = 1;
        }
        else
        {
            printf("Flag inválida!\n");
            fimPrograma = 1;
        }
        
    }
    while(fimPrograma == 0)
        {
            /*   ↓ Começo do programa ↓   */
            for(n=0; n<65; n++)
            {
                printf("-");
            }
            printf("\n\n");
            for(n=0; n<27; n++)
            {
                printf(" ");
            }

            printf("Seja bem-vindo\n");

            printf(" \n");
            for(n=0; n<65; n++)
            {
                printf("-");
            }
            printf("\n");

            printf("-Aspetos IMPORTANTES:\n");
            printf(" . Para cada opção digite o numero correspondente para a escolher.\n");
            printf(" . Se precisar de ajuda não hesite executar o programa com o argumento '--help'.\n");
            printf("\n");
            printf("-Inicializar o Vetor:\n");
            printf(" .Inserir 16 numeros inteiros num vetor\n");
            printf(" .Os elementos do array devem estar no intervalo de 6 a 14\n");

            for(n=0; n<65; n++)
            {
                printf("-");
            }
            printf("\n");
            break;
        }
        while(run == 1 && fimPrograma == 0){

            printf("\t\t  |--  INICIALIZANDO VETOR  --|\n");
            printf("\n");

            int i = 0;

            do
            {
                printf("%d Digite um numero para o array: ", i);
                int check = scanf("%d", &elemento);
                limpaInput();
                
                /* Verificação de input */
                if(check == 1)
                {
                    if(elemento < 6 || elemento > 14)
                    {
                        printf("Número inválido --> ");
                        invalido = 1;
                    }
                    else
                    {
                        array[i] = elemento;
                        i++;
                    }
                    
                }
                else if(check != 1)
                {
                    /* Verificação se o input é uma letra */
                    printf("Letras não são aceites --> ");
                    inputLetra = 1;
                }
                

            }while(i < 16);

            invalido = 0;
            inputLetra = 0;

            printf("\n");

            for(n=0; n<65; n++)
            {
                printf("-");
            }
            printf("\n");

            for(n=0; n<27; n++)
            {
                printf(" ");
            }
            run = 2;

        while(run == 2 && fimPrograma == 0){

            printf("↓ VETOR ↓\n");
            printf("\n");
            printf("\t   ");
            for(int i = 0; i < 16; i++){

            printf("%d ", array[i]); 

            }
            printf("\n");

            for(n=0; n<65; n++)
            {
                printf("-");
            }
            printf("\n");

            /*   ↓ Menu principal ↓   */
            
            printf(" \n");
            for(n=0; n<27; n++)
            {
                printf(" ");
            }
            /* Menu das opções */
            printf("   MENU\n");
            printf("\n");
            printf(" . 1 - Identificação do elemento do vetor mais próximo de 15;.\n");
            printf(" . 2 - Cálculo da multiplicação de cada elemento  do  vetor com o último elemento do vetor.\n");
            printf(" . 3 - Construção de uma matriz 16 por 16, em que cada linha é composta\n\t pelo vetor lido (primeira linha) e por permutações dos seus valores (outras linhas).\n");
            printf(" . 4 - Devolução dos valores do vetor que são divisíveis por três.\n");
            printf(" . 5 - Cálculo do seno (sin) de todos os elementos no vetor.\n");
            printf(" . 6 - Devolução do vetor ordenado por ordem crescente.\n");
            printf(" . 7 - Extras.\n");
            printf("\n");

            do
            {
                printf("Escolha: ");
                scanf("%d", &escolha);
                limpaInput();

                if((escolha < 1 || escolha > 8) || isalpha(escolha) > 0)
                {
                    /* Verificação de input */
                    printf("✘  Input inválido! --> ");
                } 

                switch(escolha){

                    default:
                        printf("Opção Inválida\n");
                        break;

                    case 1:
                        /* Identificação do valor mais próximo de 15 */
                        printf("O elemento do vetor mais proximo de 15 é %d!\n", proximoQuinze(array));
                        break;

                    case 2:
                        /* Cálculo da multiplicação de cada elemento  do  vetor com o último elemento */
                        printf("\nMultiplicação: ");
                        for(int i = 0; i < tamVetor; i++)
                        {
                            printf("%d ", Multiultimoelemento(array[i], array[tamVetor]));
                        }
                        printf("\n");
                        break;

                    case 3:
                        /* Construção de uma matriz 16 por 16, em que cada linha é composta pelo vetor lido (primeira linha) 
                        e por permutações dos seus valores (outras linhas) */

                        matrizPermutacao(array);
                        break;

                    case 4:
                    /* Devolução dos valores do vetor que são divisíveis por três */
                        printf("\nMultiplos de três: ");
                        for(int mult = 0; mult < tamVetor; mult++)
                        {
                            num = array[mult];

                            if(Multiplodetres(num) == 0)
                            {
                                printf("%d ", num);
                            }
                        }
                        printf("\n");
                        break;

                    case 5:
                    /* Cálculo do seno (sin) de todos os elementos no vetor */
                        printf("Valores: ");
                        for(int s = 0; s < tamVetor; s++)
                        {
                            printf("%d ", array[s]);
                        }
                        printf("\nSeno do valores: ");
                        for(int seno = 0; seno < tamVetor; seno++)
                        {
                            printf("%.2f ", sind(array[seno]));
                        }
                        printf("\n");
                        break;

                    case 6:
                        /* Devolução do vetor ordenado por ordem crescente */
                        ordenaAscendente(array);
                        break;

                    case 7:
                        /* Funcionalidades extras */
                        printf("\n");
                        for(n=0; n<27; n++)
                        {
                            printf(" ");
                        }

                        printf("   EXTRAS\n");
                        printf("\n");
                        printf(" . 1 - Leitura de um novo vetor, cálculo e devolução do produto interno.\n");
                        printf(" . 2 - Identificação de todos os números primos no vetor inicial.\n");
                        printf(" . 3 - Leitura  de  um novo vetor  1x16,  cálculo  e  devolução  da  matriz 16x16 \n\t resultante do produto do vetor inicial com o novo vetor gerado.\n");
                        printf(" . 4 - Cálculo do determinante da matriz referida no ponto anterior.\n");
                        printf("\n");

                        printf("Escolha: ");
                        scanf("%d", &escolhaextra);
                        limpaInput();

                        while((escolhaextra < 1 || escolhaextra > 3) || isalpha(escolhaextra) > 0)
                        {
                            /* Verificação de input */
                            printf("✘  Input inválido! --> ");
                            printf("Escolha: ");
                            scanf("%d", &escolhaextra);
                            limpaInput();
                        } 

                        switch(escolhaextra){
                            case 1:
                                /* Leitura de um novo vetor, cálculo e devolução do produto interno */
                                vetor(array);
                                break;

                            case 2:
                                /* Identificação de todos os números primos no vetor inicial */
                                isprime(array);
                                break;

                            case 3:
                                /* Leitura  de  um novo vetor  1x16,  cálculo  e  devolução  da  matriz 16x16
                                        resultante do produto do vetor inicial com o novo vetor gerado */
                                matrizProduto(array);
                                break;

                            default:
                                printf("Opção Inválida!\n");
                                break;

                        }
                } 
            }while (escolha < 1 || escolha >= 8);  

            printf(" \n");
            for(n=0; n<65; n++)
            {
                printf("-");
            }
            printf("\n");
            
            printf("Pretende recomeçar o programa: ");
            scanf("%c", &resposta);
            limpaInput();

            while(resposta != 'N' && resposta != 'n' && resposta != 'S' && resposta != 's')
            {
                printf(" - Erro! Digite uma resposta válida [S/N] --> ");
                scanf(" %c", &resposta);
                limpaInput();
            }

            if(resposta == 'n' || resposta == 'N'){
                run = 0;
                printf("\n");
                info();
                break;
            }
            else
            {
                printf("Pretende criar outro vetor: ");
                scanf("%c", &respostaVetor);
                limpaInput();

                while(respostaVetor != 'N' && respostaVetor != 'n' && respostaVetor != 'S' && respostaVetor != 's'){
                    printf(" - Erro! Digite uma resposta válida [S/N] --> ");
                    scanf(" %c", &respostaVetor);
                    limpaInput();
                }
                if(respostaVetor == 's' || respostaVetor == 'S'){
                    run = 1;
                }
                else
                {
                    run = 2;
                }
            }   
        }
        }
    return 0;
}