#include <stdio.h>
#include "function.h"

int main(){
    int start, end, num;
    scanf("%d %d", &start, &end);
    num = numPrime(start, end);
    printf("%d\n", num);
    return 0;
}
