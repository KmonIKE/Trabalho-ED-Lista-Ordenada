#include"cesarkey.h"
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include "fosorioSimples.h"

void cesarkey(int a){

  int i = 0;

  Lista *li = cria_lista();  

    if(a == 1){

      char auxKey[10];
      char auxiliar[1050];
      int key[10];

      fgets(auxKey, 10, stdin);
      auxKey[strlen(auxKey) - 1] = '\0';
      //setbuf(stdin, NULL);
   
     for(int n = 0; auxKey[n] != '\0'; n++)       
     
     key[n] = auxKey[n] - '0';    

      fgets(auxiliar, 1050, stdin);
      //setbuf(stdin, NULL);
      auxiliar[strlen(auxiliar)-2] = '\0';

      while(auxiliar[i] != '\0'){

        insere_lista_final(li, auxiliar[i]);

        i++;

      }

    if(li == NULL) return;

      Elem *no = *li;

      int cont = 0;

      int p = 0;

        while(no != NULL){

          printf("%c",no->dado+key[p]);

          no = no->prox;

          cont++;
          p++;

          if(cont%5 == 0) p = 0;

        }

    libera_lista(li);

    exit(0);

 }

 if(a == 2){

    char auxKey[10];
    char auxiliar[1050];
    int key[10];

      fgets(auxKey,10, stdin);
      
      auxKey[strlen(auxiliar)-1] = '\0';
      //setbuf(stdin, NULL);
      

       for(int n = 0; auxKey[n] !='\0' ; n++)       
     
       key[n] = auxKey[n] - '0';      
        
      
      fgets(auxiliar, 1050, stdin);
     //setbuf(stdin, NULL);
      auxiliar[strlen(auxiliar)-2] = '\0';


   while(auxiliar[i] != '\0'){

     insere_lista_final(li, auxiliar[i]);

     i++;

   }

   if(li == NULL) return;

      Elem *no = *li;

      int cont = 0;

      int p = 0;

        while(no != NULL){

          printf("%c",no->dado-key[p]);

          no = no->prox;

          cont++;
          p++;

          if(cont%5 == 0) p = 0;
          
        }

  libera_lista(li);

  exit(0);

 }

 

}