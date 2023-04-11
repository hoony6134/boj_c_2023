#include <stdio.h>
int main(){
    int x,y,w,h;
    int min;
    scanf("%d %d %d %d",&x,&y,&w,&h);
    if (w-x>=x){
        min=x;
        if(h-y>y){
            if (min>=y) min=y;
        }
        else if(min>=h-y) min=h-y;
    }
    else{
        min=w-x;
        if(h-y>y){
            if (min>=y) min=y;
        }
        else if(min>=h-y) min=h-y;
    }
    printf("%d",min);
}