#include<stdio.h>
int main(){
 int n;
 scanf("%d",&n);
 int a[n];
 for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
 }
 int t,sum=0;
 scanf("\n%d",&t);
 for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
        for(int k=j+1;k<n;k++){
            for(int l=k+1;l<n;l++){
                sum=a[i]+a[j]+a[k]+a[l];

                if(sum==t){
                    printf("%d %d %d %d\n",a[i],a[j],a[k],a[l]);
                }
            }
        }
 }
 }
}

