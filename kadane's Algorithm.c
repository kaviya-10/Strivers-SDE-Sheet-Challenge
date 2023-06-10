#include<stdio.h>
#include<limits.h>
int sum=INT_MIN;
void kadane(int *a,int n){

   int max=0;
   for(int i=0;i<n;i++){
        max+=a[i];
    if(sum<max){
        sum=max;
    }
    if(max<0){
        max=0;
    }

   }
   return sum;

}


int main(){
int n;
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
}
kadane(a,n);
printf("%d",sum);

}

