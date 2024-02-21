#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "stack.h"


int main(int argc, char **argv){
  
  int i,N,j,x;
  int c1=0,c2=0;
  Stack s;
  s.top = NULL;
  s.size = 0;
  int match = 0;

printf("Checking the parentheses in argv arguments\n");
for(i=1;i<argc;i++){
    s.size = 0;
   
    for(j=0;j<strlen(argv[i]);j++){
       /* Use stack to help with the parentheses*/
        switch (argv[i][j])
        {
        case '{': push(&s,argv[i][j]); 
                break;
        case '[': push(&s,argv[i][j]); 
                break;
        case '(': push(&s,argv[i][j]); 
                break;
        case ']': x = pop(&s);
                if(x != '[') match=0;
                break;
        case '}': x=pop(&s);
                if(x != '{') match=0;
                break;
        case ')': x=pop(&s);
                if(x != '{') match=0;
                break;
        }
        if(match==0) break;

    }
    if(s.size > 0 ) printf("mismatch ;have open more");
    else if(s.size < 0 ) printf("mismatch ;have close more");
    else if(match == 1) printf("correct");
    else if (match == 0) printf("incorrect");


  }
    return 0;
}
