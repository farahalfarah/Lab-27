/* AUTHOR      : Farah Alfarah & Mark Saleh
 * STUDENT ID  :  1035501 & 1060488
 * LAB #27     : Multidimensional Arrays - Movie Ratings
 * CLASS       : CS1A
 * SECTION     : MW-8am
 * DUE DATE    : 05/02/18
 *****************************************************************************/

#include "Lab27.h"

/******************************************************************************
 *
 *-----------------------------------------------------------------------------
 * This program allows the user to
 *-----------------------------------------------------------------------------
 * INPUT:
 *
 *
 * OUTPUT:
 *
 *****************************************************************************/

int main()
{

	const int ROW_SIZE = 4;
	const int COL_SIZE      = 5;

	float averageRow;
	float averageCol;
	int   review;
	//float averageeCol;


	//average = 0;




	int reviewAr[ROW_SIZE][COL_SIZE];


	ReadInput(reviewAr);

	for(review = 0; review < ROW_SIZE; review++)
	{
		averageRow = AverageByRow(reviewAr[review]);
	}



	averageCol = AverageByCol(reviewAr);



	AverageOutput(averageRow, averageCol, ROW_SIZE, COL_SIZE, reviewAr);



return 0;


}
