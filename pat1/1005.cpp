#include <algorithm>
#include <cstdio>

int input[110];
bool set[10000000]={false};
bool cmp(int a,int b){
    return a<b;
}
int myfunc(int a){
    if(a%2==0)return a/2;
    else return (3*a+1)/2;
}

int main(){
    int N;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d",&input[i]);
    }
    std::sort(input,input+N,cmp);
    for(int i=0;i<N;i++){
        int t=input[i];
        if(set[t]==true){
            continue;
        }else{
            t=myfunc(t);
            while(set[t]!=true||t!=1){
                set[t]=true;
                t=myfunc(t);
            }
        }
    }
    int flag=false;
    for(int i=N-1;i>=0;i--){
        if(set[input[i]]==false){
            if(flag)printf(" ");
            else flag=true;
            printf("%d",input[i]);
        }
    }
    return 0;
}