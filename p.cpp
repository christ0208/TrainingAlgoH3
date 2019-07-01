#include<stdio.h>

bool checkPrime(int n, int currDivisor){
    if(n == currDivisor) return true;
    else if(n % currDivisor == 0) return false;
    else true && checkPrime(n, currDivisor + 1); 
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

        printf("Case #%d: %s\n", i+1, (checkPrime(number, 2)) ? "YES" : "NO");
    }
    

    return 0;
}