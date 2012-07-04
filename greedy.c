#include<stdio.h>
#include<cs50.h>

int main()
{

double change;
int coins , amt = 0;

printf("How much change do you owe?");
scanf("%lf", &change);

coins = (int)(change/25);
change =  change - (coins*25);
amt =  amt + coins;

coins = (int)(change/10);
change =  change - (coins*10);
amt =  amt + coins;

coins = (int)(change/5);
change =  change - (coins*5);
amt =  amt + coins;

coins = (int)(change/1);
change =  change - (coins*1);
amt =  amt + coins;

printf("total no of coins= %d", amt);

}















