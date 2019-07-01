#include<stdio.h>

int numberPower(int a, int x){
    if(x == 0) return 1;
    else return a * numberPower(a, x - 1);
}

int main(){
    int testCase = 0;

    scanf("%d", &testCase);
    getchar();

    for (int i = 0; i < testCase; i++)
    {
        int number = 0, power = 0;
        scanf("%d %d", &number, &power);
        getchar();

        printf("Case #%d: %d\n", i+1, numberPower(number, power));
    }
    
    return 0;
}