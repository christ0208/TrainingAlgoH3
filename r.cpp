#include<stdio.h>

int countVowel(char *str, int idx){
    if(str[idx] == '\0') return 0;
    else if(str[idx] == 'A' || str[idx] == 'a' 
        || str[idx] == 'I' || str[idx] == 'i' 
        || str[idx] == 'U' || str[idx] == 'u'
        || str[idx] == 'E' || str[idx] == 'e'
        || str[idx] == 'O' || str[idx] == 'o') return 1 + countVowel(str, idx+1);
    else return countVowel(str, idx + 1);
}

int main(){
    int testCase = 0;
    char str[101] = "";

    scanf("%d", &testCase);
    getchar();

    for (int i = 0; i < testCase; i++)
    {
        scanf("%[^\n]", str);
        getchar();

        printf("Case #%d: %d\n", i+1, countVowel(str, 0));
    }
    

    return 0;
}