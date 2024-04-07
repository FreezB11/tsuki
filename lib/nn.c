#include "nn.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define RAND_MAX 2147483647
// nn normalization(float input[]){

// }
float rand_float(void){
    return (float)rand()/(float)RAND_MAX;
}


void LinearREG(float inputs[],float *weights,int length){
    // defining weights array based on the size of the input array..
    int size = length;// sizeof(inputs)/sizeof(inputs[0]);
    nn_initialize bias = rand_float();

    int summ = 0;

    for(size_t i=0;i<size;i++){
        //printf("%f\n",inputs[i]);
        weights[i] = rand_float()*10.0f;
    }

    for(size_t i=0;i<size;i++){
        summ += inputs[i]*weights[i];
    }
    summ += bias;

}