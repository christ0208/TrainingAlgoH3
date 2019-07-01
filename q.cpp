#include<stdio.h>

typedef unsigned long long int ull;

ull pentanacci(int number){
    if(number == 0) return 0;
    else if(number == 1 || number == 2) return 1;
    else if(number == 3) return 2;
    else if(number == 4) return 3;
    else return pentanacci(number - 1) + pentanacci(number - 2) + pentanacci(number - 3) + pentanacci(number - 4) + pentanacci(number - 5);
}

int main(){
    int number = 0;

    scanf("%d", &number);
    getchar();

    printf("%llu\n", pentanacci(number));

    return 0;
}