#include<stdio.h>

int main(){
    int testCase = 0, n = 0;
    FILE *fp = fopen("testdata.in", "r");

    fscanf(fp, "%d\n", &testCase);

    for (int i = 0; i < testCase; i++)
    {
        fscanf(fp, "%d\n", &n);
        char str[n+1][11] = {""};
        int totalScore[n+1] = {0};
        int winningStreak[n+1] = {0};
        int maxIdx = -1;

        for (int j = 0; j < n; j++)
        {
            fscanf(fp, "%s\n", str[j]);
        }

        for (int j = 0; j < n * (n-1) / 2; j++)
        {
            int a, b, c, d;
            fscanf(fp, "%d %d %d %d\n", &a, &b, &c, &d);
            if(b > d) winningStreak[a - 1]++;
            else if(b < d) winningStreak[c - 1]++;
            totalScore[a - 1] += b;
            totalScore[c - 1] += d;
        }

        for (int j = 0; j < n; j++)
        {
            if(maxIdx == -1) maxIdx = j;
            else if(winningStreak[maxIdx] < winningStreak[j]) maxIdx = j;
            else if(winningStreak[maxIdx] == winningStreak[j] && totalScore[maxIdx] < totalScore[j]) maxIdx = j; 
        }
        
        printf("Case #%d: %s\n", i+1, str[maxIdx]);
    }
    

    return 0;
}