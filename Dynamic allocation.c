#include <stdio.h>
#include <alloc.h>
main()
{
	int n,*p, a;
	printf("enter how many numbers you have to store");
	sacnf("%d",&n);
	p=malloc(n*2);
	printf("enter the numbers %d", n);
	for(i=0;i<n;i++)
	sacnf("%d",p+1);
	s=0;
	for(i=0;i<n;i++)
	printf("Sum is %d",s);
	free(p);
}
