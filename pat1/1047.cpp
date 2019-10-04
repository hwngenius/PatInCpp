#include <cstdio>

int grade[1100]={0};

int main(){
    int N;
    int maxi,max=0;
    int team,num,score;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d-%d %d",&team,&num,&score);
        grade[team]+=score;
        if(grade[team]>max){
            max=grade[team];
            maxi=team;
        }
    }
    printf("%d %d",maxi,max);
    
    return 0;
}