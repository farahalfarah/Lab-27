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
 * FUNCTION AverageByRow
 * ----------------------------------------------------------------------------
 * This function receives the row size, column size, and the integer array.
 * ----------------------------------------------------------------------------
 * PRE-CONDITIONS
 * 	 The following parameters need to have a defined value prior to calling the
 * 	 function:
 * 	 NUM_AR    : int array
 *
 * POST-CONDITIONS
 * 	 This function will calculate the average by rows.
 ******************************************************************************/

float AverageByRow(const int NUM_AR[])      // IN - the array of type int
{
	int rowSum;			// IN   - sum of numbers in row
	int colIndex;		// IN   - column index
	float avg;			// CALC - average of each row


	rowSum = 0;

	for(colIndex = 0; colIndex < COL_SIZE; colIndex++)
	{
		rowSum += NUM_AR[colIndex];
	}

	cout << setprecision(1) << fixed;
	avg = float(rowSum) / COL_SIZE;

	return avg;
}
