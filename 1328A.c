#include <stdio.h>
int main()
{

    int t,a,b;
    scanf("%d",&t);

    while(t--)
    {
        scanf("%d %d",&a,&b);
        int ans= a%b==0?0:b-a%b;
        printf("%d\n",ans);
 }
 return 0;
}












