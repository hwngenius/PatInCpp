#include <cstdio>

int input[100010];
char set[10010]={false};
int main(){
    bool flag=false;
    int N;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d",&input[i]);
        set[input[i]]++;
    }
    for(int i=0;i<N;i++){
        if(set[input[i]]==1){
            printf("%d",input[i]);
            flag=true;
            break;
        }
    }
    if(!flag){
        printf("None");
    }
    return 0;
}