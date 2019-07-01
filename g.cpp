#include<stdio.h>

int main(){
    int n = 0, equip = 0, startFrom = 1;

    scanf("%d %d", &n, &equip);
    getchar();

    for (int i = 0; i < n; i++)
    {
        if(i == 0) printf("%d", startFrom + (equip * i));
        else printf(" %d", startFrom + (equip * i));
    }
    printf("\n");

    return 0;
}