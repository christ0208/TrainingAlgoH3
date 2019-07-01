#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void printReverse(char str[], int n){
    if(n < 0) return;
    printf("%c", str[n]);
    printReverse(str, n-1);
}

int main(){
    FILE *fp = fopen("testdata.in", "r");
    char str[100001] = "";

    while(fscanf(fp, "%[^\n]\n", str) != EOF){
        printReverse(str, strlen(str) - 1);
        printf("\n");
    }

    return 0;
}