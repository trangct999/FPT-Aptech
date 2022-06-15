#include <stdio.h>
int main ()
{
		int cardid, pin,ch ;
		char lap;
	printf ("Moi nhap ma the: \n");
	scanf ("%d", &cardid);
	printf ("Nhap mat khau: \n");
	scanf ("%d", &pin);
	if (cardid == 123&&pin == 345)
	{
		printf ("Dang nhap thanh cong\n");
		do
		{
		printf(" 1. Rut tien\t");
		printf(" 2. Chuyen khoan\n");
		printf(" 3. KT so du\t");
		printf(" 4. Ket thuc \n");
		fflush(stdin);
		scanf ("%d", &ch);
		if (ch>=1||ch>=4)
		{
					switch (ch)
					{
				case 1:
					printf ("Nhap so tien can rut: \n");
					break;
				case 2:
					printf ("Nhap so tai khoan can chuyen:\n");
					break;
				case 3:
					printf ("So du cua ban la:\n");
					break;
				case 4:
					printf ("Cam on ban. Tam biet.\n");
					break;
					default:
					break;
											
					}
				}
				else
				{
					printf("ban nhap sai \n:");
				}
					printf("ban muon tiep tuc hay khong Y or N \n");
				fflush(stdin); 
				scanf("%c", &lap);
				}
				while(lap=='Y'||lap=='y');
				printf("Tam biet quy khach\n");
				
			}
		
	}
	


	

