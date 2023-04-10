#include <stdio.h>
int main(){
    int n,i;
    int t;
    int cnt=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&t);
        if(t==1) cnt++;
    }
    if(cnt>n-cnt) printf("Junhee is cute!");
    else printf("Junhee is not cute!");
}