#include <iostream>
#include <string>

using namespace std;


typedef char stackElementT;

typedef struct {
    stackElementT *contents;
    int top;
    int maxSize;
} stackT;


void StackInit(stackT *stackP, int maxSize);
