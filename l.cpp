#include<stdio.h>

int main(){
    int testCase = 0, n = 0, m = 0;

    scanf("%d", &testCase);
    getchar();

    for (int i = 0; i < testCase; i++)
    {
        int minPrice = 1000001;
        scanf("%d %d", &n, &m);
        getchar();

        int arr[n + 1] = {0};

        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[j]);
            if(arr[j] < minPrice) minPrice = arr[j];
        }
        getchar();

        printf("Case #%d: %d\n", i+1, m / minPrice);
    }

    return 0;
}