#include <stdio.h>
#include <math.h>
#define PI 3
int main()
{
	float x1,x2;
	float a,b,c;
	float delta;
	printf("Denklemin a'sini giriniz : ");
	scanf("%f",&a);
	printf("Denklemin b'sini giriniz : ");
	scanf("%f",&b);
	printf("Denklemin c'sini giriniz : ");
	scanf("%f",&c);
	delta=(b*b)-(4*a*c);
	x1=(-b+(sqrt(delta)))/2*a;
	x2=(-b-(sqrt(delta)))/2*a;
	printf("Delta : %.f\nDenklemin 1.koku : %.2f\nDenklemin 2.koku : %.2f\n",delta,x1,x2);
}
