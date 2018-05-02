/******************************************************************************
 * AUTHOR      : Farah Alfarah & Mark Saleh
 * STUDENT ID  : 1035501 & 1060488
 * LAB #27     : Multidimensional Arrays - Movie Ratings
 * CLASS       : CS1A
 * SECTION     : MW-8am
 * DUE DATE    : 05/02/18
 *****************************************************************************/
#include "lab27.h"

/******************************************************************************
 * FUNCTION AverageByCol
 * ----------------------------------------------------------------------------
 * This function receives the row size, column size, and the integer array.
 * ----------------------------------------------------------------------------
 * PRE-CONDITIONS
 * 	 The following parameters need to have a defined value prior to calling the
 * 	 function:
 * 	 ROW_SIZE 	  : the row size
 * 	 COL_SIZE 	  : the column size
 * 	 intAr[][]    : the array of the integer data
 *
 * POST-CONDITIONS
 * 	 This function will calculate the average by columns.
 ******************************************************************************/

void AverageByCol(int NUM_AR[][COL_SIZE])      // IN - the array of type int
{
	int colSum;			// IN   - sum of numbers in column
	int rowIndex;		// IN   - row index
	int colIndex;		// IN   - column index
	float avg;       // CALC - average of each row
	float highestRatings;
	int bestMovie;

	// initializing to 0
	highestRatings = 0;

	for(colIndex = 0; colIndex < COL_SIZE; colIndex++)
	{
		colSum= 0;

		for(rowIndex = 0; rowIndex < ROW_SIZE; rowIndex++)
		{
			colSum += NUM_AR[rowIndex];
		}

		avg = float(colSum) / ROW_SIZE;

		if(avg > highestRatings)
		{
			bestMovie = colSum + 1;
			highestRatings = avg;
		}
	}

	cout << endl;
	cout << "The winner is (drum roll please)..." << endl;
	cout << "Movie #" << bestMovie << " with " << highestRatings
		 << " stars!!" << endl;


}




