#include<stdio.h>
#include<stdlib.h>

int main(){
    char id[4] = "", name[101] = "", desc[101] = "";
    FILE *fp = fopen("testdata.in", "r");

    while(fscanf(fp, "%[^|]|%[^|]|%[^\n]\n", id, name, desc) != EOF){
        printf("%s | %s | %s\n", id, name, desc);
    }

    fclose(fp);

    return 0;
}