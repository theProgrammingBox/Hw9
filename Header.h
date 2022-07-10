#pragma once
#include <iostream>
#include <iomanip>
using namespace std;


/*******************************************************************************
 * PrintHeader
 *   This function will output the header as ostringstream so it can
 *   either output to console or file
 *
 * RETURN: header as string
 ******************************************************************************/
string PrintHeaderSS(string  asName,  // IN - assignment Name - used for output
				     char    asType,  // IN - assignment type
				                      //    - (LAB or ASSIGN) - used for output
				     int     asNum);  // IN - assign. Number  - used for output