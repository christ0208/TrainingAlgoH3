#include<stdio.h>

typedef unsigned long long int ull;

ull multiplicationSum(ull k, ull n){
    ull total = 0;
    if(k == 0) return n;
    else if(k % 2 == 1) {
        total = 1;
        for (ull i = 1; i <= n; i++) {
            total = (total * multiplicationSum(k - 1, i)) % 1000000007;
        }
    }
    else {
        total = 0;
        for (ull i = 1; i <= n; i++) {
            total = (total + multiplicationSum(k - 1, i)) % 1000000007;
        }
    }
    return total;
}

int main(){
    int testCase = 0;

    scanf("%d", &testCase);
    getchar();

    for (int i = 0; i < testCase; i++)
    {
        ull k = 0, n = 0;
        scanf("%llu %llu", &k, &n);
        getchar();

        printf("MultiplicationSum( %llu , %llu ) = %llu\n", k, n, multiplicationSum(k, n));
    }
    

    return 0;
}