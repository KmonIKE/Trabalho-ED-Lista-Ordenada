#include"cesar.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"fosorioSimples.h"

//somar 1 da tabela assc
void cesar(int a){

Lista *li = cria_lista();

int i = 0;

if(a == 1){
  
char auxiliar[1050];

fgets(auxiliar,1050, stdin);
//setbuf(stdin, NULL);
auxiliar[strlen(auxiliar)-2] = '\0';



while(auxiliar[i] != '\0'){
       insere_lista_final(li, auxiliar[i]);
       i++;
}

  if(li == NULL)
        return;
    Elem* no = *li;
    while(no != NULL){
        
        printf("%c",no->dado+1);
        
        no = no->prox;

}

libera_lista(li);
 
exit(0);

}


//somsubtrair 1 da tabela assc

if(a == 2){

char auxiliar[1050];

fgets(auxiliar,1050, stdin);
//setbuf(stdin, NULL);
auxiliar[strlen(auxiliar)-2] = '\0';


while(auxiliar[i] != '\0'){
       insere_lista_final(li, auxiliar[i]);
       i++;
}

  if(li == NULL)
        return;
    Elem* no = *li;
    while(no != NULL){
        //printf("Dado: %c # %p - %p\n",no->dado,no,no->prox);
        printf("%c",no->dado-1);
        
        no = no->prox;

    }
    
    libera_lista(li);
    exit(0);

  }  

}

