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




    return 0;
}