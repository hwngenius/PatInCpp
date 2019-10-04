#include <cstdio>
#include <cstring>
int main(){
    int N;
    int set[110];
    memset(set,0,sizeof(set));
    int score,k;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d",&score);
        set[score]++;
    }
    scanf("%d",&k);
    for(int i=0;i<k;i++){
        if(i>0){
            printf(" ");
        }
        scanf("%d",&score);
        printf("%d",set[score]);
    }

    return 0;
}