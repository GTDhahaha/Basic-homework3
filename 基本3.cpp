#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float h,w,b; 
	printf("Please enter your height (cm)¡G");
	scanf("%f",&h) ;
	printf("Please enter your weight (kg)¡G");
	scanf("%f",&w) ;
	b=(w/((h/100)*(h/100)));
	printf("your bmi is¡G%f\n",b);
	system("pause");
	return 0;
}
