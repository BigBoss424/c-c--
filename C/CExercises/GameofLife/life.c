/* Simulation of Conway's game of Life on a bounded grid
	Pre: The user must supply an initial configuration of living cells.
	Post: The program prints a sequence of maps showing the changes in the
		  configuration of living cells according to the rules for the game
		  of Life. 
	Uses: functions Initialize, WriteMap, NeighborCount, and UserSaysYes
*/
#include "common.h"			/*common include files and definitions*/
#include "life.h"			/*Life's defines, typedefs, and prototypes*/

void main(void)
{
	int row, col;
	Grid map;				/*current generation*/
	Grid newmap;			/*next generation*/
	Initialize(map);
	WriteMap(map);
	printf("This is the initial configuration you have chosen.\n"
			"Press < Enter > to continue.\n");
	while(getchar() != '\n')
		;
	do {
		for(row = 1; row <= MAXROW; row++)
			for(col = 1; col <= MAXCOL; col++)
				switch(NeighborCount(map, row, col))
				{
					case 0:
					case 1:
						newmap[row][col] = DEAD;
						break;
					case 2: 
						newmap[row][col] = map[row][col];
						break;
					case 3: 
						newmap[row][col] = ALIVE;
						break;
					case 4:
					case 5: 
					case 6:
					case 7:
					case 8:
						newmap[row][col] = DEAD;
						break;
				}
			CopyMap(map, newmap);
			WriteMap(map);
			printf("Do you wish to continue viewing the new generations");
	} while (UserSaysYes());
}