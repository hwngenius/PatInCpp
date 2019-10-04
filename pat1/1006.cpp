#include <cstdio>

int main(){
    int a;
    scanf("%d",&a);
    int b=a/100;
    for(int i=0;i<b;i++){
        printf("B");
    }
    a%=100;
    int s=a/10;
    for(int i=0;i<s;i++){
        printf("S");
    }
    a%=10;
    for(int i=1;i<=a;i++){
        printf("%d",i);
    }

    return 0;
}