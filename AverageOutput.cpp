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
 * FUNCTION AverageOutput
 * ----------------------------------------------------------------------------
 * This function receives the row size, column size, reviewer average,
 * movie average, and the reviewer's array.
 * ----------------------------------------------------------------------------
 * PRE-CONDITIONS
 * 	 The following parameters need to have a defined value prior to calling the
 * 	 function:
 * 	 reviewerAvg  : reviewer's average
 * 	 movieAvg     : movie average
 * 	 ROW_SIZE 	  : the reviewer's size
 * 	 COL_SIZE 	  : the movie rating's size
 * 	 reviewAr[][] : the array of reviewer's ratings
 *
 * POST-CONDITIONS
 * 	 This function will output the averages of reviewers and movies.
 *****************************************************************************/

void AverageOutput(float reviewerAvg, 	// IN - reviewer's average
				   float movieAvg, 		// IN - movie average
				   int reviewAr[][5]) 	// IN - reviewer's array
{
	int rowIndex;
	int colIndex;

	cout << "***************************************\n"
		 << "** MOVIE STARS - RATING ANALYSIS TOOL *\n"
		 << "***************************************\n"
		 << endl;

	cout << "The average rating given by each reviewer is...\n";
	for(rowIndex = 0; rowIndex < ROW_SIZE; rowIndex++)
	{
		cout << setprecision(1) << fixed;
		cout << "Reviewer #" << rowIndex + 1 << " gave an average of "
			 << reviewerAvg << " stars.";
		cout << endl;
	}

	cout << endl << endl;

	cout << "The average rating given by each movie is...\n";
	for(colIndex = 0; colIndex < COL_SIZE; colIndex++)
	{
		cout << setprecision(1) << fixed;
		cout << "Movie #" << colIndex + 1 << " earned  "
			 << reviewerAvg << " stars!";
		cout << endl;
	}

}
