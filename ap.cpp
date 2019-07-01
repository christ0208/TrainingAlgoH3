#include<stdio.h>

void mergeSort(int arr[], int left, int right){
    if(left >= right) return;

    int mid = (left + right) / 2;

    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);

    int temp[1001] = {0};
    int startIdx = 0;
    int leftIdx = left;
    int rightIdx = mid + 1;

    while(leftIdx <= mid && rightIdx <= right){
        if(arr[leftIdx] < arr[rightIdx]) temp[startIdx++] = arr[leftIdx++];
        else temp[startIdx++] = arr[rightIdx++];
    }

    for (leftIdx; leftIdx <= mid; leftIdx++) temp[startIdx++] = arr[leftIdx];
    for (rightIdx; rightIdx <= right; rightIdx++) temp[startIdx++] = arr[rightIdx];
    for (int i = left, startIdx = 0; i <= right; i++, startIdx++) arr[i] = temp[startIdx];
}

int main(){
    int arr[1001] = {0}, idx = 0;
    FILE *fp = fopen("testdata.in", "r");

    while(fscanf(fp, "%d", &arr[idx++]) != EOF);
    
    idx--;

    mergeSort(arr, 0, idx - 1);

    printf("%d\n", arr[idx / 2]);

    fclose(fp);

    return 0;
}