#include<stdio.h>

int fact(int n)
{
	int factorial = 0;
	if(n<=1)
	{
		return 1;
	}
	else
	{
		factorial = n*fact(n-1);
		return factorial;
	}
}

main()
{

	int a,ans;

	printf("Enter value A :-");
	scanf("%d",&a);
	ans = fact(a);
	printf("Factorial of %d = %d",a,ans);
}
 18 changes: 18 additions & 0 deletions18  
size-of-array-udf.c
@@ -0,0 +1,18 @@
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