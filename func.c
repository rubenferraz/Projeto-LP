#include<stdio.h>
#include "functionalities.h"

/*   ↓ Limpa o stdin ↓   */
void limpaInput()
{
    while (getchar() != '\n');
}

int Multiultimoelemento(int num, int lastElement)
{
  return num*lastElement;
}

int Multiplodetres(int num)
{
  return num%3;
}

double sind (int num){

  double rad, val;

  val = PI / 180;
  rad = sin(num*val);

  return rad;   
}

int proximoQuinze(int vetor[]){

/*Ao analisar o objetivo o grupo apercebeu-se que o elemento cujo 
vetor[i] é mais próximo de 15 é o maior elemento do array.

Ideia: esta função pode estar vetor[i] header tal como 
todas as outras de mode que no main script sófique a função main*/

  int max = 5;

  for(int i = 0; i < tamVetor; i++){

      if(vetor[i] > max){
          max = vetor[i];
      }
  }
  return max;
}

void ordenaAscendente(int vetor[tamVetor]) {

  int valorTemp;
  int copia[15];

  for (int i = 0; i < tamVetor; i++)
  {
    copia[i] = vetor[i];
  }

  for (int i = 0; i < tamVetor; i++)
  {
    for (int j = 0; j < 15; j++)
    {
      if (copia[i] < copia[j])
      {
        valorTemp = copia[i];
        copia[i] = copia[j];
        copia[j] = valorTemp;
      }
    }
  }
  printf("\nvetor: ");

  for (int i = 0; i < tamVetor; i++)
  {
    printf("%d ", copia[i]);
  }
  printf("\n");
}

void isprime(int vetor[]){
  typedef struct{
    int num;
    int prime;
  }
  NUMEROS;

  NUMEROS nums[tamVetor];
  int resultado = 0;

  for (int x = 0; x < tamVetor; x++){
    nums[x].num = vetor[x];
    for(int j = 2; j <= nums[x].num/2; j++){

      if(nums[x].num %j == 0){
        resultado++;
      }
    }

    if(resultado == 0){
        nums[x].prime = 1;
    }else{
        nums[x].prime = 0;
    }

    resultado = 0;
    }

    printf("\nPrimos: ");

     for (int p = 0; p < tamVetor; p++){
      if(nums[p].prime == 1){
        printf("%d ",nums[p].num);
      }
     }
      printf("\n");

      printf("\nNão primos: ");
    
     for (int np = 0; np < tamVetor; np++){
      if(nums[np].prime == 0){
        printf("%d ",nums[np].num);
      }
     }
     printf("\n");
}

