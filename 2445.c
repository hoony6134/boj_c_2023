#include <stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    int k=2*n-1;
    for(i=n-1;i>0;i--){
        for(j=1;j<=(k-i*2+1)/2;j++){
            printf("*");
        }
        for(j=1;j<=2*i;j++){
            printf(" ");
        }
        for(j=1;j<=(k-i*2+1)/2;j++){
            printf("*");
        }
        printf("\n");
    }
    for(i=1;i<=2*n;i++){
        printf("*");
    }
    printf("\n");
    for(i=1;i<=n-1;i++){
        for(j=1;j<=(k-i*2+1)/2;j++){
            printf("*");
        }
        for(j=1;j<=2*i;j++){
            printf(" ");
        }
        for(j=1;j<=(k-i*2+1)/2;j++){
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
}