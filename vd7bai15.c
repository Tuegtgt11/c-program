#include<stdio.h>
main()
{
	int x,y, *px, *py;
	
	/* Stroring address of x in px */
	px = &x;
	
	/* Stroring address of y in py */
	py = &y;
	
	x =15; y = 20;
	printf("x=%d, y=%d\n",x,y);
	swap (px,py);
	
	/* Passing address of x and y */
	printf("\n After interchanging x=%d, y= %d",x,y);
}

swap(int *u, int *v)
/* Accept the values of px and py into u and v */
{
	int temp;
	temp = *u;
	*u= *v;
	*v= temp;
	return;
}
