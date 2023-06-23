#include<stdio.h>
#include<limits.h>
#include<string.h>
int main(){
int n,m=0;
//int max=INT_MIN;
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
}
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(a[i]>a[j]){
            m++;
        }
    }
}
printf("%d",m);
}
