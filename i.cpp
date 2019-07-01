#include<stdio.h>

int main(){
    int testCase = 0;

    scanf("%d", &testCase);
    getchar();

    for (int i = 0; i < testCase; i++)
    {
        unsigned long long int base = 0, target = 0, curr = 1;
        scanf("%llu %llu", &base, &target);
        getchar();

        printf("Case #%d: ", i+1);
        while(target > curr) curr *= base;
        if(target < curr) printf("NAY");
        else if(target == curr) printf("YAY");
        printf("\n");
    }
    

    return 0;
}