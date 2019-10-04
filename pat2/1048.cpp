#include <cstdio>

int set[1100];

int main(){
    int N,M,sample;
    bool flag=false;
    scanf("%d %d",&N,&M);
    for(int i=0;i<N;i++){
        scanf("%d",&sample);
        set[sample]++;
    }
    for(int i=1;i<=M/2+1;i++){
        if(set[i]>0&&set[M-i]>0){
            if(i==M-i&&set[i]<2){
                continue;
            }else{
                flag=true;
            printf("%d %d",i,M-i);
            break;
            }
        }
    }
    if(!flag){
        printf("No Solution");
    }
}