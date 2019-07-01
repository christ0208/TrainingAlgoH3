#include<stdio.h>

typedef unsigned long long int ull;

ull fcto(ull n){
    if(n <= 1) return 1;
    else return n * fcto(n - 2);
}

int main(){
    int testCase = 0;
    ull num = 0;

    scanf("%d", &testCase);
    getchar();

    for (int i = 0; i < testCase; i++)
    {
        scanf("%llu", &num);
        getchar();

        printf("Case #%d: %llu\n", i+1, fcto(num));
    }
    

    return 0;
}