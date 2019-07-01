#include<stdio.h>

typedef unsigned long long int ull;

int main(){
    int testCase = 0;
    int arr[8] = {1000, 2000, 5000, 10000, 20000, 50000, 100000};
    int amount[8] = {0};
    
    scanf("%d", &testCase);
    getchar();

    for (int i = 0; i < testCase; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            scanf("%d", &amount[j]);
        }
        getchar();

        ull total = 0;
        for (int j = 0; j < 7; j++)
        {
            total += (arr[j] * amount[j]);
        }

        printf("Case #%d: Rp. %llu\n", i+1, total);
    }

    return 0;
}