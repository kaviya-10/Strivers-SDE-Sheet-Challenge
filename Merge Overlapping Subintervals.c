#include<stdio.h>
int max(int x,int y){
  int z=x>y?x:y;
  return z;
}
/*void sort(int **a,int n,int m){
    for(int i=1;i<n;i++){
        if(a[i-1][0]>=a[i][0]){
            int t=a[i-1][0];
            a[i-1][0]=a[i][0];
            a[i][0]=t;
            int c=a[i-1][1];
            a[i-1][1]=a[i][1];
            a[i][1]=c;
        }
    }
    for(int i=0;i<n;i++,printf("\n")){
        for(int j=0;j<m;j++){
            scanf("%d ",a[i][j]);
        }
    }

}*/
int main(){
    int n;
    scanf("%d",&n);
    int m=2;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }

    //sort(a,n,m);
    for(int i=0;i<n;i++){
        c=0;
        int s=a[i][0];

        printf("%d ",s);
        int e=a[i][1];
        //int w=e;

        //int
        for(int j=i+1;j<n;j++){

            if(a[j][0]<=e){
                e=max(e,a[j][1]);

            }
            else{
                break;
            }

        }



    }


}
