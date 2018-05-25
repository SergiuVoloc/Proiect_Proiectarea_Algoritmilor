#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int random (void){

    int i;
    time_t t;
    float r;

    srand((unsigned) time(&t));

    r = ((float)rand()/(float)(500)) * 1.0 ;

    r = ((float)rand()/(float)(100)) * 1.0 ;
    printf("%.2f\n", r ) ;

    return 0 ;
}

int main (){

    random();
}
