#include<stdio.h>

int getMin(int a, int b){
    return (a < b) ? a : b;
}

int main(){
    int testCase = 0;

    scanf("%d", &testCase);
    getchar();

    for (int i = 0; i < testCase; i++)
    {
        int numFirst = 0, numSecond = 0;

        scanf("%d %d", &numFirst, &numSecond);
        getchar();

        int startDiv = 0;
        if(numFirst == 0) startDiv = numSecond;
        else if(numSecond == 0) startDiv = numFirst;
        else{
            startDiv = getMin(numFirst, numSecond);
            for (startDiv; startDiv > 0; startDiv--)
            {
                if(numFirst % startDiv == 0 && numSecond % startDiv == 0) break;
            }
        }
        
        printf("Case #%d: %d\n", i+1, startDiv);
    }

    return 0;
}