#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int power_two(int power){
    if (power == 0){
        return 1;
    };
    return 2 * power_two(power-1);
}



int main(){

    int a = power_two(3);
    printf("This is 2 to the power of 3: %i", a);

    return 0;
}