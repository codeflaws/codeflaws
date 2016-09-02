#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
	int i,j,a,b,year1,year2,c,d,month1,day1,month2,day2,counter=0,hold1;
	char string[10];
	int arr[139]={0};
	arr[100]=1;
	for(i=1;i<139;i++)
	{
		if(i%4==0)
			arr[i]=1;
	}
	int month[13];
	month[1]=31;
	month[2]=28;
	month[3]=31;
	month[4]=30;
	month[5]=31;
	month[6]=30;
	month[7]=31;
	month[8]=31;
	month[9]=30;
	month[10]=31;
	month[11]=30;
	month[12]=31;
	scanf("%s",string);
	year1=(string[0]-'0')*1000+(string[1]-'0')*100+(string[2]-'0')*10+(string[3]-'0');
	month1=(string[5]-'0')*10+(string[6]-'0');
	day1=(string[8]-'0')*10+(string[9]-'0');
	scanf("%s",string);
	year2=(string[0]-'0')*1000+(string[1]-'0')*100+(string[2]-'0')*10+(string[3]-'0');
	month2=(string[5]-'0')*10+(string[6]-'0');
	day2=(string[8]-'0')*10+(string[9]-'0');
	if(year1>year2)
	{
		hold1=year1;
		year1=year2;
		year2=hold1;
		hold1=month1;
		month1=month2;
		month2=hold1;
		hold1=day1;
		day1=day2;
		day2=hold1;
	}
	if(year1==year2)
	{
		if(month1>month2)
		{
			hold1=month1;
			month1=month2;
			month2=hold1;
			hold1=day1;
			day1=day2;
			day2=hold1;
		}
		if(month1==month2)
		{
			if(day1>day2)
			{
				hold1=day1;
				day1=day2;
				day2=hold1;
			}
		}
	}
	if(year2>=year1+1)
	{
		if(year2>year1+1)
		{
			for(j=(year1+1)-1900;j<year2-1900;j++)
			{
				if(arr[j]==1)
					counter+=366;
				else
					counter+=365;
			}
		}
		counter+=month[month1]-day1;
		if(month1==2 && arr[year1-1900]==1)
			counter++;
		int cc=0;
		for(j=month1+1;j<13;j++)
		{
			counter+=month[j];
			cc+=month[j];
			if(j==2 && arr[year1-1900]==1)
				counter++;
		}
		counter+=day2;
		for(j=1;j<month2;j++)
		{
			counter+=month[j];
			if(j==2 && arr[year2-1900]==1)
				counter++;
		}

	}
	else if(year1==year2)
	{
		if(month1!=month2)
		{
			counter+=month[month1]-day1;
			if(month1==2 && arr[year1-1900]==1)
				counter++;
			counter+=day2;
			for(j=month1+1;j<month2;j++)
			{
				counter+=month[j];
				if(arr[year1-1900]==1)
					counter++;
			}
		}
		else
		{
			if(day1!=day2)
				counter=counter+day2-day1;
			else
				counter=0;
		}

	}
	printf("%d\n",counter);
	return 0;
}
