#include<stdio.h>

main()
{
	int x;
	printf ("Masukkan nilai x : "); scanf ("%d",&x);
	
	if(x>0)
	{
		printf ("Maka nilai x adalah bilangan positif");
	}
	else if(x<0)
	{
		printf ("Maka nilai x adalah bilangan negative");
	}
	else
	{
		printf ("Maka nilai x adalah bilangan 0");
	}
}
