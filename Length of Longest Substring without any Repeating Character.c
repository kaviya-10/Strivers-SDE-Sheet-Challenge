#include<stdio.h>
#include<string.h>
int max(int m,int n){
 return m>n?m:n;
}
int distinct(char*s,int i,int j){
    int v[26];
    for(int x=0;x<26;x++){
        v[x]=0;
    }
    for(int k=i;k<=j;k++){
        if(v[s[k]-'a']==1){
            return 0;
        }
        v[s[k]-'a']=1;
    }
    return 1;
}
int main(){
    char s[100];
    scanf("%s",s);
    int n=strlen(s);
    int r=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(distinct(s,i,j)){
                r=max(r,j-i+1);
            }
        }
    }
    printf("%d",r);

}
