#include<stdio.h>
int main(){
	int mon1, mon2, mon3, mon4;
	float KQ;
	printf ("\nNhap Diem mon1:");
	scanf ("%d", &mon1);
	printf ("\nNhap Diem mon2:");
	scanf ("%d", &mon2);
	printf ("\nNhap Diem mon3:");
	scanf ("%d", &mon3);
	printf ("\nNhap Diem mon4:");
	scanf ("%d", &mon4);
	KQ = (float)(mon1 + mon2 + mon3 + mon4)/2;
	printf ("Diem trung binh KQ: %.1f", KQ);

}
