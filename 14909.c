#include <stdio.h>
int main(){
    long long int n;
    long long int cnt=0;
    int i;
    while(scanf("%lld",&n)!=EOF){
        if (n>0) cnt++;
    }
    printf("%lld",cnt);
}