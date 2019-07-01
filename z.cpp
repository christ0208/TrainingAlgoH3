#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char arr[100001] = "";
    FILE *fp = fopen("testdata.in", "r");
    
    fscanf(fp, "%[^\n]\n", arr);

    for (int i = strlen(arr) - 1; i >= 0; i--)
    {
        printf("%c", arr[i]);
    }
    printf("\n");

    fclose(fp);

    return 0;
}