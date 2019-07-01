#include<stdio.h>

int main(){
    int testCase = 0, times = 0;

    scanf("%d", &testCase);
    getchar();

    for (int i = 0; i < testCase; i++)
    {
        int slices = 1;
        scanf("%d", &times);
        getchar();

        printf("Case %d: %d", i+1, slices);
        for (int j = 1; j < times; j++)
        {
            slices += j;
            printf(" %d", slices);
        }
        printf("\n");
        
    }
    

    return 0;
}