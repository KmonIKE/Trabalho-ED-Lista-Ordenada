#include"cesar3.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"fosorioSimples.h"


void cesar3(int a){

  Lista *li = cria_lista();

  int i = 0;

  if(a == 1){

    char auxiliar[1050];

    fgets(auxiliar,1050,stdin);
    //setbuf(stdin,NULL);
    auxiliar[strlen(auxiliar)-2] = '\0';

    while(auxiliar[i]!='\0'){

      insere_lista_final(li,auxiliar[i]);

      i++;

    }

    if(li == NULL) return;

      Elem *no = *li;
           

      while(no != NULL){

        printf("%c",no->dado+3);
        
        no = no->prox;

    }

    libera_lista(li);

    exit(0);

  }

  if( a == 2 ){

    char auxiliar[1050];

    fgets(auxiliar,1050,stdin);
    //setbuf(stdin,NULL);
    auxiliar[strlen(auxiliar)-2] = '\0';

    while(auxiliar[i]!='\0'){

      insere_lista_final(li,auxiliar[i]);

      i++;

    }

    if(li == NULL) return;

    Elem *no = *li; 

      while(no != NULL){

        printf("%c", no->dado-3);

        no = no->prox;

      }

  libera_lista(li);
  exit(0);

  }

}







 