#include<stdio.h>
int duplicate(int *a,int n){
    int slow=a[0];
    int fast=a[0];
    do{
        slow=a[slow];
        fast=a[a[fast]];

    }while(slow!=fast);
    fast=a[0];
    while(slow!=fast){
        slow=a[slow];
        fast=a[fast];
    }
    printf("%d",slow);

}
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    duplicate(a,n);
}


   /* for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>=a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }

        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
     for(int i=0;i<n;i++){
         for(int j=i+1;j<n;j++){
             if(a[i]==a[j]){
                printf("\n%d",a[i]);
                return;
             }
         }
    }
    int b[n];
    for(int i=0;i<n;i++){
        b[i]=0;
    }
    for(int i=0;i<n;i++){
        temp=a[i];
        if(b[temp]!=1){
            b[temp]=1;
        }
        else{
            printf("%d",temp);
            return;
        }
    }


}*/

