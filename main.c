#include <stdio.h>
#include<stdlib.h>
#include"cesar.h"
#include"cesar3.h"
#include"cesarkey.h"
#include"cesarkeyInsere.h"
#include"cesarpa.h"
#include "fosorioSimples.h"

int main(void) {

int modo;

scanf("%d\n",&modo);

switch(modo){

    case 1: 

    cesar(1);

    break;
    
    case -1:

    cesar(2);

    break;

    case 2:

    cesar3(1);

    break;

    case -2:

    cesar3(2);

    break;

    case 3:

    cesarpa(1);

    break;

    case -3:

    cesarpa(2);

    break;

    case 4:

    cesarkey(1);
    
    break;

    case -4:
    
    cesarkey(2);

    break;

    case 5:
    
    cesarInsere(1);

    break;

    case -5:
    
    cesarInsere(2);

    break;

    default:
      printf("Escolha um valor valido ente -5 e 5");
      
      break;


} 

return 0;

}

/*
int getCmd(){
  
  int n = 0;
  char cmd[20];
  
  fgets(cmd, 20, stdin);
  setbuf(stdin, NULL);

  if(cmd[0] == '1' && cmd[2] == '\0') n = 1;
  else if(cmd[0] == '2' && cmd[2] == '\0') n = 2;
  else if(cmd[0] == '3' && cmd[2] == '\0') n = 3;
  
  if(n == 1) proxPag();
  else if(n == 2) voltarPag();

  return n;
}
*/