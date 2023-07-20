#include<stdio.h>
int main(){
    int n,s,c=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int k;
    scanf("%d",&k);
    for(int i=0;i<n;i++){
            s=0;
        for(int j=i;j<n;j++){
                s=s^a[j];
        /*for(int l=i;l<=j;l++){

        }*/
            if(s==k){ c++;
            }

        }
    }
        printf("%d",c);
}
