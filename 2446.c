#include <stdio.h>
int main(){
    int n,i,j,x;
    scanf("%d",&n);
    for(i=1;i<=2*n-1;i++){
        if(i>n) x=2*n-i;
        else x=i;
        for(j=1;j<=x-1;j++){
            printf(" ");
        }
        for(j=1;j<=2*n+1-2*x;j++){
            printf("*");
        }
        printf("\n");
    }
}