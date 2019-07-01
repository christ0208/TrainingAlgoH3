#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef unsigned long long int ull;

int main(){
    int idx = 0;
    char str[501][11] = {""}, tempStr[11] = "";
    int qty[501] = {0}, tempQty = 0;
    ull price[501] = {0}, tempPrice = 0;

    FILE *fp = fopen("testdata.in", "r");
    while(fscanf(fp, "%[^#]#%d#%llu\n", str[idx], &qty[idx], &price[idx]) != EOF) idx++;

    for (int i = 0; i < idx; i++)
    {
        for (int j = i+1; j < idx; j++)
        {
            if(strcmp(str[i], str[j]) > 0){
                strcpy(tempStr, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], tempStr);

                tempQty = qty[i];
                qty[i] = qty[j];
                qty[j] = tempQty;

                tempPrice = price[i];
                price[i] = price[j];
                price[j] = tempPrice;
            }
        }
    }

    for (int i = 0; i < idx; i++)
    {
        printf("%d %s @%llu\n", qty[i], str[i], price[i]);
    }
    
    fclose(fp);

    return 0;
}