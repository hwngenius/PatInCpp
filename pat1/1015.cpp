#include <cstdio>
#include <algorithm>
#include <cstring>

struct student{
    char id[12];
    int de;
    int cai;
    int zong;
    int flag;
};

bool cmp(student a,student b){
    if(a.flag!=b.flag)return a.flag<b.flag;
    else if(a.zong!=b.zong)return a.zong>b.zong;
    else if(a.de!=b.de)return a.de>b.de;
    else return strcmp(a.id,b.id)<0;
}

int main(){
    student input[100010];
    int N,L,H,sum;
    scanf("%d %d %d",&N,&L,&H);
    sum=N;
    for(int i=0;i<N;i++){
        scanf("%s %d %d",input[i].id,&input[i].de,&input[i].cai);
        input[i].zong=input[i].de+input[i].cai;
        if(input[i].cai<L||input[i].de<L){
            input[i].flag=5;
            sum--;
        }else if(input[i].de>=H&&input[i].cai>=H){
            input[i].flag=1;
        }else if(input[i].de>=H&&input[i].cai<H){
            input[i].flag=2;
        }else if(input[i].de>=input[i].cai){
            input[i].flag=3;
        }else{
            input[i].flag=4;
        }
    }
    std::sort(input,input+N,cmp);
    printf("%d\n",sum);
    for(int i=0;i<sum;i++){
        printf("%s %d %d\n",input[i].id,input[i].de,input[i].cai);
    }

    return 0;
}