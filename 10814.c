// fail, retry;;;
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    char l[n+1][2];
    int i,j,temp;
    for(i=0;i<n;i++){
        scanf("%d %s",&l[i][0],l[i][1]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n-i;j++){
            if((int)l[j][0]>(int)l[j+1][0]){
                temp=l[j][0];
                l[j][0]=l[j+1][0];
                l[j+1][0]=temp;
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%d ",(int)l[i][0]);
        for(j=0;l[i][j]!='\0';j++){
            printf("%s",l[i][j]);
        }
        printf("\n");
    }
}