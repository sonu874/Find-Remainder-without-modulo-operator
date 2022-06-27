#include<stdio.h>


int rem(int a, int b)
{
	if(a<b)
		return a;
	
	int m = rem(a,b<<1);
	if(m>=b)
		m = m-b;
	return m;
}

int main()
{
	
	printf("Shift modulo:%d",rem(79,10));
	return 1;
}
