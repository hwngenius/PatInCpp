#include <cstdio>
#include <cctype>
#include <cstring>

int set[256]={0};

int main(){
    char s1[84];
    char s2[84];

    scanf("%s",s1);
    scanf("%s",s2);
    for(int i=0;i<strlen(s2);i++){
        set[toupper(s2[i])]++;
    }
    for(int i=0;i<strlen(s1);i++){
        if(set[toupper(s1[i])]==0){
            printf("%c",toupper(s1[i]));
            set[toupper(s1[i])]++;
        }
    }

    return 0;
}