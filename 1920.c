#include <stdio.h>
int main(){
    int n,i,m,j,k;
    int boo;
    scanf("%d",&n);
    int nlist[n+1];
    for(i=0;i<n;i++){
        scanf("%d",&nlist[i]);
    }
    scanf("%d",&m);
    int mlist[m+1];
    for(i=0;i<m;i++){
        scanf("%d",&mlist[i]);
    }
    for(i=0;i<m;i++){
        boo=0;
        for(j=0;j<n;j++){
            if(mlist[i]==nlist[j]) boo=1;
        }
        if(boo==1) printf("1\n");
        else printf("0\n");
    }
}