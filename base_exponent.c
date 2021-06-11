/*****************************************************************************************************************/
/*						  Exponent Calculator						 */
/*****************************************************************************************************************/

/*
 * Author:          Aly Khan Nuruddin
 * Date:            May 18, 2021
 *
 * Purpose:         This program prompts the user for a base and an exponent, and then computes the base to the
 *                  power of the exponent to three decimal places.
 */

/*****************************************************************************************************************/
 
#define _CRT_SECURE_NO_WARNINGS									// Prohibit the compiler from suggesting secure versions of library functions.

#include <stdio.h>										// Include the standard input and output library in C.
#include <stdlib.h>										// Include the standard library in C.
 
 int main( void )
 {   
	 int count = 1;										// Initialize "count" as a variable that keeps track of each loop iteration.

	 int exponent;										// Define "exponent" as a variable that stores the number of times the base is multiplied.
     
	 float base;										// Define "base" as a variable that stores the value of the number being multiplied.
     float answer;										// Define "answer" as a variable that stores the result of the mathematical operation.
     
     printf( "Enter the value of the base: " );							// Prompt the user to enter the value of the base.
     scanf( "%f", &base );									// Read the value entered by the user and assign it to the variable "base".
     
     while ( base < 0 )										// Define the condition where the user responds with a negative value.
     {
         printf( "\nError: The value of the base cannot be negative!\n" );			// Notify the user that they have entered an invalid input.
         printf( "\nEnter the value of the base: " );						// Prompt the user to re-enter the value of the base.
         scanf( "%f", &base );									// Read the value entered by the user and assign it to the variable "base".
     }
     
	 printf( "\nEnter the value of the exponent: " );					// Prompt the user to enter the value of the exponent.
	 scanf( "%d", &exponent );								// Read the value entered by the user and assign it to the variable "exponent".

	 while (exponent < 0)									// Define the condition where the user responds with a negative value.
	 {
		 printf( "\nError: The value of the exponent cannot be negative!\n" );		// Notify the user that they have entered an invalid input.
		 printf( "\nEnter the value of the exponent: ");				// Prompt the user to re-enter the value of the exponent.
		 scanf( "%d", &exponent );							// Read the value entered by the user and assign it to the variable "exponent".
	 }

     if ( exponent == 0 )									// Define the condition where the user enters '0' for the exponent.
     {
         answer = 1;										// Assign the value of "answer" to be '1'.
     }
     
     else											// Define the condition where the user enters any number other than '0' for the exponent.
     {
         answer = base;										// Assign the "answer" to preliminarily equal the value of "base".
     
         while ( count < exponent )								// Define the condition where the value of "count" is less than the value of the "exponent".
         {   
             answer *= base;									// Assign the value of "answer" to be the product of the previous value of "answer" and "base".
             count++;										// Increment the value of "count" by 1.
         }
     }
     
     printf( "\nAnswer: %f ^ %d = %.3f.", base, exponent, answer);				// Print the value of the "base" raised to the power of the "exponent" to three decimal places.
     
	 system("PAUSE");									// Suspend the execution of the function "main".
	 return 0;										// Terminate the execution of the function "main".
 }
