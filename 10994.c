#include <stdio.h>
int main(){
    int n, i, j, k;
    scanf("%d",&n);
    for(i=1;i<=4*n+1;i++){
        for(j=1;j<=4*n+1;j++){
            if(i==1||i==4*k+1){
                printf("*");
                break;
            }
            else if(j%k==1){
                printf("*");
            }
        }
        printf("\n");
    }
}