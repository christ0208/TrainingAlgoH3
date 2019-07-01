#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int testCase = 0;
    char str[1001] = "";

    FILE *fp = fopen("testdata.in", "r");

    fscanf(fp, "%d\n", &testCase);

    for (int i = 0; i < testCase; i++)
    {
        bool alphabets[27] = {0};
        int count = 0;
        fscanf(fp, "%[^\n]\n", str);

        int length = strlen(str);
        for (int j = 0; j < length; j++)
        {
            if(str[j] >= 'a' && str[j] <= 'z'){
                int idx = str[j] % 'a';
                if(alphabets[idx] == false) {
                    count++;
                    alphabets[idx] = !alphabets[idx];
                }
            }
            else if(str[j] >= 'A' && str[j] <= 'Z'){
                int idx = str[j] % 'A';
                if(alphabets[idx] == false) {
                    count++;
                    alphabets[idx] = !alphabets[idx];
                }
            }
        }
        
        printf("Case #%d: ", i+1);
        if(count == 26) printf("pangram");
        else{
            printf("missing ");
            for (int j = 0; j < 26; j++)
            {
                if(alphabets[j] == false) printf("%c", j + 'a');
            }
        }
        printf("\n");
        
    }
    fclose(fp);
    

    return 0;
}