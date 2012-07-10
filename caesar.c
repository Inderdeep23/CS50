
#include <stdio.h>
#include <string.h> //for strlen();
#include <cs50.h>


int main(int argc, char *argv[])

{

int key, index, len;

 char a[100];
 char b[100];

 // allocating memory dynamically.


printf("enter the text to be encrypted:");

// prompt the user for input 

scanf("%s", a);

key = atoi(argv[1]);

len = strlen(a);

for(index = 0; index<len; index++)
{


		 if((a[index] >= 65) && (a[index] <= 90))
	{		
		b[index] = ((((int)(a[index] - 64 + key )) % 26) + 64); 
	}

else if((a[index] >= 97) && (a[index] <= 122))
	{
		b[index] = ((((int)(a[index] - 96 + key )) % 26) + 96); 
	}
else

{
  b[index] = a[index];

}

}

	for(index = 0; index < len; index++)
{
 
	printf("%s", b);

}




return 0;

}













