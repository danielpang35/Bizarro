#include "bizarroStack.h"
#include <stdio.h>

/* stack functions */

void push(StackNodePtr *topPtr, BizarreNumber_t info)
{
    StackNodePtr element = malloc(sizeof(node)); //create node pointer
    element -> info = info; //new node is saved in element
    element -> next = *topPtr; //the new node points to the old node at the top
    *topPtr = element; //the pointer keeping track of the top of the stack is assigned to the new top, element
}
BizarreNumber_t pop(StackNodePtr *topPtr)
{
    if(isEmpty(topPtr))
    {
        printf("Cannot pop from empty stack.");
        return;
    } else {
        StackNodePtr temp = *topPtr; //topPtr is stored in temp pointer
        BizarreNumber_t num = (*topPtr) -> info; //contents is stored in num
        topPtr = (*topPtr) -> next; //topPtr points to the next element in the stack
        free(temp); //free node
        return num;
    }
    
}
int isEmpty(StackNodePtr topPtr) 
{
    return topPtr == NULL;
}
void printStack(StackNodePtr currentPtr) 
{
    puts("The main stack is:\n");
    puts("TOP");
    while(currentPtr -> next != NULL)
    {
        printf(" --> %d", currentPtr -> info);
    }
}
void printStackDetailed(StackNodePtr currentPtr) 
{

}
StackNodePtr reverseStack(StackNodePtr currentPtr) 
{

}


/* math functions */

int isAbundantNumber(int num) 
{

}
int isPrime(int num) 
{

}
int isPerfectSquare(int num) 
{

}


/* recovery function */

StackNodePtr recoverCipher(StackNodePtr mainStack, StackNodePtr helperStack)  
{

}

