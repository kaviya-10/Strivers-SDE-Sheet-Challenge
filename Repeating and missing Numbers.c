#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int sum=0;
   /* int tsum=(n*(n+1))/2;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    printf("%d",tsum-sum);*/
    for(int i=0;i<n;i++){
            int c=0;
        for(int j=0;j<n;j++){
            if(i==a[j]){
                c++;
            }
        }


            if(c==0){
                printf("%d\n",i);
            }
            if(c==2){
                printf("%d\n",i);
            }
    }



}
