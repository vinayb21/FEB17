// CHEFAPAR 

#include <stdio.h>

int main(void) {
	int t,i,n,count,flag;
	long long int due;
	scanf("%d",&t);
	while(t--)
	{
	    flag=0;
	    due=0;
	    count=0;
	    scanf("%d",&n);
	    short int a[n];
	    for(i=0;i<n;i++)
	        scanf("%hd",&a[i]);
	    for(i=0;i<n;i++)
	    {
	        if(a[i]==0)
	            flag=1;
	        if(flag)
	            count++;
	        if(a[i]==0)
	            due+=1000;
	    }
	    due+=100*count;
	    printf("%lld\n",due);
	}
	return 0;
}

