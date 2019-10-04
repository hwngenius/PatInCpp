#include <cstdio>


char set[]={'0','1','2','3','4','5','6','7','8','9','A','B','C'};
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    printf("#");
    printf("%c%c",set[a/13],set[a%13]);
    printf("%c%c",set[b/13],set[b%13]);
    printf("%c%c",set[c/13],set[c%13]);

    return 0;
}