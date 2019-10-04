#include <cstdio>
#include <cctype>
#include <cstring>
bool set[512]={false};

int main(){
    bool flag=false;
    char broken[512];
    char input[100010];
    scanf("%s",broken);
    scanf("%s",input);
    for(int i=0;i<strlen(broken);i++){
        set[tolower(broken[i])]=true;
    }
    for(int i=0;i<strlen(input);i++){
        if(isupper(input[i])){
            if(set['+']==false&&set[tolower(input[i])]){
            printf("%c",input[i]);
            }
        }else{
            if(set[input[i]]==false){
                printf("%c",input[i]);
            }
        }
    }
    return 0;
}