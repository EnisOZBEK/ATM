//Turkish Automatic Teller Machine(ATM). by <Enis ÖZBEK>

#include<stdio.h>
#include<conio.h>

int main()
{
	int islem,a;
	float miktar,bakiye=5753.42;
	char yeniden='e';
	
		printf("\t\t\t\t\t\tEnisBank'a Hosgeldiniz!");
		printf("\n\nIslem Menusu:\n 1-Bakiye Sorgulama!\n 2-Para Cekme!\n 3-Para Yatirma!\n 4-Havale!\n 5-EFT!(50 TL EFT Ucreti Kesilir!)\n 6-Cikis!");

	while(yeniden=='e')
	{
		printf("\n\nLutfen Bir Islem Seciniz: ");
		scanf("%d",&islem);
		
		switch(islem)
		{
		case 1:
			printf(" Mevcut Bakiyeniz: %.2f TL",bakiye);
			break;
		
		case 2:
			printf(" Lutfen Cekmek Istediginiz Miktari Giriniz: ");
			scanf("%f",&miktar);
			
			if(miktar>bakiye)
			{
			printf(" Yetersiz Bakiye!");
			}
			else
			{
			printf(" %.2f TL Cektiniz. Yeni Bakiyeniz: %.2f",miktar,bakiye-miktar);
			}
			break;
			
		case 3:
			printf(" Lutfen Yatirmak Istediginiz Miktari Giriniz: ");
			scanf("%f",&miktar);
			printf(" %.2f TL Yatirdiniz. Yeni Bakiyeniz: %.2f",miktar,bakiye+miktar);
			break;
			
		case 4:
			printf(" Lutfen Havale Etmek Istediginiz Miktari Giriniz: ");
			scanf("%f",&miktar);
			
			if(miktar>bakiye)
			{
			printf(" Yetersiz Bakiye!");
			}
			else
			{
			printf(" %.2f TL Havale Ettiniz. Yeni Bakiyeniz: %.2f",miktar,bakiye-miktar);
			}
			break;
			
		case 5:
			printf(" Lutfen EFT Yapmak Istediginiz Miktari Giriniz: ");
			scanf("%f",&miktar);
			
			if(miktar+50>bakiye)
			{
			printf(" Yetersiz Bakiye!");
			}
			else
			{
			printf(" %.2f TL EFT Yaptiniz. Yeni Bakiyeniz: %.2f",miktar+50,bakiye-(miktar+50));
			}
			break;
			
		case 6:
			printf("\n\t\tTEKRAR GORUSMEK DILEGIYLE...");
			a=1;
			yeniden='h';
			break;
			
		default:
			printf(" GECERSIZ ISLEM!");
			
			return 0;
		}
		if (a!=1)
	    {
        	printf("\n\tYeniden Islem Yapmak Ister misiniz ?(e/h): ");	
	    	scanf("%s",&yeniden);
	    
	    if(yeniden=='h')
	    {
	    	printf("\n\t\tTEKRAR GORUSMEK DILEGIYLE...");
	    	
	    	return 0;
		}
	    printf("\n\nIslem Menusu:\n 1-Bakiye Sorgulama!\n 2-Para Cekme!\n 3-Para Yatirma!\n 4-Havale!\n 5-EFT!(50 TL EFT Ucreti Kesilir!)\n 6-Cikis!");
	    }
	}
	getch();
}
