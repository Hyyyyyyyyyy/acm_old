#include<stdio.h>
int main(void)
{
	float weight;
	float value;
	
	printf("Are u worth your weight in platinum?\n");
	printf("Let's check it out.\n");
	printf("Please enter your weight in pounds:");
	scanf("%f",&weight);
	
	value = 1700.0*weight*14.5833;
	
	printf("Your weight in platinum is $%.2f,\n",value);
	printf("You are easy worth that! If platinum prices drop,\n");
	printf("eat more to maintain your value,\n");
	
	getchar();
	getchar();
	return 0; 
}
