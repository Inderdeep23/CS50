#include<cs50.h>
#include<stdio.h>


int main()
{
int days, pennies, index;
double amount = 1.0;

printf("enter no of days in month");
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

for( index = 0; index<days-1 ; index++)
{
 pennies = pennies*2;
amount = amount + pennies;
}
 amount--;
}

printf("your total balance is $ %lf\n", amount);

}


}

  




