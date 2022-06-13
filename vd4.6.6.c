#include<stdio.h>
int main(){
	char ch;
	printf ("\nNhap ky tu: \n", ch);
	scanf ("%c", &ch);
	if (ch < 'a' || ch > 'z')
	printf ("\nYeu cau nhap ky tu tren ban phim");
	else
	switch (ch)
	{case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
		printf ("\nCharacter is a vowel ");
		break;
		case 'z':
			printf ("\nLast Alphabet (z) was entered");
			break;
			default :
				printf ("\nCharacter is a consonant");
				break;
						
	}
}
