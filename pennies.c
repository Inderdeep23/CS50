#include<stdio.h>

int main()
{
int days, int pennies, int index;
double amount = 1.0;

printf("enter no of days in month");  // prompt the user 
scanf("%d", &days);

if((days<28) || (days>31))
{
printf("something is wrong....please retry");
}

else { 

printf("enter no of pennies on first day");
scanf("%d", &pennies);

if(pennies>0)
{ 

for(int index = 0; index<days-1 ; index++)
{
 
 
pennies  = pennies * 2;     
amout = amount + pennies;
}

printf("your total balance is %lf", amount);

}


}

  




