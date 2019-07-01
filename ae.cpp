#include<stdio.h>
#include<stdlib.h>

int main(){
    int testCase = 0, n = 0;

    FILE *fp = fopen("testdata.in", "r");

    fscanf(fp, "%d\n", &testCase);

    for (int i = 0; i < testCase; i++)
    {
        fscanf(fp, "%d\n", &n);
        char answers[n+1], answer;
        int idx = 0;

        for (int j = 0; j < n; j++)
        {
            fscanf(fp, "%d. %c\n", &idx, &answer);
            answers[idx - 1] = answer;
        }

        printf("Case #%d:\n", i+1);
        for (int j = 0; j < n; j++)
        {
            printf("%d. %c\n", j+1, answers[j]);
        }
    }
    fclose(fp);
    

    return 0;
}