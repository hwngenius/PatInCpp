#include <cstdio>
#include <cstring>
char ans[100][100];
int main(){
    char str[100];
    int i=0;
    while(scanf("%s",str)!=EOF){
        strcpy(ans[i++],str);
    }
    i--;
    while(i>0){
        printf("%s ",ans[i--]);
    }
    printf("%s",ans[0]);

    return 0;
}