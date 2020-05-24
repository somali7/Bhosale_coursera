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
 * @brief This file header includes declarations and documentation for the functions from the stats.c file
 *
 * This file introduces the functions used in "stats.c". File stats.c introduces a couple of functions that can analyze an array of unsigned char data items and report analytics on the maximum, minimum, mean, and median of the data set. In addition,reorder the data set from large to small. All statistics are rounded down to the nearest integer. After analysis and sorting is done,prints that data to the screen in nicely formatted presentation.The stats.h header file includes declarations and documentation for the functions from the present file.

 * @author <Somali Bhosale>
 * @date <24/05/2020>
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/**
 * @brief printing all statistics calculated 
 *
 * This function prints the calculated statistics like minimum,maximum,mean,median    
   accepting the parameters in unsigned character format; printing them in received format and 
   return nothing to main function. 
 *
 * @param mean It is of data-type unsigned char repsenting mean value of test array elements
 * @param max  It is of data-type unsigned char repsenting maximum value of test array elements
 * @param min  It is of data-type unsigned char repsenting minimum value of test array elements
 * @param med  It is of data-type unsigned char repsenting median value of test array elements
 *
 * @return void
 */
void print_statistics(unsigned char mean,unsigned char max,unsigned char min,unsigned char med);

/**
 * @brief  Given an array of data and a length, prints the array to the screen
 *
 * This function take inputs as unsigned char pointer *test; here test holding the array address and unsigned char size holding the SIZE of 
   the array. Fuction prints the array data of specified size returning nothing to calling function 
 *
 * @param *test It is pointer of type unsigned char where test is holding the address of parameter array
 * @param size  It is of data type unsigned char representing size of the array
 *
 * @return void
 */
void print_array(unsigned char *test,unsigned char size);

/**
 * @brief   Given an array of data and a length, returns the median value

 * This function take inputs as unsigned char pointer *test; here test holding the sorted array address and unsigned char size holding the 
   SIZE of the array. Fuction finds the median value of the sorted array elements(performing sorting array operation before calling this
   function). Returning calulated median value of array of the format unsigned char. 
 *
 * @param *test It is pointer of type unsigned char where test is holding the address of sorted array
 * @param size  It is of data type unsigned char representing size of the array

 * @return The median of sorted array elements of data-type unsigned char 
 */
unsigned char find_median(unsigned char *test,unsigned char size);

/**
 * @brief   Given an array of data and a length, returns the mean

 * This function take inputs as unsigned char pointer *test; here test holding the array address and unsigned char size holding the 
   SIZE of the array. Fuction finds the mean value of the array elements.Returning calculated mean value of array of the format unsigned char. 
 *
 * @param *test It is pointer of type unsigned char where test is holding the address of parameter array
 * @param size  It is of data type unsigned char representing size of the array

 * @return The mean of array elements of data-type unsigned char 
 */
unsigned char find_mean(unsigned char *test,unsigned char size);

/**
 * @brief   Given an array of data and a length, returns the maximum

 * This function take inputs as unsigned char pointer *test; here test holding the array address and unsigned char size holding the 
   SIZE of the array. Fuction finds the maximum value of the array.Returning calculated maximum value of array of the format unsigned char. 
 *
 * @param *test It is pointer of type unsigned char where test is holding the address of parameter array
 * @param size  It is of data type unsigned char representing size of the array

 * @return The maximum of array elements of data-type unsigned char 
 */
unsigned char find_maximum(unsigned char *test,unsigned char size);

/**
 * @brief   Given an array of data and a length, returns the minimum

 * This function take inputs as unsigned char pointer *test; here test holding the array address and unsigned char size holding the 
   SIZE of the array. Fuction finds the minimum value of the array.Returning calculated minimum value of array of the format unsigned char. 
 *
 * @param *test It is pointer of type unsigned char where test is holding the address of parameter array
 * @param size  It is of data type unsigned char representing size of the array

 * @return The minimum of array elements of data-type unsigned char 
 */
unsigned char find_minimum(unsigned char *test,unsigned char size);


/**
 * @brief  Given an array of data and a length, sorts the array from largest to smallest. (The zeroth Element should be the largest value, and the last element (n-1) should be the smallest value. )

 * This function take inputs as unsigned char pointer *test; here test holding the array address and unsigned char size holding the 
   SIZE of the array. Function sorts the array from largest to smallest returning nothing to calling function.
 *
 * @param *test It is pointer of type unsigned char where test is holding the address of parameter array
 * @param size  It is of data type unsigned char representing size of the array

 * @return void 
 */
void sort_array(unsigned char *test,unsigned char size);

#endif /* __STATS_H__ */
