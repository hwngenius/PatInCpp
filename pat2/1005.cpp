#include <cstdio>
#include <cstring>

char set[][8]={"zero","one","two","three","four","five","six","seven","eight","nine"};
char ans[1000][8]={};


int main(){
    char str[110];
    scanf("%s",str);
    int sum=0;
    for(int i=0;i<strlen(str);i++){
        sum+=int(str[i]-'0');
    }
    if(sum>0){
        int i=0;
    while(sum>0){
        strcpy(ans[i++],set[sum%10]);
        sum/=10;
    }
    i--;
    printf("%s",ans[i]);
    for(i--;i>=0;i--){
        printf(" %s",ans[i]);
    }

    }else{
        printf("zero");
    }
    return 0;
}