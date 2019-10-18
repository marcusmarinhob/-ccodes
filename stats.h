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
 * @file <stats.h> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Marcus Marinho>
 * @date <2019-10-18>
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Declarations and Function Comments */ 


/**
 * @brief Prints the statistics of an array
 *
 * A function that prints the statistics of an array including minimum, maximum, mean, and median.
 *
 * @param data Pointer of an array of unsigned chars containing the numbers for statics calculus.
 * @param length Lenght of the array addressed by data *
 * 
 * @return N/A
 */
  void print_statistics( unsigned char * data, unsigned int length );


 /**
 * @brief Prints the array to the screen
 *
 * Given an array of data and a length, prints the array to the screen.
 * 
 * @param data Pointer of an array of unsigned chars containing the numbers for statics calculus.
 * @param length Lenght of the array addressed by data *
 *
 * @return N/A
 */
void print_array( unsigned char * data, unsigned int length );

 /**
 * @brief Calcs the median value of the array
 *
 * Given an array of data and a length, returns the median value.
 * 
 * @param data Pointer of an array of unsigned chars containing the numbers for statics calculus.
 * @param length Lenght of the array addressed by data *
 *
 * @return media The median value of the array
 */
int find_median( unsigned char * data, unsigned int length );

 /**
 * @brief Calcs the mean value of the array
 *
 * Given an array of data and a length, returns the mean.
 * 
 * @param data Pointer of an array of unsigned chars containing the numbers for statics calculus.
 * @param length Lenght of the array addressed by data *
 *
 * @return mean The mean value of the array
 */
int find_mean( unsigned char * data, unsigned int length ); 

 /**
 * @brief Calcs the maximum value of the array
 *
 * Given an array of data and a length, returns the maximum.
 * 
 * @param data Pointer of an array of unsigned chars containing the numbers for statics calculus.
 * @param length Lenght of the array addressed by data *
 *
 * @return maximum The maximum value of the array
 */
int find_maximum(unsigned char * data, unsigned int length);

 /**
 * @brief Calcs the minimum value of the array
 *
 * Given an array of data and a length, returns the minimum.
 * 
 * @param data Pointer of an array of unsigned chars containing the numbers for statics calculus.
 * @param length Lenght of the array addressed by data *
 *
 * @return minimum The mean value of the array
 */
int find_minimum(unsigned char * data, unsigned int length);


/**
 * @brief Sorts the array from largest to smallest
 *
 * Given an array of data and a length, sorts the array from largest to smallest. 
 * (The zeroth Element should be the largest value, and the last element (n-1) should be the smallest value. )
 * 
 * @param data Pointer of an array of unsigned chars containing the numbers for statics calculus.
 * @param length Lenght of the array addressed by data *
 *
 * @return N/A
 */
void sort_array( unsigned char * data, unsigned int length );

#endif /* __STATS_H__ */
