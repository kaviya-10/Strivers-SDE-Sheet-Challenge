#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int e1=-112345,e2=-123456,c1=0,c2=0;
    for(int i=0;i<n;i++){
        if(c1==0 &&e2!=a[i]){
            e1=a[i];
            c1=1;
        }
         else if(c2==0 &&e1!=a[i]){
            e2=a[i];
            c2=1;
        }
        else if(a[i]==e1){
            c1++;
        }
        else if(a[i]==e2){
            c2++;
        }
        else{
            c1--;
            c2--;
        }
    }
    if(c1>=n/3){
        printf("%d",e1);
    }
    if(c2>=n/3){
        printf("%d",e2);
    }
}

