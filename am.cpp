#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int testCase = 0, n = 0;
    FILE *fp = fopen("testdata.in", "r");

    fscanf(fp, "%d\n", &testCase);

    for (int i = 0; i < testCase; i++)
    {
        fscanf(fp, "%d\n", &n);
        char str[n+1][11] = {""}, tempStr[11] = "";
        int money[n+1] = {0}, tempMoney = 0;

        for (int j = 0; j < n; j++)
        {
            fscanf(fp, "%s %d\n", str[j], &money[j]);    
        }

        for (int j = 0; j < n; j++)
        {
            for (int k = j+1; k < n; k++)
            {
                if(money[j] < money[k]) {
                    tempMoney = money[j];
                    money[j] = money[k];
                    money[k] = tempMoney;

                    strcpy(tempStr, str[j]);
                    strcpy(str[j], str[k]);
                    strcpy(str[k], tempStr);
                }
            }
        }
        
        printf("Case #%d:\n", i+1);
        for (int j = 0; j < n; j++)
        {
            printf("%s\n", str[j]);
        }
    }

    return 0;
}