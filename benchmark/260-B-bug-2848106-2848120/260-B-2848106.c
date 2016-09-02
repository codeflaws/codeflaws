#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define true 1
#define false 0
#define boolean unsigned char
typedef struct{
	char Tanggal[10];
	int Muncul;} Tabel;
int JumlahHari(int Bulan)
{
	int ans;
	if (Bulan==1) 
	{
		ans=31;}
	else if (Bulan==2) 
	{
		ans=28;}
	else if (Bulan==3) 
	{
		ans=31;}
	else if (Bulan==4) 
	{
		ans=30;}
	else if (Bulan==5) 
	{
		ans=31;}
	else if (Bulan==6) 
	{
		ans=30;}
	else if (Bulan==7) 
	{
		ans=30;}
	else if (Bulan==8) 
	{
		ans=31;}
	else if (Bulan==9) 
	{
		ans=30;}
	else if (Bulan==10) 
	{
		ans=31;}
	else if (Bulan==11) 
	{
		ans=30;}
	else if (Bulan==12) 
	{
		ans=31;}
	return ans;
}
boolean FoundDate(char *D)
{
	boolean ans;
	int bln,tgl,thn;
	char Bulan[3];
	char Tanggal[3];
	char Tahun[5];
	if ((D[2]=='-') && (D[5]=='-'))
	{
		Bulan[0]=D[3];
		Bulan[1]=D[4];
		Bulan[2]='\0';
		bln=atoi(Bulan);
		if ((bln>=1) && (bln<=12)) 
		{
			Tanggal[0]=D[0];
			Tanggal[1]=D[1];
			Tanggal[2]='\0';
			tgl=atoi(Tanggal);
			if ((tgl >=1) && (tgl<=JumlahHari(bln)))
			{
				Tahun[0]=D[6];Tahun[1]=D[7];Tahun[2]=D[8];Tahun[3]=D[9];Tahun[4]='\0';
				thn=atoi(Tahun);
				if ((thn<=2015) && (thn>=2013))
				{
					ans=true;}
				else
				{
					ans=false;}
			}
			else
			{
				ans=false;}
		}
		else
		{
			ans=false;}
	}
	else
	{
		ans=false;}
	return ans;
}
int main(int argc, char *argv[])
{
	char S[100000];
	char CDate[10];
	int i,j,k,p;
	int indeks;
	Tabel TabelDate[10000];
	gets(S);fflush(stdin);
	indeks=0;
	i=0;
	p=strlen(S)-9;
	while (i<=p)
	{
		k=0;
		for (j=i;j<=i+9;j++)
		{
			CDate[k]=S[j];
			k++;}
		CDate[k]='\0';
		if (FoundDate(CDate)==true)
		{
			boolean Found;
			Found=false;
			for (k=1;k<=indeks;k++)
			{
				if (strcmp(TabelDate[k].Tanggal,CDate)==0)
				{
					TabelDate[k].Muncul++;
					Found=true;
					break;}
			}
			if (Found==false)
			{
				indeks++;
				strcpy(TabelDate[indeks].Tanggal,CDate);
				TabelDate[indeks].Muncul=1;}
		}
		i++;
	}
	k=1;
	for (i=2;i<=indeks;i++)
	{
		if (TabelDate[k].Muncul<TabelDate[i].Muncul)
		{
			k=i;}
	}
	printf("%s",TabelDate[k].Tanggal);
	return 0;
}
	
	