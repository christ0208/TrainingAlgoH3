#include<stdio.h>

int strlen(char *str){
    int i = 0;
    while(str[i] != '\0') i++;
    return i;
}

void reversePrint(const char *str, int idx){
    if(idx < 0) return;
    
    printf("%c", str[idx]);
    reversePrint(str, idx - 1);
}

int main(){
    int testCase = 0;

    scanf("%d", &testCase);
    getchar();

    for (int i = 0; i < testCase; i++)
    {
        char str[251] = "";
        scanf("%[^\n]", str);
        getchar();

        printf("Case #%d:\n", i+1);
        reversePrint(str, strlen(str) - 1);
        printf("\n");
    }
    

    return 0;
}