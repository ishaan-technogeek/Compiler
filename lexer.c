#include "lexerDef.h"
#include <string.h>
#include <stdio.h>


// DFA state
int state =0;
// Stores the line count
int lineCount = 1;
// Flag to check if input is exhausted, used to return EOF directly if getStream has depleted the input file
int inputExhausted = 0;
// A flag variable which indicates whether the next character to be read is being called after a retraction => It is needed to prevent a double count of \n after a retraction
int isRetracted = 0;

void initTwinBuffer(TwinBuffer* B) {
    B->currentBuffer = 0;
    B->bufferToBeLoaded = 1;
}
    // TwinBuffer B;
    // initTwinBuffer(B);

FILE *getStream(FILE *fp){
    if(inputExhausted != 0)
        return EOF;

    int flag = read(fp,buffPair[bufferToBeLoaded], BUFFER_SIZE);

    bufferToBeLoaded = 1 - bufferToBeLoaded;
    currentBuffer = 1- currentBuffer;
    if(flag == -1)
    {
        printf("Error: Input Buffers failed to be loaded.\n");
        return -1;
    }
    if(flag ==0 || flag < BUFFER_SIZE)
    {
        inputExhausted = 1;
    }

}