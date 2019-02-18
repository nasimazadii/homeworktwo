#include<stdio.h>
/*
 * hwtwo.c
 *
 *  Created on: Feb 17, 2019
 *      Author: Nasim Azadi
 */
void main()
{
	//first problem[challenge#4,chapter 2]
	double mealcost= 88.67;
	double tax= 0.0675 * mealcost;
	double tip= 0.2*(mealcost+tax);
	double totalBill= mealcost + tax + tip;
	printf("mealcost: $%.2f\nTax amount: $%.2f\nTip amount: %.2f\nTotal Bill: %.2f",mealcost,tax,tip,totalBill);

	printf("\n\n");

	//second problem[challenge#7,chapter 2]
	double rise=1.5;
	printf("The oceans levels will rise %.2f mm in %d years from now.\n", 7.5,5);
	printf("The oceans levels will rise %.2f mm in %d years from now.\n", 10.5,7);
	printf("The oceans levels will rise %.2f mm in %d years from now.\n", 15.0,10);

	printf("\n\n");

		//third problem[challenge#23,chapter 3]

	for(int i=1;i<10;i++)
	{
		int j=i;
		while(j!=0)
		{
			printf("*");
			j--;
		}
	printf("\n");
	}

	printf("\n\n\n");
	for(int a=1;a<10;a++)
	{
		int b = 10-a;

		while(b!=0)
		{
			printf("*");
			b--;
		}
		printf("\n");
	}


	printf("\n\n");

		//fourth problem[challenge#23,chapter 5]

 int share = 1000;
double purchaseCost = 45.50;
double comissionRate = 0.02;
double sellCost = 56.90;

double purchased = share *purchaseCost;
double purchaseComission = comissionRate * purchased;
double sold = share*sellCost;
double soldComission = comissionRate*sold;
double totalProfit = (sold)-(purchased+purchaseComission+ soldComission);

printf("Joe paid $%.2f for the stock.\n",purchased);
printf("Joe paid $%.2f comission to his broker when he bought the stock.\n",purchaseComission);
printf("Joe sold the stock for $%.2f.\n",sold);
printf("Joe paid $%.2f comission to his broker when he sold the stock.\n",soldComission);
printf("Joe's net profit is: $%.2f",totalProfit);

}

