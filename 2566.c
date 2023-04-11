#include <stdio.h>
int main(){
    int map[10][10];
    int i,j,temp,max_x,max_y;
    int max=-1;
    for(i=0;i<9;i++){
        for(j=0;j<9;j++){
            scanf("%d",&map[i][j]);
        }
    }
    for(i=0;i<9;i++){
        for(j=0;j<9;j++){
            if (map[i][j]>max){
                max=map[i][j];
                max_x=i+1;
                max_y=j+1;
            }
        }
    }
    printf("%d\n%d %d",max,max_x,max_y);
}