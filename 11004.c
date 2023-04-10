#include <stdio.h>
int main(){
    int n,k,temp;
    scanf("%d %d",&n,&k);
    long long int l[n+1];
    int i,j;
    for(i=0;i<n;i++){
        scanf("%lld",&l[i]);
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < (n - 1) - i; j++) {
            if (l[j] > l[j + 1]) {
                temp = l[j];
                l[j] = l[j + 1];
                l[j + 1] = temp;
            }
        }
    }
    printf("%lld",l[k-1]);
}