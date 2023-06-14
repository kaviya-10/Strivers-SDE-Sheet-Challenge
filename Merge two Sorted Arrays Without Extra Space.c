#include<stdio.h>
int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    int a[m],b[n];
    for(int i=0;i<m;i++){
        scanf("%d",&a[i]);
    }
    for(int j=0;j<n;j++){
        scanf("%d",&b[j]);
    }
    int x=m+n;
    for(int j=m,h=0;j<x;j++,h++){
       a[j]=b[h];
    }
     for(int i=0;i<x;i++){
      for(int j=i+1;j<x;j++){
          if(a[i]>a[j]){
            int temp=a[j];
            a[j]=a[i];
            a[i]=temp;

          }
         }
     }

    for(int i=0;i<x;i++){
        printf("%d ",a[i]);
    }
}
