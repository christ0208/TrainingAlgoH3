#include<stdio.h>

int main(){
    int testCase = 0;
    int n = 0;
    char str[100001] = "";

    scanf("%d", &testCase);
    getchar();

    for (int i = 0; i < testCase; i++)
    {
        int count = 0;
        scanf("%d %s", &n, str);
        getchar();

        for (int j = 0; j < n; j++)
        {
            if(str[j] == '0') count++;
        }

        printf("Case #%d: %d\n", i+1, count);
    }

    return 0;
}