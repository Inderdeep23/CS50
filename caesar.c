
#include <stdio.h>
#include <string.h> //for strlen().
#include <cs50.h>

int main(int argc,  string argv[])
{
int key, index, len;
// declaring 2 string variables
string s1;
string s2;

// allocating memory dynamically.
s1 = (char *)malloc(256);
s2 = (char *)malloc(256);

printf("Enter the text to be encrypted:");
// prompt the user for input
 
gets(s1);
key = atoi(argv[1]);
len = strlen(s1);

for(index = 0; index<len; index++)
{
 if((s1[index] >= 65) && (s1[index] <= 90))
	{		
		s2[index] = ((((int)(s1[index] - 64 + key )) % 26) + 64);
	}
else if((s1[index] >= 97) && (s1[index] <= 122))
	{
		s2[index] = ((((int)(s1[index] - 96 + key  )) % 26) + 96);
	}
else 
	{
  	s2[index] = s1[index];
	}

	}
	for(index = 0; index<len; index++)
	{
 // printing out the encrypted text.
	printf("%c",s2[index]);
	}
return 0;
}









