#include <cstdio>
#include <cstring>

int set[10]={0};

int main(){
    char input[1010];
    scanf("%s",input);
    int L=strlen(input);
    for(int i=0;i<L;i++){
        set[input[i]-'0']++;
    }
    for(int i=0;i<=9;i++){
        if(set[i]!=0){
            printf("%d:%d\n",i,set[i]);
        }
    }

    return 0;
}