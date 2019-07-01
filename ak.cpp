#include<stdio.h>

int main(){
    int testCase = 0;
    int n = 0;
    int pattern = 0;

    scanf("%d", &testCase);
    getchar();

    for (int i = 0; i < testCase; i++)
    {
        scanf("%d", &n);
        getchar();

        int arr[n+1] = {0};

        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[j]);
            if(j == 1 && arr[j] < arr[j-1]) pattern = 2;
            else if(j == 1 && arr[j] > arr[j-1]) pattern = 1;
            else if(j == 0) {}
            else if((pattern == 1 && arr[j] < arr[j-1]) || (pattern == 2 && arr[j] > arr[j-1])) pattern = 3;
        }
        getchar();
        
        printf("Case #%d: ", i+1);
        if(pattern == 1) printf("Jojo");
        else if(pattern == 2) printf("Lili");
        else printf("Bibi");
        printf("\n");
    }
    

    return 0;
}