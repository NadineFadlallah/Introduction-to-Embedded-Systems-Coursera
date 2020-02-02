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
  /* Statistics and Printing Functions Go Here */
  
  print_array(test, SIZE);
  
  //printf("The mean of the array = %f\n\n", find_mean(test, SIZE));

  //sort_array(test, SIZE);

  //print_array(test, SIZE);

  //printf("The minimum element = %d\n\n", find_minimum(test, SIZE));
  
  //printf("The maximum element = %d\n\n", find_maximum(test, SIZE));

  //printf("The median value = %f\n\n", find_median(test, SIZE));
  
  print_statistics(test, SIZE);

}

/* Add other Implementation File Code Here */

void print_array(unsigned char arr[], int arr_size)
 {

  int i;	

  for(i = 0; i < arr_size; i++)
  {

   printf("element no.: %d = %d\n\n", i, arr[i]);

 }

}


float find_mean(unsigned char arr[], int arr_size)
{
   
  float mean = 0.0;
  int i = 0;

  for(i = 0; i < arr_size; i++)
 {

  mean += arr[i];

 }

 mean /= arr_size;

 return mean;
}

void sort_array(unsigned char arr[], int arr_size)
{
   int i, j, temp, max_index ;

   for(i = 0; i < arr_size; i++)
   {
     max_index = i;
     
     for(j = i+1; j < arr_size; j++)
     {
      
      if(arr[j] > arr[max_index])
      {
       
       temp = arr[max_index];
       arr[max_index] = arr[j];
       arr[j] = temp;

       }

      }
   
    }
}

unsigned char find_minimum(unsigned char arr[], int arr_size)
{
  
  sort_array(arr, arr_size);

  return arr[arr_size - 1];

}

unsigned char find_maximum(unsigned char arr[], int arr_size)
{
  
  sort_array(arr, arr_size);

  return arr[0];

}

float find_median(unsigned char arr[], int arr_size)
{

  sort_array(arr, arr_size);

  if(arr_size % 2 != 0)
     return arr[arr_size / 2];

  float median = (arr[arr_size / 2] + arr[(arr_size/2) - 1])/2;
  return median;
 
}

void print_statistics(unsigned char arr[], int arr_size)
{

  unsigned char min = find_minimum(arr, arr_size);
  unsigned char max = find_maximum(arr, arr_size);
  float mean = find_mean(arr, arr_size);
  float median = find_median(arr, arr_size);

  printf("Minimum \t Maximum \t Mean \t\t\t Median \n\n");

  printf("%d \t\t %d \t\t %f \t\t %f\n", min, max, mean, median);

}
 
     
