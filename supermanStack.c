#include <bizarroStack.h>

/* stack functions */

void push(StackNodePtr *topPtr, BizarreNumber_t info)
{
    StackNodePtr element; //create node pointer
    element -> data = info; //the data component of the pointer element is assigned to info
    topPtr -> next = element; //the next component of the pointer topPtr is assigned to new top, element
}
BizarreNumber_t pop(StackNodePtr *topPtr)
{
    if(isEmpty(topPtr))
    {
        printf("Cannot pop from empty stack.");
        return NULL;
    } else {
        StackNodePtr temp = *topPtr;
        topPtr = topPtr ->next;
        free(temp);
    }
}
int isEmpty(StackNodePtr topPtr) 
{

}
void printStack(StackNodePtr currentPtr) 
{

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
StackNodePtr recoveredStack = NULL;
    int recoveredNum;
    BizarreNumber_t num;
    while(mainStack.next != null)
    {
        num = mainStack.info;
        if(mainstack.data.type == sqr)
        {
            recoveredNum = mainstack.info.num;
            operations = mainstack.info.nrOfOpr;
            recoveredNum = pow(recoveredNum, operations);
            num = (BizarreNumber_t) {.type = }
            push(&recoveredStack, recoveredNum);
        }
    }
}
