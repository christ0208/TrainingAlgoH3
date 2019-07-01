#include<stdio.h>

void printReverse(int arr[], int n){
    if(n < 0) return;
    if(n == 0) printf("%d", arr[n]);
    else printf("%d ", arr[n]);
    printReverse(arr, n-1);
}

int main(){
    int arr[1001] = {0};
    int idx = 0;

    while(scanf("%d", &arr[idx]) != EOF) idx++;
    getchar();

    printReverse(arr, idx - 1);
    printf("\n");

    return 0;
}