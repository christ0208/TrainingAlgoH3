#include<stdio.h>

int strlen(char *str){
    int i = 0;
    while(str[i] != '\0') i++;
    return i;
}

void reverseNumber(const char *numStr, int idx){
    if(idx < 0) return;
    printf("%c", numStr[idx]);
    reverseNumber(numStr, idx - 1);
}

int main(){
    int testCase = 0;

    scanf("%d", &testCase);
    getchar();

    for (int i = 0; i < testCase; i++)
    {
        char str[101] = "";
        scanf("%s", str);
        getchar();

        printf("Case #%d: ", i+1);
        reverseNumber(str, strlen(str) - 1);
        printf("\n");
    }
    

    return 0;
}