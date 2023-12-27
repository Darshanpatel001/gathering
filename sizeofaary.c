#include<stdio.h>

void size(int a[] , int tsize)
{
	int sum;
	sum = tsize/sizeof(0);

	printf("Size of Array = %d",sum);

}

 main()
{

	int a[] = {1,2,3,4,5,6,7,8,9};

	size(a,sizeof(a));
}