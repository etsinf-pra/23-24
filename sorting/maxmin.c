#include <stdio.h>
#include <time.h>
#include <stdlib.h> 

int max(int a, int b){ 
    int diff = a - b;
    int sign = (diff >> 31) & 1;
    return a - sign * diff;
}

int min(int a, int b){
    return (a < b) ? a : b;
    /*    
    int diff = a - b;
    int sign = (diff >> 31) & 1;
    return b + sign * diff;
    */
}

void swap(int *a, int *b){
    int diff = *a - *b;
    int sign = (diff >> 31);
    *b = *a + sign * diff;
    *a = *a - !sign * diff;
}

int main(){
    int a, b, mn, mx;
    int numexec = 1000000;
    clock_t tic, toc;

    srand(time(NULL));
    
    a = rand() % 100;
    b = a - rand() % 100;
    printf("a = %d, b = %d\n", a, b);
    
    tic = clock();
    for(int i = 0; i < numexec; i++)
        mn = min(a, b);
    toc = clock();
    
    printf("min = %d, time = %f\n", mn, (double)(toc - tic) / CLOCKS_PER_SEC);
    
    tic = clock();
    for(int i = 0; i < numexec; i++)
        mx = max(a, b);
    toc = clock();
    
    printf("max = %d, time = %f\n", mx, (double)(toc - tic) / CLOCKS_PER_SEC); 
 
    swap(&a, &b);
    printf("a (min) = %d, b (max) = %d\n", a, b);
    return 0;
}