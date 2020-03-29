#include<stdio.h>
int main (){
int a,b,t;

scanf("%d",&t);

while(t--)
{
    scanf("%d %d",&a,&b);
    int ans,c;
    if(a<b){
         c=b-a;
        ans=c%2?1:2;
        printf("%d\n",ans);
    }

    else if(a>b){
         c=a-b;
        ans=c%2?2:1;
        printf("%d\n",ans);
    }

    else
        printf("0\n");

}
return 0;
}
