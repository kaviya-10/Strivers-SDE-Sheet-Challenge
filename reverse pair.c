#include <stdio.h>
#include <stdlib.h>
int merge(int arr[], int l, int m, int r)
{
    static int c=0;
    int j=m+1;
    for(int i=l;i<=m;i++){

        while(j<=r&&arr[i]>(2*(long long int)arr[j])){
                j++;

        }
        c+=(j-(m+1));
    }
    /*int t;
    int left=l,right=m+1;
    while(left<=m&&right<=r){
        if(arr[left]<=arr[right]){
            L[]
        }
    }*/
    int d,e,f;
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1], R[n2];
    for (d = 0; d< n1; d++)
        L[d] = arr[l + d];
    for (e = 0; e < n2; e++)
        R[e] = arr[m + 1 + e];
    d = 0;
    e = 0;
    f = l;
    while (d < n1 && e < n2) {
        if (L[d] <= R[e]) {
            arr[f] = L[d];
            d++;
        }
        else {
            arr[f] = R[e];
            e++;
        }
        f++;
    }

    // Copy the remaining elements of L[],
    // if there are any
    while (d< n1) {
        arr[f] = L[d];
        d++;
        f++;
    }

    // Copy the remaining elements of R[],
    // if there are any
    while (e < n2) {
        arr[f] = R[e];
        e++;
        f++;
    }
    return c;
}

int mergeSort(int arr[], int l, int r)
{
    int inv;
    if (l < r) {
        int m = l + (r - l) / 2;
        inv=mergeSort(arr, l, m);
       inv+= mergeSort(arr, m + 1, r);
       inv+=merge(arr,l, m, r);
    }
    return inv;
}

//void printArray(int A[], int size)
int main()
{
    int arr[] = { 40,25,19,12,9,6,2};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    //printf("Given array is \n");
    //printArray(arr, arr_size);



    //printf("\nSorted array is \n");
    //printArray(arr, arr_size);
    int ans=mergeSort(arr, 0, arr_size - 1);
    printf("%d",ans);
    return 0;
}
