#include<stdio.h>
#include<string.h>
#include<cs50.h>


int main()

{

int index;
char choice;

string numbers[] = {"ONE","TWO", "THREE", "FOUR", "FIVE", "SIX", "SEVEN", "EIGHT", "NINE", "TEN"};
string words[] = {"ON MY THUMB","ON MY SHOE","ON MY KNEE", "ON MY DOOR", "ON MY HIVE", "ON MY STICKS", "UP IN HEAVEN", "ON MY GATE", "ON MY SPINE","ONCE AGAIN"};


printf("Do you wanna hear a song?\n");
scanf("%c", &choice);

if((choice == 'y')  || (choice == 'Y'))   // prompt the user for choice  
{

/*****initializing a for loop*****/

for(index = 0; index<10; index++)

{

printf("\nThis old man, he played %s\nHe played knick-knacK %s\nKnick-knack paddywhackive your dog a bone\nThis old man came rolling home\n", numbers[index], words[index]);

}

}

else
{
if((choice == 'n') || (choice=='N'))
{

printf("\nsorry to hear that\n?");

}

}

return 0;

}










