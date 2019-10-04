#include <cstdio>
#include <algorithm>

struct student{
    int grade[4];
    int id;
}stu[2010];
int existence[1000000][4];
char set[]={'C','M','E','A'};
int now;
bool cmp(student a,student b){return a.grade[now]>b.grade[now];}

int main(){
    int N,M;
    scanf("%d %d",&N,&M);
    for(int i=0;i<N;i++){
        scanf("%d %d %d %d",&stu[i].id,&stu[i].grade[0],&stu[i].grade[1],&stu[i].grade[2]);
        stu[i].grade[3]=int((stu[i].grade[0]+stu[i].grade[1]+stu[i].grade[2])/3.0+0.5);
    }
    for(now=0;now<4;now++){
        std::sort(stu,stu+N,cmp);
        existence[stu[0].id][now]=1;
        for(int i=1;i<N;i++){
            if(stu[i].grade[now]==stu[i-1].grade[now]){
                existence[stu[i].id][now]=existence[stu[i-1].id][now];
            }else{
                existence[stu[i].id][now]=i+1;
            }
        }       
    }
    int query;
    for(int i=0;i<M;i++){
        scanf("%d",&query);
        if(existence[query][0]==0){
            printf("N/A\n");
        }else{
            int k=0;
            for(int j=0;j<4;j++){
                if(existence[query][j]<=existence[query][k]){
                    k=j;
                }
            }
            printf("%d %c\n",existence[query][k],set[k]);
        }
    }
    return 0;
}