#include <stdio.h>
#include <stdlib.h>  /* for dynamic allocation */
#include "stack.h"  



void StackInit(stackT *stackP, int maxSize){
  stackElementT *newContents;
  
  newContents = (stackElement *)malloc(sizeof(stackElementT) * maxSize);
  
  if (newContents == NULL) {
    fprintf(stderr, "Insufficient memory to initialize stack. \n");
    exit(1);
  }
  
  stackP->contents = newContents;
  stackP->maxSize = maxSize;
  stackP->top = -1;
  
}

void StackDestroy(stackT *stackP)
{
  
}
