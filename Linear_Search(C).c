#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int LinSearch1(int arr[], int len, int obj){
    int a = -1;
    for (int i = 0; i < len; i++){
        if (arr[i] == obj){
            a = i;
        };
    };

    return a;
};

int LinSearch2(int arr[], int len, int obj){
    int a = -1;
    int i = 0;
    while (i < len){
        if (arr[i] == obj){
            a = i;
            break;
        };
    };

    return a;
}

int main(){

    int list[6] = {3, 4, 1, 8, 2, 4};
    int len = 6;
    int nr = 4;

    int a = LinSearch1(list, len, nr);
    int b = LinSearch2(list, len, nr);

    printf("For LinSearch1 the nr. 4 is at pos %i in the array and at pos %i in LinSearch2", a, b);

    return 0;
}