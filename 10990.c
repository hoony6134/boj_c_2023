#include <stdio.h>
int main(){
    int n,i,j,y;
    int cnt=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        cnt=0;
        for(j=1;j<=2*n-1;j++){
            if (j>n) y=n-j;
            if (j==n-i+1||j==n+i-1){
                printf("*");
                cnt++;
            }
            else if(cnt==2){
                printf(" ");
                break;
            }
            else if(i==1&&cnt==1){
                printf(" ");
                break;
            }
            else printf(" ");
        }
        printf("\n");
    }
}