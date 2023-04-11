#include <stdio.h>
int main(){
    long long int n,f;
    long long int i;
    long long int ans;
    scanf("%lld %lld",&n,&f);
    for(i=(n/100)*100;i<(n/100+1)*100;i++){
        if(i%f==0){
            ans=100-i%100;
        }
    }
    if(ans<10) printf("0%lld",ans);
    else if(ans==100) printf("00");
    else printf("%lld",ans);
}