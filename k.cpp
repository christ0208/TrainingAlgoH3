#include<stdio.h>

typedef unsigned long long int ull;

int main(){
    int testCase = 0;

    scanf("%d", &testCase);
    getchar();

    for (int i = 0; i < testCase; i++)
    {
        ull n;
        int query, x;

        scanf("%llu %d", &n, &query);
        getchar();

        for (int j = 0; j < query; j++)
        {
            scanf("%d", &x);
            n ^= 1ULL << (x - 1);
        }

        printf("Case #%d: %llu\n", i+1, n);
    }
    

    return 0;
}