#include<stdio.h>

struct Classmate{
    int age_i;
    char name_i[31];
};

int strlen(char *str){
    int i = 0;
    while(str[i] != '\0') i++;
    return i;
}

int strcmp(char *strBase, char *strComp){
    int idx = 0;
    if(strlen(strBase) == strlen(strComp)){
        int lengthBase = strlen(strBase);
        for (int i = 0; i < lengthBase; i++)
        {
            if(strBase[i] != strComp[i]) return 1;
        }
        return 0;
    }
    else return 1;
}

int main(){
    int n = 0;

    scanf("%d", &n);
    getchar();

    Classmate classmates[n + 1];

    for (int i = 0; i < n; i++)
    {
        scanf("%d %s", &classmates[i].age_i, classmates[i].name_i);
        getchar();
    }

    int query = 0;
    scanf("%d", &query);
    getchar();

    for (int i = 0; i < query; i++)
    {
        char name[31] = "";
        scanf("%s", name);
        getchar();

        bool isFound = false;
        for (int j = 0; j < n; j++)
        {
            if(strcmp(classmates[j].name_i, name) == 0) {
                printf("%d", classmates[j].age_i);
                isFound = true;
                break;
            }
        }
        if(!isFound) printf("-1");
        printf("\n");
        
    }

    return 0;
}