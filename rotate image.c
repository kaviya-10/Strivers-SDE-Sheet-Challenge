#include<stdio.h>
int main(){
int n;
scanf("%d ",&n);
int a[n][n];
for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
                scanf("%d",&a[i][j]);
        }
}

int la[n][n];
for(int rr=1;rr<=n;rr++){
     for(int rc=1,cr=n;rc<=n,cr>0;rc++,cr--){
         la[rr][rc]=a[cr][rr];


    }
}
for(int i=1;i<=n;i++,printf("\n")){
        for(int j=1;j<=n;j++){
                printf("%d ",la[i][j]);
        }
}
}

