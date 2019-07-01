#include<stdio.h>

int main(){
    int daysAvailable = 0;

    scanf("%d", &daysAvailable);
    getchar();

    bool attackDays[daysAvailable + 1] = {true};
    int countAttack = 0;

    for (int i = 1; i <= daysAvailable; i++)
    {
        if(attackDays[i - 1]){
            for (int j = i+1; j <= daysAvailable; j++)
            {
                if(j % i == 0) attackDays[j - 1] = false;
            }
            countAttack++;
        }
        else{
            for (int j = i+1; j <= daysAvailable; j++)
            {
                if(j % i == 0) attackDays[j - 1] = true; 
            }
        }
    }
    
    printf("%d\n", countAttack);
    for (int i = 0; i < daysAvailable; i++)
    {
        if(attackDays[i] && i == 0) printf("%d", i+1);
        else if(attackDays[i]) printf(" %d", i+1);
    }
    printf("\n");
    

    return 0;
}