/* Leitura de um novo vetor, cálculo e devolução do produto interno. */
void vetor(int arr[])
{
    printf("\t\t  |--  INICIALIZANDO SEGUNDO VETOR  --|\n");
    printf("\n");

    int i = 0, n = 0, produto = 0;
    int elemento, check, invalido, inputLetra;
    int segArray[16];

    do
    {
        printf("%d Digite um numero para o array: ", i);
        int check = scanf("%d", &elemento);
        limpaInput();

        if(check == 1)
        {
            if(elemento < 6 || elemento > 14)
            {
                printf("Número inválido --> ");
                invalido = 1;
            }
            else
            {
                segArray[i] = elemento;
                i++;
            }
            
        }
        else if(check != 1)
        {
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
    printf("\n");
    printf("Vetor Original:");
    for(int z =0; z<16; z++)
    {
        printf("%4d", arr[z]);
    }
    printf("\n\n");

    printf("Vetor Secundário:");
    for(int k =0; k<16; k++)
    {
        printf("%4d", segArray[k]);
    }
    printf("\n\n");

    for(int d =0; d<16; d++)
    {
        produto = produto+(arr[d]*segArray[d]);
    }
    printf("Produto interno: %d\n", produto);
}

/* 3 - Leitura  de  um novo vetor  1x16,  cálculo  e  devolução  da  matriz 16x16 
    resultante do produto do vetor inicial com o novo vetor gerado. */

void matrizProduto(int arr[])
{
    printf("\t\t  |--  INICIALIZANDO SEGUNDO VETOR  --|\n");
    printf("\n");

    int i = 0, n = 0, produto = 0;
    int elemento, check, invalido, inputLetra;
    int matrizProduto[16][16], outroArray[16];

    do
    {
        printf("%d Digite um numero para o array: ", i);
        int check = scanf("%d", &elemento);
        limpaInput();

        if(check == 1)
        {
            if(elemento < 6 || elemento > 14)
            {
                printf("Número inválido --> ");
                invalido = 1;
            }
            else
            {
                outroArray[i] = elemento;
                i++;
            }
            
        }
        else if(check != 1)
        {
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
    printf("\n");
    printf("Vetor Original:");
    for(int z =0; z<16; z++)
    {
        printf("%4d", arr[z]);
    }
    printf("\n\n");

    printf("Vetor Secundário:");
    for(int k =0; k<16; k++)
    {
        printf("%4d", outroArray[k]);
    }
    printf("\n\n");

    for(int col=0; col<16; col++)
    {
        for(int lin=0; lin<16; lin++)
        {
            matrizProduto[lin][col] = arr[lin]*outroArray[col];
            printf("%4d", matrizProduto[lin][col]);
        }
        printf("\n");
    }
}
// Isto altera o vetor! e não a cópia
void mudaValores (int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void imprimeArray (int arr1[], int n)
{    
    for (int i = 0; i < n; i++)
        printf("%3d ", arr1[i]);
    printf("\n");
}
void baralhaVetor ( int arr1[], int n )
{
    srand(time(NULL));
    for (int i = n-1; i > 0; i--)
    {
        int j = rand() % (i+1);
        mudaValores(&arr1[i], &arr1[j]);
    }
}
void matrizPermutacao(int arr[])
{
  int n = 16;
  int i;
  int copiaArray[16];
 
 /* Imprime o vetor original */

	for(i = 0; i < n; i++)
		{
			printf("%3d ", arr[i]);
      copiaArray[i] = arr[i];
		}
	printf("\n");

  /* Imprime permutações do vetor original */

  for(int i = 0; i < 15; i++)
  {
    baralhaVetor (arr, n);
    imprimeArray(arr, n);
    //printf("\n");
  }
  for(int e = 0; e < 15; e++)
  {
    arr[e] = copiaArray[e];
  }
}

void info(){
  printf("//*||Ajuda vem a caminho||*//\n");
  printf("NOME\n");
  printf("\n\tTrabalho de Laboratórios de Programação\n");
  printf("\nTRABALHO REALIZADO POR:\n");
  printf("\n");
  printf("* --> Aluno: Gonçalo valente, Número: a46379\n");
  printf("* --> Aluno: Marco Bernardes, Número: a45703\n");
  printf("* --> Aluno: Pedro Hilário, Número: a45850\n");
  printf("* --> Aluno: Ruben Serrano, Número: a46325\n");
  printf("* --> Aluno: Rúben Ferraz, Número: a45590\n");
  printf("\n");
  printf("DESCRIÇÃO\n");
  printf("\tTodos os projetos consistem no desenvolvimento de um programa que permite \n\tfazer cálculos sobre um conjunto de números.\n");
}

void help(){
  printf("NOME\n");
  printf("\n\tTrabalho de Laboratórios de Programação\n");
  printf("\n");
  printf("DESCRIÇÃO\n");
  printf("\tTodos os projetos consistem no desenvolvimento de um programa que permite \n\tfazer cálculos sobre um conjunto de números.\n");
  printf("\n");
  printf("ARGUMENTOS IMPLEMENTADOS\n");
  printf("\n");
  printf("\t-i, --info\n");
  printf("\t\tmostra informação sobre o trabalho e o grupo .\n");
  printf("\n");
  printf("\t-h, --help\n");
  printf("\t\tmostra ajuda para tirar as duvidas todas do trabalho .\n");
}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     #include<stdio.h>
#include "functionalities.h"

/*   ↓ Limpa o stdin ↓   */
void limpaInput()
{
    while (getchar() != '\n');
}

int Multiultimoelemento(int num, int lastElement)
{
  return num*lastElement;
}

int Multiplodetres(int num)
{
  return num%3;
}

double sind (int num){

  double rad, val;

  val = PI / 180;
  rad = sin(num*val);

  return rad;   
}

int proximoQuinze(int vetor[]){

/*Ao analisar o objetivo o grupo apercebeu-se que o elemento cujo 
vetor[i] é mais próximo de 15 é o maior elemento do array.

Ideia: esta função pode estar vetor[i] header tal como 
todas as outras de mode que no main script sófique a função main*/

  int max = 5;

  for(int i = 0; i < tamVetor; i++){

      if(vetor[i] > max){
          max = vetor[i];
      }
  }
  return max;
}

void ordenaAscendente(int vetor[tamVetor]) {

  int valorTemp;
  int copia[15];

  for (int i = 0; i < tamVetor; i++)
  {
    copia[i] = vetor[i];
  }

  for (int i = 0; i < tamVetor; i++)
  {
    for (int j = 0; j < 15; j++)
    {
      if (copia[i] < copia[j])
      {
        valorTemp = copia[i];
        copia[i] = copia[j];
        copia[j] = valorTemp;
      }
    }
  }
  printf("\nvetor: ");

  for (int i = 0; i < tamVetor; i++)
  {
    printf("%d ", copia[i]);
  }
  printf("\n");
}

void isprime(int vetor[]){
  typedef struct{
    int num;
    int prime;
  }
  NUMEROS;

  NUMEROS nums[tamVetor];
  int resultado = 0;

  for (int x = 0; x < tamVetor; x++){
    nums[x].num = vetor[x];
    for(int j = 2; j <= nums[x].num/2; j++){

      if(nums[x].num %j == 0){
        resultado++;
      }
    }

    if(resultado == 0){
        nums[x].prime = 1;
    }else{
        nums[x].prime = 0;
    }

    resultado = 0;
    }

    printf("\nPrimos: ");

     for (int p = 0; p < tamVetor; p++){
      if(nums[p].prime == 1){
        printf("%d ",nums[p].num);
      }
     }
      printf("\n");

      printf("\nNão primos: ");
    
     for (int np = 0; np < tamVetor; np++){
      if(nums[np].prime == 0){
        printf("%d ",nums[np].num);
      }
     }
     printf("\n");
}

/* Leitura de um novo vetor, cálculo e devolução do produto interno. */
void vetor(int arr[])
{
    printf("\t\t  |--  INICIALIZANDO SEGUNDO VETOR  --|\n");
    printf("\n");

    int i = 0, n = 0, produto = 0;
    int elemento, check, invalido, inputLetra;
    int segArray[16];

    do
    {
        printf("%d Digite um numero para o array: ", i);
        int check = scanf("%d", &elemento);
        limpaInput();

        if(check == 1)
        {
            if(elemento < 6 || elemento > 14)
            {
                printf("Número inválido --> ");
                invalido = 1;
            }
            else
            {
                segArray[i] = elemento;
                i++;
            }
            
        }
        else if(check != 1)
        {
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
    printf("\n");
    printf("Vetor Original:");
    for(int z =0; z<16; z++)
    {
        printf("%4d", arr[z]);
    }
    printf("\n\n");

    printf("Vetor Secundário:");
    for(int k =0; k<16; k++)
    {
        printf("%4d", segArray[k]);
    }
    printf("\n\n");

    for(int d =0; d<16; d++)
    {
        produto = produto+(arr[d]*segArray[d]);
    }
    printf("Produto interno: %d\n", produto);
}

/* 3 - Leitura  de  um novo vetor  1x16,  cálculo  e  devolução  da  matriz 16x16 
    resultante do produto do vetor inicial com o novo vetor gerado. */

void matrizProduto(int arr[])
{
    printf("\t\t  |--  INICIALIZANDO SEGUNDO VETOR  --|\n");
    printf("\n");

    int i = 0, n = 0, produto = 0;
    int elemento, check, invalido, inputLetra;
    int matrizProduto[16][16], outroArray[16];

    do
    {
        printf("%d Digite um numero para o array: ", i);
        int check = scanf("%d", &elemento);
        limpaInput();

        if(check == 1)
        {
            if(elemento < 6 || elemento > 14)
            {
                printf("Número inválido --> ");
                invalido = 1;
            }
            else
            {
                outroArray[i] = elemento;
                i++;
            }
            
        }
        else if(check != 1)
        {
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
    printf("\n");
    printf("Vetor Original:");
    for(int z =0; z<16; z++)
    {
        printf("%4d", arr[z]);
    }
    printf("\n\n");

    printf("Vetor Secundário:");
    for(int k =0; k<16; k++)
    {
        printf("%4d", outroArray[k]);
    }
    printf("\n\n");

    for(int col=0; col<16; col++)
    {
        for(int lin=0; lin<16; lin++)
        {
            matrizProduto[lin][col] = arr[lin]*outroArray[col];
            printf("%4d", matrizProduto[lin][col]);
        }
        printf("\n");
    }
}
// Isto altera o vetor! e não a cópia
void mudaValores (int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void imprimeArray (int arr1[], int n)
{    
    for (int i = 0; i < n; i++)
        printf("%3d ", arr1[i]);
    printf("\n");
}
void baralhaVetor ( int arr1[], int n )
{
    srand(time(NULL));
    for (int i = n-1; i > 0; i--)
    {
        int j = rand() % (i+1);
        mudaValores(&arr1[i], &arr1[j]);
    }
}
void matrizPermutacao(int arr[])
{
  int n = 16;
  int i;
  int copiaArray[16];
 
 /* Imprime o vetor original */

	for(i = 0; i < n; i++)
		{
			printf("%3d ", arr[i]);
      copiaArray[i] = arr[i];
		}
	printf("\n");

  /* Imprime permutações do vetor original */

  for(int i = 0; i < 15; i++)
  {
    baralhaVetor (arr, n);
    imprimeArray(arr, n);
    //printf("\n");
  }
  for(int e = 0; e < 15; e++)
  {
    arr[e] = copiaArray[e];
  }
}

void info(){
  printf("//*||Ajuda vem a caminho||*//\n");
  printf("NOME\n");
  printf("\n\tTrabalho de Laboratórios de Programação\n");
  printf("\nTRABALHO REALIZADO POR:\n");
  printf("\n");
  printf("* --> Aluno: Gonçalo valente, Número: a46379\n");
  printf("* --> Aluno: Marco Bernardes, Número: a45703\n");
  printf("* --> Aluno: Pedro Hilário, Número: a45850\n");
  printf("* --> Aluno: Ruben Serrano, Número: a46325\n");
  printf("* --> Aluno: Rúben Ferraz, Número: a45590\n");
  printf("\n");
  printf("DESCRIÇÃO\n");
  printf("\tTodos os projetos consistem no desenvolvimento de um programa que permite \n\tfazer cálculos sobre um conjunto de números.\n");
}

void help(){
  printf("NOME\n");
  printf("\n\tTrabalho de Laboratórios de Programação\n");
  printf("\n");
  printf("DESCRIÇÃO\n");
  printf("\tTodos os projetos consistem no desenvolvimento de um programa que permite \n\tfazer cálculos sobre um conjunto de números.\n");
  printf("\n");
  printf("ARGUMENTOS IMPLEMENTADOS\n");
  printf("\n");
  printf("\t-i, --info\n");
  printf("\t\tmostra informação sobre o trabalho e o grupo .\n");
  printf("\n");
  printf("\t-h, --help\n");
  printf("\t\tmostra ajuda para tirar as duvidas todas do trabalho .\n");
}