#include <stdio.h>
int main(){
    int n,i,cnt;
    cnt=0;
    scanf("%d",&n);
    int l[n+1];
    for(i=1;i<=n;i++){
        scanf("%d",&l[i]);
    }
    for(i=1;i<=n;i++){
        if(l[i]!=i) cnt++;
    }
    printf("%d",cnt);
}