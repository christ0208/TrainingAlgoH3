#include<stdio.h>

int main(){
    int testCase = 0, n = 0;

    scanf("%d", &testCase);
    getchar();

    for (int i = 0; i < testCase; i++)
    {
        int max = 0;
        scanf("%d", &n);
        getchar();
        int arr[9] = {0};

        for (int j = 0; j < n; j++)
        {
            int temp = 0;
            scanf("%d", &temp);
            arr[temp - 1]++;
            if(arr[temp - 1] > max) max = arr[temp - 1];
        }

        printf("Case #%d: %d\n", i+1, n - max);
    }
    

    return 0;
}