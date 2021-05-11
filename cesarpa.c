#include"cesarpa.h"
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include "fosorioSimples.h"


void cesarpa(int a){

Lista *li = cria_lista();

int i = 0;

if(a == 1){

  char auxiliar[1050];

  fgets(auxiliar, 1050, stdin);
  //setbuf(stdin,NULL);
  auxiliar[strlen(auxiliar)-2] = '\0';

  while(auxiliar[i]!='\0'){

    insere_lista_final(li, auxiliar[i]);

    i++;

  }

  if(li == NULL) return;

    Elem *no = *li;

    int n = 1;
    int count = 0;

    while(no != NULL){

      printf("%c",no->dado+n);

      no = no->prox;
      n++;
      count++;
      if(count%3 == 0) n = 1;

    }

libera_lista(li);

exit(0);

}

if(a == 2){

char auxiliar[1050];

fgets(auxiliar,1050,stdin);
//setbuf(stdin, NULL);
auxiliar[strlen(auxiliar)-2] = '\0';

while(auxiliar[i]!='\0'){

  insere_lista_final(li, auxiliar[i]);
  i++;

}

if(li == NULL) return;

  Elem *no = *li;

  int n = 1;
  int cont = 0;

  while(no != NULL){

    printf("%c",no->dado-n);

    no = no->prox;

    n++;
    cont++;

    if(cont%3 == 0) n = 1;

  }


libera_lista(li);

exit(0);

}


}


