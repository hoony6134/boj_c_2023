#include <stdio.h>
int main(){
    float b,n;
    int cnt=0;
    while(1){
        if (cnt==0){
            scanf("%f",&n);
            cnt++;
            b=n;
            continue;
        }
        else{
            scanf("%f",&n);
            if((int)n==999) break;
            else printf("%.2f\n",n-b);
            b=n;
        }        
    }
}