
#ifndef stack_h
#define stack_h
#include "node.h"
typedef struct {
	NodePtr top;
	int size;
}Stack;

typedef Stack * StackPtr;
void push(StackPtr s, char num)
{  
    NodePtr newnode=(NodePtr)malloc(sizeof(Node));
    if(newnode)//protect full memory
    {
        newnode->data = num;
        newnode->nextPtr = s->top;
        s->top=newnode;
        s->size++;
    }
    else printf("memory is full\n");

}
char pop(StackPtr s)
{
    NodePtr t;
    if(s->size>0)
    {
        int value=s->top->data;
        t=s->top;
        s->top=t->nextPtr;
        //free
        free(t);
        //printf("pop %c\n",value);
        s->size--;
        return value;
        
    }
    //else printf("stack is empty\n");
    return '\0';
}

void pop_all(StackPtr s)
{
    while(s->size>0) pop(s);
}



#endif
