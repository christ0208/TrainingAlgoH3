#include<stdio.h>

int getMin(int a, int b){
    return (a < b) ? a : b;
}

int getMax(int a, int b){
    return (a > b) ? a : b;
}

int gcd(int a, int b){
    for (int pivot = getMin(a, b); pivot >= 0; pivot--)
    {
        if(a % pivot == 0 && b % pivot == 0) return pivot;
    }
    return 0;
}

int lcm(int a, int b){
    for (int pivot = getMax(a, b); ; pivot++)
    {
        if(pivot % b == 0 && pivot % a == 0) return pivot;
    }
}

int main(){
    int testCase = 0, a = 0, b = 0;

    scanf("%d", &testCase);
    getchar();

    for (int i = 0; i < testCase; i++)
    {
        scanf("%d %d", &a, &b);
        getchar();

        printf("Case #%d: %d %d\n", i+1, gcd(a, b), lcm(a, b));    
    }
    

    return 0;
}