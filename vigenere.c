#include <stdio.h>
#include <string.h>
#include <cs50.h>

 
int main(int argc, char *argv[])
{
    {
        if(argc != 1) 
            {
                printf("Please Try Again.....\n");

                return (1);
            }
    }
    char p[50];  
	// char array to store plaintext

    if(argc = 1)
        printf("What message would you like to encrypt?\n");

    	fgets(p, 50, stdin);

    char key[15];
// char array to store key

        printf("What would you like your keyword to be?\n");

   	fgets(key, 15, stdin);


    int i, j, n;

    for(i = 0, j = 0, n = strlen(p); i < n; i++, j++)

    {
        char a = (((p[i] - 'A') + (key[j] - 'A') % 26) + 'A');

        char b = (((p[i] - 'a') + (key[j] - 'a') % 26) + 'a');


        if(a >= 'A' && a <= 'Z')      
            printf("%c", a);

        if(b >= 'a' && b <= 'z')
            printf("%c", b);

        else
            printf("%c", p[i]);


    }


    printf("\n");


    return (0);
     
}
