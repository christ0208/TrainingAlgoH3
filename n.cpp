#include<stdio.h>
#include<string.h>

int main(){
    int testCase = 0;

    scanf("%d", &testCase);
    getchar();

    for (int i = 0; i < testCase; i++)
    {
        char str[1001] = "";
        int query = 0;
        scanf("%s", str);
        getchar();

        scanf("%d", &query);
        getchar();

        for (int j = 0; j < query; j++)
        {
            char beginChar, changeChar;
            scanf("%c %c", &beginChar, &changeChar);
            getchar();

            int length = strlen(str);
            for (int k = 0; k < length; k++)
            {
                if(beginChar == str[k]) str[k] = changeChar;
            }   
        }
        printf("Case #%d: %s\n", i+1, str);
        
    }
    

    return 0;
}