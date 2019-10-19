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

  print_array( test, SIZE);
  printf("\n\n");
  print_statistics( test, SIZE);
  printf("\n\n");
  sort_array( test, SIZE);
  print_array( test, SIZE);

  
}

void print_statistics( unsigned char * data, unsigned int length )
{
  printf("Statistics: \n");
  printf("----------------\n");

  printf("mean   : %.3f\n", find_mean ( data, length));
  printf("median : %d\n", find_median ( data, length));
  printf("maximum: %d\n", find_maximum( data, length));
  printf("minimum: %d\n", find_minimum( data, length));

}


void print_array( unsigned char * data, unsigned int length )
{
  int index;
  
  printf("ARRAY[%d] = {\n", length);
  for( index = 0; index < length; index++)
  {
    printf("%d ", data[index]);
  }
  printf("\n}");
}


int find_median( unsigned char * data, unsigned int length )
{
  return 0;
}

float find_mean( unsigned char * data, unsigned int length )
{
  int index;
  float mean = 0;

  for( index = 0; index < length; index ++)
  {
    mean += data[index];
  }
  return (mean/length);
}


int find_maximum(unsigned char * data, unsigned int length)
{
  int index;
  int maximum = data[0];
  
  for( index = 0; index < length; index++ )
  {
     if( data[index] > maximum)
     {
       maximum = data[index];
     } 
  }
  return maximum;
}


int find_minimum(unsigned char * data, unsigned int length)
{
  int index;
  int minimum = data[0];
  
  for( index = 0; index < length; index++ )
  {
     if( data[index] < minimum)
     {
       minimum = data[index];
     } 
  }
  return minimum;
}


void sort_array( unsigned char * data, unsigned int length )
{
  unsigned char aux;
  int i, j;

  for (i = 0; i < length; ++i) 
  {
    for (j = i + 1; j < length; ++j)
    {
      if (data[i] < data[j]) 
      {
        aux =  data[i];
        data[i] = data[j];
        data[j] = aux;
      }
    }
  }
}
