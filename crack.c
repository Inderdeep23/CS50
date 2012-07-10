#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <unistd.h>
#include <crypt.h>
// for using crypt function.
#define _XOPEN_SOURCE


 int main(void)   

{

// declaring 3 strings
string encrypted, key, lock;
lock = "50";
// allocating memory dynamically.

key = (char *)malloc(256);

encrypted = "50yoN9fp966dU";

static const char filename[] = "words.txt";
// opening a new file

FILE *fp = fopen(filename, "r");

 if(fp!=NULL)
{
// array to store a line
char line[128];

while(fgets(line, sizeof(line), fp )!= NULL)
 {
  // assign line to key 
	key = line;

// assign ciphertext to 
string str = (string)crypt(key,lock);

if(strcmp(str,encrypted))

{

 printf("\nThe Key Is %s\n", key);

	return 1;

}

}
	fclose(fp);
}

	else
{
printf("Error");
}

return (0);

}













