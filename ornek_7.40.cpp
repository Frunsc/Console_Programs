#include <stdio.h>
#include <string.h>
#include <conio.h>


int main(){
	char cumle[200],harf;
	int i,yeri[200],x=0;
	
	printf("cumleyi giriniz: ");
	scanf("%s",cumle);
	
	printf("cumlede bulunma sayisini ve yerini ogrenmek istediginiz harfi giriniz:");
	scanf("%s",&harf);

	for (i=0;i<strlen(cumle);i++)
	{
		if (cumle[i] == harf)
		{
			yeri[x]=i+1;
			x++;
		}
		else
		{
		}
	}
	
	printf("cumle icinde bulunma miktari ==> %d\n\n",x);
	
	for(i=0;i<x;i++)
	{
		printf("%d. sirada\t",yeri[i]);
	}
	
	
	return 0;
}
