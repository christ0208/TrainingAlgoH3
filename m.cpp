#include<stdio.h>

int main(){
    int testCase = 0;

    scanf("%d", &testCase);
    getchar();

    for (int i = 0; i < testCase; i++)
    {
        int friends = 0, rooms = 0, query = 0, friendCame = 0;
        scanf("%d %d %d", &friends, &rooms, &query);
        getchar();

        int roomStatus[rooms + 1] = {0};
        int patterns[friends+1][rooms+1];

        for (int j = 0; j < friends; j++)
        {
            for (int k = 0; k < rooms; k++)
            {
                scanf("%d", &patterns[j][k]);
            }
            getchar();
        }
        
        for (int j = 0; j < query; j++)
        {
            scanf("%d", &friendCame);
            
            for (int k = 0; k < rooms; k++)
            {
                roomStatus[k] ^= patterns[friendCame - 1][k] << 1; 
            }
        }
        getchar();

        printf("Case #%d:\n", i+1);
        for (int j = 0; j < rooms; j++)
        {
            if(roomStatus[j] == 0) printf("NO");
            else printf("YES");
            printf("\n");
        }
    }

    return 0;
}