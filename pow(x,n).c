int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    double p=1.0;
    long long int n=y;
    if(n<0){
        n=-1*n;
    }
    while(n>0){
        if(n%2==1){
            p*=x;
            n--;
        }
        else{
            x=x*x;
            n/=2;

        }
    }
    if(y<0){
        p=(double)(1.0)/(double)(p);

    }
    printf("%lf",p);


}


