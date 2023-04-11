// failed... 
#include <stdio.h>
int main(){
    char c[99][99];
    int i,j;
    for(i=0;i<5;i++){
        for(j=0;j<15;j++){
            scanf("%c",&c[i][j]);
            if(c[i][j]=='\n'){
                break;
            }
        }
    }
    while(c[0][j]!='\0'){
        for(i=0;i<5;i++){
            printf("%c",c[i][j]);
        }
        j++;
    }
}