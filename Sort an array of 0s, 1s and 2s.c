#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
}
int k=0,temp;
for(int i=0;i<n;i++){
      for(int j=i+1;j<n;j++){
        if(a[i]>a[j]){
            //a[k++]=a[j];
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }

      }

}
for(int i=0;i<n;i++){
        printf("%d ",a[i]);
}
}
