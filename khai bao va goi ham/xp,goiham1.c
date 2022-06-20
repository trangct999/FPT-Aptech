#include <stdio.h>
#include <string.h>
#include <conio.h>
int add(int a, int b)
{
		int add=a+b;
		return add;
}
int sub(int a, int b)
{
		int sub=a-b;
		return sub;
}
int mul(int a, int b)
{
		int mul=a*b;
		return mul;
}
float div(float a , float b)
{
		int div=a/b;
		return div;
}

int main()
{
	int a,b,KQ;
	char c;
	printf ("Nhap vao 2 so:\n");
	scanf ("%d%d", &a, &b);
	printf ("nhap vao phep tinh +, -, *, /:\n");
	fflush(stdin);
	scanf ("%c", &c);
	switch(c)
	{
		case '+':
			KQ=add(a,b);
			printf ("Ket qua:%d \n", KQ);
			break;
		case '-':
			KQ=sub(a,b);
			printf ("Ket qua:%d \n", KQ);
			break;
		case '*':
			KQ=mul(a,b);
			printf ("Ket qua:%d \n", KQ);
			break;
		case '/':
			KQ=div(a,b);
			printf ("Ket qua:%f \n", KQ);
			break;
		defualt:
			break;
	}
	
}

