#include<stdio.h>

int fibo(int n, int seek){
    if(n == seek) return 1;
    if(n <= 2) return 0;

    return fibo(n-1, seek) + fibo(n-2, seek);
}

int main(){
    int testCase = 0;

    scanf("%d", &testCase);
    getchar();

    for (int i = 0; i < testCase; i++)
    {
        int seekFunction = 0, oriFunction = 0;
        scanf("%d %d", &oriFunction, &seekFunction);
        getchar();

        printf("Case #%d: %d\n", i+1, fibo(oriFunction, seekFunction));
    }
    

    return 0;
}