#include<stdio.h>

int main(){
    int testCase = 0;

    scanf("%d", &testCase);
    getchar();

    for (int i = 0; i < testCase; i++)
    {
        int n = 0;
        char sign;
        scanf("%d", &n);
        getchar();

        int mtxFirst[n+1][n+1], mtxSecond[n+1][n+1], mtxResult[n+1][n+1];
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                scanf("%d", &mtxFirst[j][k]);   
            }
            getchar();
        }
        
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                scanf("%d", &mtxSecond[j][k]);   
            }
            getchar();
        }
        scanf("%c", &sign);
        getchar();

        if(sign == '+'){
            for (int j = 0; j < n; j++)
            {
                for (int k = 0; k < n; k++)
                {
                    mtxResult[j][k] = mtxFirst[j][k] + mtxSecond[j][k];
                }
            }
            
        }
        else if(sign == '-'){
            for (int j = 0; j < n; j++)
            {
                for (int k = 0; k < n; k++)
                {
                    mtxResult[j][k] = mtxFirst[j][k] - mtxSecond[j][k];
                }
            }
        }
        else if(sign == '*'){
            for (int j = 0; j < n; j++)
            {
                for (int k = 0; k < n; k++)
                {
                    for (int l = 0; l < n; l++)
                    {
                        if(l == 0) mtxResult[j][k] = mtxFirst[j][l] * mtxSecond[l][k];
                        else mtxResult[j][k] += (mtxFirst[j][l] * mtxSecond[l][k]);
                    }
                    
                }
            }
        }
        printf("Case #%d:\n", i+1);
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                if(k == n - 1) printf("%d", mtxResult[j][k]);
                else printf("%d ", mtxResult[j][k]);
            }
            printf("\n");
        }
        
    }
    

    return 0;
}