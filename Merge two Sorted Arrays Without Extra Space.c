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
    int y=m+n;
    int x=0;
    int c[y];
    //printf("%d %d",a[0],b[n-1]);
    int k=0,l=0;
    while(k<m||l<n){
        if(a[k]>b[l]){
            c[x++]=b[l];
            l++;
        }
        else{
            c[x++]=a[k];
            k++;
        }
    }
    for(int x=0;x<y;x++){
        printf("%d ",c[x]);
    }
}
