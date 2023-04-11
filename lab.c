#include <stdio.h>
int main(){
    int l[11][11];
    int i,j;
    int x=2; int y=2;
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            scanf("%d",&l[i][j]);
        }
    }
    for(i=1;i<=10;i++){
        if(l[x][y-1]==2){
            l[x-1][y-1]=9;
            l[x][y-1]=9;
            break;
        }
        else if(l[x-1][y]==2){
            l[x-1][y-1]=9;
            l[x-1][y]=9;
        }
        else if(l[x][y-1]==1){ // 오른쪽 장
            if(l[x-1][y]==1){ // 아래 장
                l[x-1][y-1]=9;
                break;
            }
            else{ // 오른쪽만 장
                l[x-1][y-1]=9;
                y++;
                continue;
            }
        }
        else{
            if(l[x-1][y]==1){ // 아래 장
                l[x-1][y-1]=9;
                break;
            }
            else{ // 나머지
                l[x-1][y-1]=9;
                x++;
            }
        }
    }
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            printf("%d ",l[i][j]);
        }
        printf("\n");
    }
}