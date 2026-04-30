#include <stdio.h>
int main()
{
    int t,ans; scanf("%d",&t);
    while(t--)
    {
    	ans=0;
        int n,m,i; scanf("%d%d",&n,&m);
        getchar();
        char s[n+1],c; gets(s);
        int A[7];
        for(c='A';c<='G';c++)
		{
			A[i]=0;
			printf("%d ",A[i]);
		}
		for(i=0;i<n;++i)
		{
			char ch = s[i];
		  	A[ch]=0;
		}
printf("\n");
        for(i=0;i<n;++i)
		{
			char ch = s[i];
		  	A[ch]++;
		}

        for(c='A';c<='G';++c)
        {
            if(A[c]<m) ans+=m-A[c];
        }
        printf("%d\n",ans);
    }
    return 0;
}
