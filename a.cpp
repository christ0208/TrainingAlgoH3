#include<stdio.h>
#include<string.h>

const char alphabets[53] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};

int findCharInAlphabets(char c){
    for (int i = 0; i < 52; i++)
    {
        if(c == alphabets[i]) return i + 1;
    }
    return -1;
}

int convertToNumber(char *str){
    int length = strlen(str);
    int total = 0;
    for (int i = 0; i < length; i++)
    {
        total += findCharInAlphabets(str[i]);
    }
    return total;
}

int getSingularRepresentation(int total){
    while(total >= 10){
        int sum = 0;
        int temp = total;
        while(temp != 0){
            sum += temp % 10;
            temp /= 10;
        }
        total = sum;
    }
    return total;
}

int main(){
    int testCase = 0;
    char strFirst[21] = "", strSecond[21] = "";
    double percentage = 0.0;

    scanf("%d", &testCase);
    getchar();

    for (int i = 0; i < testCase; i++)
    {
        scanf("%s %s", strFirst, strSecond);
        getchar();

        int numFirst = convertToNumber(strFirst);
        numFirst = getSingularRepresentation(numFirst);

        int numSecond = convertToNumber(strSecond);
        numSecond = getSingularRepresentation(numSecond);

        if(numFirst < numSecond) percentage = ((double) numFirst / (double) numSecond) * 100;
        else percentage = ((double) numSecond / (double) numFirst) * 100;
        printf("Case #%d: %lf%%\n", i+1, percentage);
    }
    

    return 0;
}