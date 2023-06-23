#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int t;
    scanf("%d",&t);
    int low=0;
    int high=(n*n)-1;
    while(low<=high){
        int mid=(low+high)/2;
        if (a[mid/n][mid%n]==t){
            printf("true");
            return;
        }

       else if(a[mid/n][mid%n]<t){
            low=mid+1;
        }
        else{
            high=mid-1;
        }

    }
    printf("false");

}
