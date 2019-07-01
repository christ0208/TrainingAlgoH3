#include<stdio.h>

typedef long long int lli;

int findSeekInArr(lli arr[], int limit, lli find){
    int left = 0;
    int right = limit;
    int mid = (left + right) / 2;

    while(left <= right){
        if(arr[mid] < find){
            left = mid + 1;
            mid = (left + right) / 2;
        }
        else if(arr[mid] > find){
            right = mid - 1;
            mid = (left + right) / 2;
        }
        else return 1;
    }
    return 0;
}

int main(){
    int n = 0, query = 0, found = 0;

    scanf("%d %d", &n, &query);
    getchar();

    lli arr[n+1] = {0}, seek = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }
    getchar();

    for (int i = 0; i < query; i++)
    {
        scanf("%lld", &seek);
        getchar();

        found += findSeekInArr(arr, n - 1, seek);
    }
    printf("%d\n", found);

    return 0;
}