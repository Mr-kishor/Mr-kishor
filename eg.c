#include <stdio.h>

int main(void) {
	// your code goes here
	int n;
	scanf("%d",&n);
	while(n--)
	{
	    int num;
	    scanf("%d",&num);
	    int rem,rev=0;
	    while(num!=0)
	    {
	        rem=num%10;
	        rev=rev*10+rem;
	        num=num/10;
	    }
	
	    printf("%d",rev);
	}
	return 0;
}

