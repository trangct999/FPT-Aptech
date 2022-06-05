#include <stdio.h>
int main()
{
	
	printf ("A string in various forms:\n");
	printf ("Withour any format command:\n");	
	printf ("Good day MR. Lee. \n");
	printf ("With format command bur without any modifier:\n");
	printf ("[%s]\n", "Good day Mr. Lee.");
	printf ("With digit string 4 as moiofier:\n");
	printf ("[%4s]\n", "Good day Mr. Lee.");
	printf ("With digit string 19 as moiofier:\n");
	printf ("[%19s]\n", "Good day Mr. Lee.");
	printf ("With digit string 23 as moiofier:\n");
	printf ("[%23s]\n", "Good day Mr. Lee.");
	printf ("With digit string 25.4 as moiofier:\n");
	printf ("[%25.4s]\n", "Good day Mr. Lee.");
	printf ("With - and digit string 25.4 as moiofier:\n");
	printf ("[%-25.4s]\n", "Good day Mr. Shroff.");
}
