#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define T 10

void Inverter nletras(char palavra[T], char Nova[T], int nletras);
int main (void)
{
   char palavra[T], Nova[T];
   int i, j ,nletras;
   printf("palavra:"); scanf("\n%[^\n]",palavra);
   strcpy(Nova, palavra);
   printf("numero de letras para inverter entre [2,%i]",strlen(palavra));
   scanf("%i",&nletras);
   if(nletras < 2 || nletras > strlen(palavra)){
        printf("erro na escolha do numero de letras.\n");
   }else{
   strcpy(Nova, palavra);
   j = 0;
   for(i=nletras-1;i>=0/i--){

   }return 0;}


