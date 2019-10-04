#include <cstdio>
#include <cstring>

char set[][7]={"MON","TUE","WED","THU","FRI","SAT","SUN"};

int main(){
    char s1[64],s2[64],s3[64],s4[64];
    int flag=0;
    char week[8];
    int h=4,m=3;
    scanf("%s",s1);
    scanf("%s",s2);
    scanf("%s",s3);
    scanf("%s",s4);
    for(int i=0, j=0;i<strlen(s1)&&j<strlen(s2);i++,j++){
        if(s1[i]==s2[j]){
            if(flag==0&&s1[i]>='A'&&s2[i]<='G'){
                flag=1;
                strcpy(week,set[s1[i]-'A']);
            }else if(flag==1){
                if(s1[i]>='0'&&s1[i]<='9'){
                    h=s1[i]-'0';
                }else if(s1[i]>='A'&&s1[i]<='N'){
                    h=10+s1[i]-'A';
                    break;
                }
            }
        }
    }
    for(int i=0, j=0;i<strlen(s3)&&j<strlen(s4);i++,j++){
        if(s3[i]==s4[j]&&((s3[i]>='a'&&s3[i]<='z')||(s3[i]>='A'&&s3[i]<='Z'))){
            m=i;
            break;
        }
    }
    printf("%s %02d:%02d",week,h,m);

    return 0;
}