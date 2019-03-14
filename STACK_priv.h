/****************************************************************/
/*   Author             :    Ahmed Abo Elnour 				    */
/*	 Date 				:    10 March 2019 						*/
/*	 Version 			:    1.0V 							 	*/
/*	 Description 		:    Stack priv [priv.h] contain stack  */
/*                           definition                 		*/
/****************************************************************/


/****************************************************************/
/* Description   : Gaurd to protect this File from include more */
/*                 than one time .                              */
/****************************************************************/

#ifndef _STACK_PRIV_H_
#define _STACK_PRIV_H_

/***************************************************************/
/** !comment : redefine new aliase Datatype for data stored in */
/**            Stack                                           */
/***************************************************************/

typedef TYPE_OF_DATA_STORED_ON_STACK StackEntry ;

/*****************************************************************/
/*!comment :Define Encabsulated Data type [ Stack ] it is Struct**/
/*          contain u8 for stack pointer (index) and array for  **/
/*          generic type of data user defined in configuration  **/
/*			file 												**/
/*****************************************************************/

typedef struct stack 
{
   /** top simulate stack pointer refer to first place will push  */
	u8 top ; 
	
   /** StackData is container for data which type generic for user */
	StackEntry StackData [ MAXSTACK ] ;
	
}Stack ; /** Stack  is new Data type */


#endif /** !comment  :  End of gaurd                            **/
