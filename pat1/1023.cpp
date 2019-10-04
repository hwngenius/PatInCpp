#include <cstdio>

int set[10];
int main(){
    int n;
    for(int i=0;i<10;i++){
        scanf("%d",&n);
        set[i]=n;
    }
    

    for(int i=1;i<10;i++){
        if(set[i]!=0){
            printf("%d",i);
            set[i]--;
            break;
        }
    }
    for(int i=0;i<10;i++){
        while(set[i]!=0){
            printf("%d",i);
            set[i]--;
        }
    }

    return 0;
}