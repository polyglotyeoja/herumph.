#include <stdio.h>
#include <stdlib.h>  /* for dynamic allocation */
#include "stack.h"  



void StackInit(stackT *stackP, int maxSize){
  stackElementT *newContents;
  /* Allocate a new array to hold the contents. */
  
  newContents = (stackElement *)malloc(sizeof(stackElementT) * maxSize);
  
  if (newContents == NULL) {
    fprintf(stderr, "Insufficient memory to initialize stack. \n");
    exit(1);
  }
  
  stackP->contents = newContents;
  stackP->maxSize = maxSize;
  stackP->top = -1; /* empty */
  
}

void StackDestroy(stackT *stackP)
{
  free(stackP->contents); //deallocates the memory previously allocated
  
  stackP->contents = NULL;
  stackP->maxSize = 0;
  stackP->top = -1; /* empty */
}

int StackIsEmpty(stackT *stackP)
{
  return stackP->top < 0;
}

int StackIsFull(stackT *stackP)
{
  return stackP->top >= stackP->maxSize - 1;
}

void StackPush(stackT *stackP, stackElementT element){
  if(StackIsFull(stackP)){
    fprintf(stderr, "Can't push element on stack: stack is full. \n");
    exit(1);
  }
  
  /* Put information in array; update top. */
  
  stackP->content[++stackP->top] = element; //having trouble understanding this line.
  
}

stackElementT StackPop(stackT *stackP)
{
  if(StackIsEmpty(stackP)) {
    fprintf(stderr, "Can't pop element from stack: stack is empty. \n");
    exit(1);
  }
  
  return stackP->contents[stackP->top--];
}



