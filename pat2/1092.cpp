#include <cstdio>
#include <cstring>

int main(){
    int set[256];
    int loss=0;
    memset(set,0,sizeof(set));
    char sell[1100],buy[1100];
    scanf("%s",sell);
    scanf("%s",buy);
    for(int i=0;i<strlen(sell);i++){
        set[sell[i]]++;
    }
    for(int i=0;i<strlen(buy);i++){
        if(set[buy[i]]>0){
            set[buy[i]]--;
        }else{
            loss++;
        }
    }
    if(loss>0){
        printf("No %d",loss);
    }else{
        printf("Yes %d",int(strlen(sell)-strlen(buy)));
    }

    return 0;
}