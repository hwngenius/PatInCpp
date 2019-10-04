#include <cstdio>
char set[24];

int main(){
    int a,b,c;
    scanf("%d %d",&a,&b);
    c=a+b;
    if(c<0){
        printf("-");
        c=-c;
    }
    int i=0,j=1;
    while(c>0){
        j++;
        set[i++]=c%10+'0';
        c/=10;
        if(j%3==1&&c>0){
            set[i++]=',';
            j=1;
        }
    }
    for(i--;i>=0;i--){
        printf("%c",set[i]);
    }

    return 0;
}