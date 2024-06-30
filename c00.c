#include <stdio.h>
#include <math.h>
int main()
{
	float vize1,vize2,final;
	float dersort;
	float agno;
	printf("Vize1:");
	scanf("%f",&vize1);
	printf("Vize2:");
	scanf("%f",&vize2);
	printf("Final:");
	scanf("%f",&final);
	printf("Agno giriniz:");
	scanf("%f",&agno);
	dersort=(vize1*3/10)+(vize2*3/10)+(final*4/10);
	if(dersort>=90)
	{
		printf("Harf notunuz: AA\nAgno :%.2f",agno);
		if(agno<2.5)
		{
			printf("Dusuk harf notu");
		}
	}
	else if(dersort<90&&dersort>=80)
	{
		printf("Harf notunuz: BA\nAgno :%.2f",agno);
		if(agno<2.5)
		{
			printf("Dusuk harf notu");
		}
	}
	else if(dersort<90&&dersort>=80)
	{
		printf("Harf notunuz: BB\nAgno :%.2f",agno);
		if(agno<2.5)
		{
			printf("Dusuk harf notu");
		}
	}
	else if(dersort<80&&dersort>=70)
	{
		printf("Harf notunuz: CB\nAgno :%.2f",agno);
		if(agno<2.5)
		{
			printf("Dusuk harf notu");
		}
	}
	else if(dersort<70&&dersort>=60)
	{
		printf("Harf notunuz: CC\nAgno :%.2f",agno);
		if(agno<2.5)
		{
			printf("Dusuk harf notu");
		}
	}
	else{
		printf("FF!!!\nAgno :%.2f\n",agno);
		if(agno<2.5)
		{
			printf("Dusuk harf notu");
		}
	}
	
	
}
