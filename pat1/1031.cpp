#include <cstdio>
#include <cstring>

int weight[]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
char change[]={'1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2'};

int main(){
    char str[20];
    int N;
    bool flag=false;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%s",str);
        int t=0;
        for(int j=0;j<17;j++){
            if(str[j]>='0'&&str[j]<='9'){
                t+=weight[j]*(str[j]-'0');
            }else{
                printf("%s\n",str);
                flag=true;
                break;
            }
        }
        if(str[17]==change[t%11]){

        }else{
            flag=true;
            printf("%s\n",str);
        }
    }
    if(!flag){
        printf("All passed\n");
    }
    return 0;
}