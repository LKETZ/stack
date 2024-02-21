#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "stack.h"


int main(int argc, char **argv){
  
  int i,N,j;
  Stack s;
  s.top = NULL;
  s.size = 0;
  
  
  push(&s,5);
  pop(&s);
  push(&s,5);
  push(&s,6);
  push(&s,7);
  pop(&s);
  //pop(&s);
  //pop(&s);
 
 
  

 /*
 Stack s;
 printf("Checking the parentheses in argv arguments\n");
  for(i=1;i<argc;i++){
   
     for(j=0;j<strlen(argv[i]);j++){
       /* Use stack to help with the parentheses


     }


  }
*/



   return 0;
}
