//
//  linkedlist.h
//  LinkedList_simple
//
//  Created by Mingmanas Sivaraksa
//

#ifndef linkedlist_h
#define linkedlist_h
struct node
{
    char data;
    struct node *nextPtr;
};

typedef struct node Node;
typedef struct node* NodePtr;

// pop(&top)
/*int pop(NodePtr *top)
{
    NodePtr t;
    if(*top=NULL)
    {
        int value=(*top)->data;
        t=*top;
        value=t->data;
        *top=t->nextPtr;
        //free
        free(t);
        return value;
        printf("pop %d\n ",value);
    }
    else printf("stack is empty\n");
}

//push(&top,5)
void push(NodePtr* t,int num)
{
    NodePtr newnode=(NodePtr)malloc(sizeof(Node));
    if(newnode)//protect full memory
    {
        newnode->data=num;
        newnode->nextPtr=*t;
        *t=newnode;
    }
    else printf("memory is full\n");
}*/


#endif
