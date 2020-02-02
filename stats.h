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
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Add FirsName LastName>
 * @date <Add date >
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 



/**
 * @brief Print the given date on the screen
 *
 * This function will take an array and its size, 
   and prints its elements on the screen.
 *
 * @param arr The array to be printed.
   @param arr_size The size of the array to be printed.
 *
 *
 * @return No return value.
 */
void print_array(unsigned char arr[], int arr_size);

/**
 * @brief Calculate the mean of a given array of unsigned characters 
 *
 * This function will take an array and its size, 
   and calculates the mean of its elements.
 *
 * @param arr The array of elements which we'll compute the mean
   @param arr_size The size of the given array.
 *
 *
 * @return The mean value.
 */

float find_mean(unsigned char arr[], int arr_size);

/**
 * @brief Sort the given array 
 *
 * This function will take an array and its size, 
   and sort it using selection sort.
 *
 * @param arr The array of elements to be sorted.
   @param arr_size The size of the array to be printed.
 *
 *
 * @return No return value.
 */
void sort_array(unsigned char arr[], int arr_size);

/**
 * @brief Calculate the minimum of a given array
 *
 * This function will take an array and its size, 
   and calculate the minimum element;
 *
 * @param arr The array that we shall find its minimum element.
   @param arr_size The size of the array to be printed.
 *
 *
 * @return The minimum element.
 */
unsigned char find_minimum(unsigned char arr[], int arr_size);

/**
 * @brief Calculate the maximum of a given array
 *
 * This function will take an array and its size, 
   and calculate the minimum element;
 *
 * @param arr The array that we shall find its maximum element.
   @param arr_size The size of the given array.
 *
 *
 * @return The maximum element.
 */

unsigned char find_maximum(unsigned char arr[], int arr_size);

/**
 * @brief Calculate the median of a given array
 *
 * This function will take an array and its size, 
   and calculate the minimum element;
 *
 * @param arr The array we shall calculate its median.
   @param arr_size The size of the given array.
 *
 *
 * @return The median value.
 */

float find_median(unsigned char arr[], int arr_size);

/**
 * @brief Print the statistics of given data
 *
 * This function will take an array and its size, 
   and prints its elements on the screen.
 *
 * @param arr The array we shall print its statistics.
   @param arr_size The size of the given array.
 *
 *
 * @return No return value.
 */
void print_statistics(unsigned char arr[], int arr_size);


#endif /* __STATS_H__ */
