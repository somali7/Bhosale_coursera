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
 * @file stats.c 
 * @brief : Array operations 

* File stats.c introduces a couple of functions that can analyze an array of unsigned char data
  items and report analytics on the maximum, minimum, mean, and median of the data set. In 
  addition,reorder the data set from large to small. All statistics are rounded down to the
  nearest integer. After analysis and sorting is done,prints that data to the screen in nicely
  formatted presentation.

 *
 * 
 *
 * @author <Somali Bhosale>
 * @date <24/05/2020>
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
	 
	unsigned char max,min,mean,med;
	printf("Given array:\n");
  	print_array(test,SIZE);
	max=find_maximum(test,SIZE);
	min=find_minimum(test,SIZE);
	mean=find_mean(test,SIZE);
	
	sort_array(test,SIZE);
	printf("\nSorted array:\n");
	print_array(test,SIZE);
	med=find_median(test,SIZE);
	printf("Printing statistics:");	
	print_statistics(mean,max,min,med);
}

/* Add other Implementation File Code Here */

//printing calculated statistics
void print_statistics(unsigned char mean,unsigned char max,unsigned char min,unsigned char med)
{	
	printf("\n\nMean=%u\t Median=%u\t Maximum=%u\t Minimum=%u\n\n",mean,med,max,min);
}

//printing array elements
void print_array(unsigned char *test,unsigned char size)
{
	unsigned char i=0;
	
	for(i=0;i<size;i++)
	  printf("%u ",test[i]); 
	printf("\n\n");
}

//finding median value of given array data (Making sure array is sorted before calling this function)
unsigned char find_median(unsigned char *test,unsigned char size)
{
	float med=0;

	if(test==NULL){
	return 0;
	}

	if(size%2==0)
 	med=(test[(size-1)/2]+test[size/2])/2.0; //if number of elments are even
	else
	med=test[size/2];                        //if number of elements are odd
	
	return med  ;      //return equivalent to rounding off the value to nearest integer 
}

//finding mean value of given array data 
unsigned char find_mean(unsigned char *test,unsigned char size)
{
	unsigned char i=0;
	float mean=0;

	if(test==NULL){
	return 0;
	}

	for(i=0;i<size;i++)
	mean+=test[i];		//mean is storing complete sumation of elements in test
	
	mean/=size;		//mean actual calculating summation/size
 
	return mean;	//return equivalent to rounding off the value to nearest integer
}

//finding maximum value of given array data 
unsigned char find_maximum(unsigned char *test,unsigned char size)
{
	unsigned char i=0;
	unsigned char max=test[0];

	if(test==NULL){
	return 0;
	}

	for(i=0;i<size;i++)
	{	
	  if(test[i]>max)	//comapares every element with max variable 
          max=test[i];	//max variable stores maximum value till ith iteration
	}
	return max;
}

//finding minimum value of given array data 
unsigned char find_minimum(unsigned char *test,unsigned char size)
{
	unsigned char i=0;
	unsigned char min=test[0];

	if(test==NULL){
	return 0;
	}

	for(i=0;i<size;i++)
	{	
	  if(test[i]<min)	//compares and finds new minimum 
	  min=test[i];	//most minimum value is assigned to min variable
	}
	return min;
}

//Sorting the array elements large to small values
void sort_array(unsigned char *test,unsigned char size)
{
//using two indexed values i and j sorting of array wth largest element being at oth position is done
	unsigned char i=0,j=0,temp=0;


	for(i=0;i<size;i++)
	{
	  for(j=0;j<size-1;j++)
	  {
             if(test[j]<test[j+1])
 	     {
		temp=test[j];	//One of the swapping values stored in temp
		test[j]=test[j+1];
		test[j+1]=temp;
	     }
	  }
	}
}

