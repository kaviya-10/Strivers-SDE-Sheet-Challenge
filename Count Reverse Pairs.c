#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }
    //BREUTE FORCE SOLN
    int c=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
                if(arr[i]>2*arr[j]){
                    c++;
                }


    }
    }
    printf("%d",c);
}
