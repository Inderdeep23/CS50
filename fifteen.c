
 
#define _XOPEN_SOURCE 500

#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


// constants
#define DIM_MIN 3
#define DIM_MAX 9


// board
int board[DIM_MAX][DIM_MAX];

// dimensions
int d;
// temporary variable 
int temp=0;
// prototypes
void clear(void);
void greet(void);
void init(void);
void draw(void);
bool move(int tile);
bool won(void);


int
main(int argc, char *argv[])
{
    // greet user with instructions
    greet();

    // ensure proper usage
    if (argc != 2)
    {
        printf("Usage: fifteen d\n");
        return 1;
    }

    // ensure valid dimensions
    d = atoi(argv[1]);
    if (d < DIM_MIN || d > DIM_MAX)
    {
        printf("Board must be between %d x %d and %d x %d, inclusive.\n",
         DIM_MIN, DIM_MIN, DIM_MAX, DIM_MAX);
        return 2;
    }

    // initialize the board
    init();

    // accept moves until game is won
    while (true)
    {
        // clear the screen
        clear();

        // draw the current state of the board
        draw();

        // check for win
        if (won())
        {
            printf("ftw!\n");
            break;
        }

        // prompt for move
        printf("Tile to move: ");
        int tile = GetInt();

        // move if possible, else report illegality
        if (!move(tile))
        {
            printf("\nIllegal move.\n");
            usleep(500000);
        }

        // sleep thread for animation's sake
        usleep(500000);
    }

    // that's all folks
    return 0;
}


/*
 * Clears screen using ANSI escape sequences.
 */

void
clear(void)
{
    printf("\033[2J");
    printf("\033[%d;%dH", 0, 0);
}


/*
 * Greets player.
 */

void
greet(void)
{
    clear();
    printf("WELCOME TO THE GAME OF FIFTEEN\n");
    usleep(2000000);
}


/*
 * Initializes the game's board with tiles numbered 1 through d*d - 1
 * (i.e., fills 2D array with values but does not actually print them).  
 */

void
init(void)
{
	int i,j;
	for(i=0;i<d;i++)
	{
		for(j=0;j<d;j++)
		{
			if(i == d-1 && j == d-1)
			{
				board[i][j]=95;
			}			
			else
			{			
				board[i][j]=(((d*d-1)-(i*d))-j);
			}
		}
	} 
	if(temp != 1)
	{
		if(d%2 == 0)
		{
			int swap;
			swap=board[d-1][d-2];
			board[d-1][d-2]=board[d-1][d-3];
			board[d-1][d-3]=swap;
		}
		temp=1;
	}  		
}


/* 
 * Prints the board in its current state.
 */

void
draw(void)
{
	int i,j;
	for(i=0;i<d;i++)
	{
		for(j=0;j<d;j++)
		{
			if(board[i][j] == 95)
			{
				printf(" %c  ",board[i][j]);
			}		
			else
			{
				printf("%2d  ",board[i][j]);
			}	
		}
	printf("\n");
	}
}


/* 
 * If tile borders empty space, moves tile and returns true, else
 * returns false. 
 */

bool
move(int tile)
{
	int i,j;
	for(i=0;i<d;i++)
	{
		for(j=0;j<d;j++)
		{
			if(board[i][j] == 95)
			{
				if(board[i-1][j] == tile)
				{
					int swap; // for swapping tiles.
					swap=board[i-1][j];
					board[i-1][j]=board[i][j];
					board[i][j]=swap;
					return true;
				}
				else if(board[i][j-1] == tile)
				{
					int swap;
					swap=board[i][j-1];
					board[i][j-1]=board[i][j];
					board[i][j]=swap;
					return true;
				}
				else if(board[i][j+1] == tile)
				{
					int swap;
					swap=board[i][j+1];
					board[i][j+1]=board[i][j];
					board[i][j]=swap;
					return true;
				}
				else if(board[i+1][j] == tile)
				{
					int swap;
					swap=board[i+1][j];
					board[i+1][j]=board[i][j];
					board[i][j]=swap;
					return true;
				}
			}		
				
		}
	
	}
    return false;
}


/*
 * Returns true if game is won (i.e., board is in winning configuration), 
 * else false.
 */

bool
won(void)
{
	int x,y;
	for(x=0;x<d;x++)
	{
		for(y=0;y<d;y++)
		{
			if(board[x][y] != 95)
			{
				if(board[x][y] != ((x*d)+y))
				{
					return false;
				}			
			}
		}
	} 
    
    return true;
}
