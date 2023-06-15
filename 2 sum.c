#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
    }
    int t;
    scanf("%d",&t);
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(a[i]==t-a[j]){
                printf("%d %d",i,j);
                return;
            }
        }
    }
}
