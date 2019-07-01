#include<stdio.h>

int isPerfect(int k, int totalSum, int currDivisor){
    if(k == currDivisor && k == totalSum) return 1;
    else if(k == currDivisor && k != totalSum) return 0;
    else if(k % currDivisor == 0) {
        totalSum += currDivisor;
    }
    return isPerfect(k, totalSum, currDivisor + 1);
}

int main(){
    int testCase = 0;

    scanf("%d", &testCase);
    getchar();

    for (int i = 0; i < testCase; i++)
    {
        int number = 0;
        scanf("%d", &number);
        getchar();

        printf("Case #%d: %s\n", i+1, (isPerfect(number, 0, 1) == 1) ? "YES" : "NO");
    }
    

    return 0;
}