#include<stdio.h>
#include<cs50.h>

int main()
{

double change;

int coins, amt = 0;

printf("How much change do you owe?");
scanf("%lf", &change);

coins = (int)(change/0.25);
change =  change - (coins*0.25);
amt =  amt + coins;

coins = (int)(change/0.10);
change =  change - (coins*0.10);
amt =  amt + coins;

coins = (int)(change/0.05);
change =  change - (coins*0.05);
amt =  amt + coins;

coins = (int)(change/0.01);
change =  change - (coins*0.01);
amt =  amt + coins;

printf("The total no of coins needed= %d", amt);

return(0);

}















