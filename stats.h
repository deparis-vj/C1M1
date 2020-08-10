/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.h 
 * @brief Week 1 Application Assignment
 *
 * Software to analyse data and print the results
 *
 * @author <Vadecir Junior De Paris>
 * @date <10/08/2020>
 *
 */

#ifndef __STATS_H__
#define __STATS_H__



/* Each function bellow is necessary to run the Software Analysing Data */ 
/**
 * @brief main() - The main entry point		 				
 * 	
 * The data are defined for the program.
 *
 * @param integer put the number of data
 * @param unsigned char put the data
 * @return array of data
 */
	void main() ;
/** 
 * @brief find_median() 				
 * 	
 * Given an array sorted from large to small of data and a length, 
 * returns the median value.
 * 
 * @param unsigned char the array sorted of sort_array() function.
 *
 * @return unsigned char with the value of the median.
 */ 
	unsigned char find_median(unsigned char sort[]); 

/** 
 * @brief find_mean()				
 * 	
 * Given an array of data and a length, returns the mean value.
 * 
 * @param unsigned char the array of main() function 
 * @param in this example the array is test[].
 *
 * @return unsigned char with the value of the mean.
 */ 
	unsigned char find_mean(unsigned char test[]); 

/** 
 * @brief find_maximum()				
 * 	
 * Given an array of data and a length, returns the maximum value.
 * 
 * @param unsigned char the array of main() function 
 * @param in this example the array is test[].
 *
 * @return unsigned char with the position of the maximum value
 * @return in the array of main() function.
 */ 
	unsigned char find_maximum(unsigned char test[], int i, int n); 

/** 
 * @brief find_minimum()				
 * 	
 * Given an array of data and a length, returns the minimum value.
 * 
 * @param unsigned char the array of main() function 
 * @param in this example the array is test[].
 *
 * @return unsigned char with the position of the minimum value
 * @return in the array of main() function.
 */ 
	unsigned char find_minimum(unsigned char test[], int i, int n); 

/** 
 * @brief sort_array()				
 * 	
 * Given an array of data and a length, sorts the array 
 * from largest to smallest. (The zeroth Element should 
 * be the largest value, and the last element (n-1) 
 * should be the smallest value.)
 * 
 * @param unsigned char the array of main() function 
 * @param in this example the array is test[].
 *
 * @return and function with data sorted, is necessary
 * @return put this data in other function to print or 
 * @return for analyse.
 */ 
	void sort_array();
#endif /* __STATS_H__ */

