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
 * @file <Analysing Data> 
 * @brief <Week 1 Application Assignment>
 *
 * <Software to analyse data and print the results>
 *
 * @author <Vadecir Junior De Paris>
 * @date <10/08/2020>
 *
 */


#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)
void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};


 /* Other Variable Declarations Go Here */
 unsigned int i,n,y;
 unsigned char min, max, sort[SIZE];
	i=0;
	n=SIZE;

 /* Statistics and Printing Functions Go Here */
 unsigned char find_mean(unsigned char test[]) 
	{
 	int i;
 	float s=0;
 	for(i=0; i<n; i++)
 	s += test[i];
 	return s/n;
	} 
 unsigned char find_minimum(unsigned char test[], int i, int n) 
	{		
 	unsigned int j, k=i;
 	for(j=i+1; j<n; j++)
	if( test[k]>test[j])
 	k=j;
	return k;
	} 
 unsigned char find_maximum(unsigned char test[], int i, int n) 
	{		
 	unsigned int j, k=i;
 	for(j=i+1; j<n; j++)
	if( test[k]<test[j])
 	k=j;
	return k;
	} 
	min = find_minimum(test,i,n); /*It is the position of minimum value in array test[]*/
	max = find_maximum(test,i,n); /*It is the position of maximum value in array test[]*/

/*Next 3 comans will show in the screen the values of maximum, minimun and mean*/
printf("\nThe maximum value is %d", test[max]);
printf("\nThe minimum value is %d", test[min]);
printf("\nThe mean value is %d", find_mean(test));

void sort_array() 
	{
	unsigned int i, j, x, y;
	for( i=0; i<n; i++ )
	{
		for( j=i+1; j<n; j++ )
		{
			if( test[i] < test[j] )
			{
			x = test[i];
			test[i] = test[j];
			test[j] = x;
			}
		}
	}
	}
sort_array(); /*Call function to sort and created the array sorted sort[] necessary to find the median*/
	for (i=0; i<n; i++)
	{
       	sort[i] = test[i]; 
	}	
unsigned char find_median(unsigned char sort[]) 
	{
 	unsigned int s, x, y;
	x = n/2;
	y = x+1;
	s = sort[x]+sort[y];
	s = s/2;
 	return s;
	} 
printf("\nThe median value is %d\n", find_median(sort)); /*Show in the screen the median*/

sort_array(); /*Call function to show in the screen the values sorted from large to small*/
	printf("\n Data Sorted from Large to Small!\n\n");
        for (i=0; i<n; i++)
	{
	y=i+1;     
	printf("%d Larger: %d \n", y,test[i]);
	}
 /* Add other Implementation File Code Here */
printf("\n");
}

