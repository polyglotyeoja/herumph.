#ifndef _STACK_H
#define _STACK_H

typedef char stackElementT;

typedef struct {
    stackElementT *contents;
    int top;
    int maxSize;
} stackT;


void StackInit(stackT *stackP, int maxSize);
void StackDestroy(stackT *stackP);



#endif
