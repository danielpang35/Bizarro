/*
Daniel Pang
Gizem Kayar
9/25/22
Header file, containing the declarations for the various functions used to implement a
stack of bizarre numbers.

Additionally, the bizarre number struture and the stack node structure are declared,
used to organize the stack and it's data.
*/


typedef struct 
{
    char type[3]; /*e.g. prime = "PR\0", square = "SQ\0"*/
    int nrOfOpr; /*the number of operations done*/
    int num; /* */
} BizarreNumber_t;

typedef struct
{
    BizarreNumber_t info; /*data point*/
    struct Node *next; /*pointer to the next node in the stack*/
} Node;
typedef Node* StackNodePtr; //a pointer node type called StackNodePtr


/* stack functions */

void push(StackNodePtr *topPtr, BizarreNumber_t info);
//pushes a bizarreNumber to the stack
BizarreNumber_t pop(StackNodePtr *topPtr);
//takes the top bizarreNumber off, returns it
int isEmpty(StackNodePtr topPtr);
//checks if the stack is empty
void printStack(StackNodePtr currentPtr);
//prints whole stack
void printStackDetailed(StackNodePtr currentPtr);
//prints stack with more details
StackNodePtr reverseStack(StackNodePtr currentPtr);
//reverses and returns pointer to the new stack order


/* math functions */

int isAbundantNumber(int num); 
//returns abundance (if 0 perfect, if > 0 abundant,if < 0 deficient)
int isPrime(int num);
//returns prime-ness (if 0 perfect, if > 0 abundant,if < 0 deficient)
int isPerfectSquare(int num);
//returns perfect-square-ness (if 0 perfect, if > 0 abundant,if < 0 deficient)


/* recovery function */

StackNodePtr recoverCipher(StackNodePtr mainStack, StackNodePtr helperStack); 
// ^recovers and returns stack of original inputs from 2 stacks