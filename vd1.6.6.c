#include<stdio.h>
int main(){
	char ch = 'a';
	int i;
	float f, result;
	double d;
	
	printf ("\nNhap gia tri ch:");
	scanf ("a= %c", &ch);
	printf ("\nNhap gia tri i:");
	scanf ("%d", &i);
	printf ("\nNhap gia tri f:");
	scanf ("%f", &f);
	printf ("\nNhap gia tri d:");
	scanf ("%lf", &d );
	result = (ch/i) + (f*d) - (f+i);
	printf ("Ket qua %lf", result);
	
	
}
