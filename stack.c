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


