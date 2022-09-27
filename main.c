#include <stdio.h>
#include "bizarroStack.h"

int main(void)
{
    StackNodePtr top = NULL;
    printf("Enter an integer: (CTRL Z TO EXIT)");
    unsigned int input = 0;
    scanf("%d", &input);
    BizarreNumber_t num = (BizarreNumber_t) {.type = "SQ\0", .nrOfOpr = 0, .num = input};

    push(&top, num);
    printStack(top);
    for(; input != EOF; scanf("%d", &input))
    {
        
    }
    //scanf("")


    for(int i = 0; i < 5; i++)
    {
    }
}
