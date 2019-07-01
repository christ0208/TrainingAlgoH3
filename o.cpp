#include<stdio.h>

int log2(unsigned long long int n){
    if(n < 2) return 0;
    else return 1+log2(n/2);
}

int main(){
    int testCase = 0;

    scanf("%d", &testCase);
    getchar();

    for (int i = 0; i < testCase; i++)
    {
        unsigned long long int input = 0;
        scanf("%llu", &input);
        getchar();

        printf("Case #%d: %d\n", i+1, log2(input));
    }
    

    return 0;
}