#include<stdio.h>

int main(){
    int length = 0;

    scanf("%d", &length);
    getchar();

    char str[length + 1] = "";
    scanf("%s", str);
    getchar();

    int total = 0;
    for (int i = 0; i < length; i++)
    {
        total += ((str[i] % 'A') + 1);
    }

    for (int i = 0; i < length; i++)
    {
        str[i] += (total % 26);
        if(str[i] > 'Z') str[i] = str[i] - ('Z' - 'A') - 1;
    }
    
    printf("%s\n%d\n", str, total);

    return 0;
}