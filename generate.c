/***************************************************************************
 * generate.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Generates pseudorandom numbers in [0,LIMIT), one per line.
 *
 * Usage: generate n [s]
 *
 * where n is number of pseudorandom numbers to print
 * and s is an optional seed
 ***************************************************************************/
       
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LIMIT 65536

int
main(int argc, char *argv[])
{
    // TODO:prompt the user if argc is less than 2.
    if (argc != 2 && argc != 3)
    {
        printf("Usage: generate n [s]\n");
        return 1;
    }

    // TODO: convert string to int using atoi()  function.
    int n = atoi(argv[1]);

    // TODO: if all arguments are given then use rand() function .
    if (argc == 3)
        srand((unsigned int) atoi(argv[2]));
    else
        srand((unsigned int) time(NULL));

    // TODO: print out random no's.
    for (int i = 0; i < n; i++)
        printf("%d\n", rand() % LIMIT);

    // that's all folks
    return 0;
}
