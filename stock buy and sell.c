#include <stdio.h>
int mini;
int p=0,c;
int max(int p,int c){
    int x=p>c?p:c;
    return x;
    }
int min(int mini,int z){
    int y=mini>z?z:mini;
    return y;
}
int main(){
int a[ ]= {17,20,11,9,12,6};
int z;
int n=6;
mini=a[0];
for(int i=1;i<n;i++){
    c=a[i]-mini;
    p=max(p,c);
    z=a[i];
    mini=min(mini,z);
}
printf("%d %d %d",p,mini,p+mini);
}
