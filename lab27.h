/******************************************************************************
 * AUTHOR      : Farah Alfarah & Mark Saleh
 * STUDENT ID  : 1035501 & 1060488
 * LAB #27     : Multidimensional Arrays - Movie Ratings
 * CLASS       : CS1A
 * SECTION     : MW-8am
 * DUE DATE    : 05/02/18
 *****************************************************************************/
#ifndef LAB27_H_
#define LAB27_H_

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;

const int TOT_REVIEWER = 4;
const int TOT_MOV      = 5;

const int ROW_SIZE     = 4;
const int COL_SIZE     = 5;



/******************************************************************************
 * PrintHeader
 * This function receives an assignment name, type and number then outputs the
 * appropriate header.
 *  ==> returns nothing.
 ****************************************************************************/
void PrintHeader(string asName,  //IN - assignment name - used for output
				  char   asType, //IN - assignment type - used for output
				  int    asNum); //IN - assignment num  - used for output

/******************************************************************************
 * ReadInput
 * 		This function receives the row size, column size, and the reviewer's
 * 		array.
 * 		==> returns nothing.
 *****************************************************************************/
void ReadInput(int reviewAr[][COL_SIZE]);   // IN - the array storing the data above

/******************************************************************************
 * AverageByRow
 * 		This function receives the row size, column size, and the integer array.
 * 		==> returns average by rows.
 ******************************************************************************/
float AverageByRow(const int NUM_AR[]);      // IN - the array of type int


/******************************************************************************
 * AverageByCol
 * 		This function receives the row size, column size, and the integer array.
 * 		==> returns average by columns.
 ******************************************************************************/
float AverageByCol(const int ROW_SIZE,   // IN - the row's size
		           const int COL_SIZE,   // IN - the column's size
				   int intAr[]);      // IN - the array of type int

/******************************************************************************
 * AverageOutput
 * 		This function receives the row size, column size, reviewer average,
 * 		movie average, and the reviewer's array.
 * 		==> returns nothing.
 *****************************************************************************/
void AverageOutput(float reviewerAvg, 	// IN - reviewer's average
				   float movieAvg, 		// IN - movie average
				   const int ROW_SIZE,	// IN - row size
				   const int COL_SIZE,	// IN - column size
				   int reviewAr[][5]); 	// IN - reviewer's array





#endif /* LAB27_H_ */
