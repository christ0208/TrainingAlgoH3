#include<stdio.h>

int main(){
    int testCase = 0;

    scanf("%d", &testCase);
    getchar();

    for (int i = 0; i < testCase; i++)
    {
        int people = 0;
        double scoreBefore = 0, liliScore = 0;

        scanf("%d %lf %lf", &people, &scoreBefore, &liliScore);
        getchar();

        printf("Case #%d: %.4lf\n", i+1, ((scoreBefore * people) + liliScore)/(people + 1));
    }

    return 0;
}