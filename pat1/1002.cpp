#include <cstdio>
#include <cstring>
char set[10][10]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
int ans[100]={0};
int main(){
    char str[110];
    int sum=0;
    scanf("%s",str);
    for(int i=0;i<strlen(str);i++){
        sum+=int(str[i]-'0');
    }
    
    int i=0;
    while(sum>0){
        ans[i++]=sum%10;
        sum/=10;
    }
    printf("%s",set[ans[--i]]);
    for(i--;i>=0;i--){
        printf(" %s",set[ans[i]]);
    }
    return 0;
}