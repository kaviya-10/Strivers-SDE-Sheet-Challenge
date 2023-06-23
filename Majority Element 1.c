#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int c=0,e;
    for(int i=0;i<n;i++){
        if(c==0){
            e=a[i];
            c++;

        }
        else if(e==a[i]){
            c+=1;
        }
        else{
            c-=1;
        }
    }
    printf("%d",e);
}
