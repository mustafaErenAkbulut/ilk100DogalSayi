#include<stdio.h>
#include<math.h>
#include<stdlib.h>

/* Karelerin toplamını bulan fonksiyon. */

int birinci(int karetop) 
{
	int sonuc,j;
	karetop=0;
	
	for(j=1;j<=100;j++)
	{
		karetop=karetop+j*j;
		sonuc=karetop;
	}
	return sonuc;
}

/* İlk yüz doğal sayının kareleri toplamı ile toplamlarının karesi arasındaki farkı bulan kod. */

int main() 
{
	
	int karetop,j,sonuc,topkare,topkare1,sonuc1,k,fark;
	
	printf("Ilk yuz dogal sayinin kareleri toplami ile toplaminin karesini bulan programa hos geldiniz.\n");
	
	printf("\n\n\t Kareleri Toplami     = %d" ,birinci(sonuc)); // Birinci fonksiyondan gelen değeri ...
	printf("\n\n\t Toplamlarinin Karesi = %d" ,ikinci(sonuc1)); // İkinci fonksiyondan gelen değeri ...
	printf("\n\n\t Toplamlarinin Karesi = %d \n\n\n" ,ikinci(sonuc1)-birinci(sonuc)); // İkinci ve Birinici fonksiyondan gelen değerlerin farkını yazdırdım.
	
	
	printf("Cikmak icin herhangi bi tusa basiniz\n\n"); // Türkçe Açıkladım.
	system("pause"); // Hemen kapanmasın diye koydum.
	return 0;
	
}

/* Toplamların karesini bulan fonksiyon. */

int ikinci(int topkare, int topkare1) 
{
	int sonuc1,k;
	topkare=0;
	topkare1=0;
	
	for(k=0;k<=100;k++)
	{
		topkare=topkare+k;
		topkare1=topkare*topkare;
		sonuc1=topkare1;
	}
	return sonuc1;
}