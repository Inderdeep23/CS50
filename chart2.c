#include<cs50.h>
#include<stdio.h>

int main()
{
 
int mf, fm, ff, mm, total, index;


printf("M spotting F\n");   // prompt the user for input 
scanf("%d", &mf);


if(&mf<0)
{
printf("Please try again..");
}
	
printf("F spotting M\n");
scanf("%d", &fm);

printf("F spotting F\n");
scanf("%d", &ff);

printf("M spotting M\n");
scanf("%d", &mm);



total = mf + fm + ff + mm;  //total of all sightings

double d1  = (mf*80)/total;
double d2  = (fm*80)/total;
double d3  = (ff*80)/total;
double d4  = (mm*80)/total;

printf("\nM spotting F\n");
for(index = 0; index<(int)d1; index++)  // prints out @ sign 
{
 printf("@\n");

}

printf("\nF spotting M\n");

// explicit typecasting of double to int.

for(index = 0; index<(int)d2; index++)  
{
 printf("@\n");
}

printf("\nF spotting F\n");
for(index = 0; index<(int)d3; index++)
{
 printf("@\n");
}

printf("\nM spotting M\n");
for(index = 0; index<(int)d4; index++)

{
 printf("@\n");
}

return (0);

}














