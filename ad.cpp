#include<stdio.h>

typedef unsigned long long int ull;

int main(){
    int testCase = 0;

    scanf("%d", &testCase);
    getchar();

    for (int i = 0; i < testCase; i++)
    {
        ull input = 0, result = 0;
        scanf("%llu", &input);
        getchar();

        while(input >= 10){
            result = 0;
            while(input != 0){
                result += (input % 10);
                input /= 10;
            }
            input = result;
        }
        printf("%llu\n", input);
    }
    

    return 0;
}