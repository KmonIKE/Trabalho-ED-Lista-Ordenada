#include"cesarkeyInsere.h"
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include "fosorioSimples.h"

void cesarInsere(int a){

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
      Elem *lista = *li;
      Elem *insere;
      Elem *aux;
      

      int cont = 0;
      int cont2 = 0;
      int p = 0;                 //[a][b][*][c][d] no
                                 //[a][b][c][d] insere
        while(no != NULL){

          if(cont2 == 3){
               
          aux = no->prox;         
           
          insere = (Elem*) malloc(sizeof(Elem));
          insere->dado = '*';          
          //insere->prox = no->prox;
          no->prox = insere;          
          //no = insere;
          //no = no->prox;
          insere->prox = aux;
          //no = insere;
          //no = insere->prox;                 
          no = no->prox;
          printf("%c",no->dado);
          printf("%c",lista->dado+key[p]);

//HELLO WORLD! 01234567890 BYE BYE.                  
          no = no->prox;
          lista = lista->prox; 
          lista = lista->prox;
          ///printf("%c",no->dado);
          //printf("\n%d\n",cont2);
          
          cont2 = 0;                   
          }
          else {
          
          printf("%c",no->dado+key[p]);
          no = no->prox;    
          lista = lista->prox;   
          //cont2++;  

          }
          cont++;
          cont2++;         
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

      fgets(auxKey, 10, stdin);
      auxKey[strlen(auxKey) - 1] = '\0';
      //setbuf(stdin, NULL);

       for(int n = 0;auxKey[n] != '\0'; n++)       
     
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
      int cont2 = 0;
      int p = 0;

        while(no != NULL){

          if(no->dado == '*') {

          no = no->prox;         
            
          }

         else{

          printf("%c",no->dado-key[p]);

          no = no->prox;
          cont++;
          cont2++;
          p++;

          if(cont%5 == 0) p = 0;
          
         }          

        } 


    libera_lista(li);
    exit(0);

 }

  
}