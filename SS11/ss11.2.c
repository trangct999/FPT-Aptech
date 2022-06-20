#include <stdio.h>
int main()
{
	int ary[10];
	int i, total, high;
	for (i=0; i<10; i++)
	{
		printf ("\n enter value : %d:", i +1);
		scanf ("%d", &ary[i]);
	}
	high = ary[0];
	for (i=0; i<10; i++)
	{
		if (ary[i]>high)
		high =ary[i];
	}
	printf ("Highest enter value was %d", high);
	for ( i=0, total = 0; i < 10; i++)
	total = total + ary[i];
	printf ("\nThe average of value entered for ary is %d", total/i);
}
