#include <stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    int k=2*n-1;
    for(i=n;i>=0;i--){
        for(j=1;j<=(k-i*2+1)/2;j++){
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++){
            printf("*");
        }
        printf("\n");
    }
}