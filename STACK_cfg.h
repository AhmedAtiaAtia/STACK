/****************************************************************/
/*   Author             :    Ahmed Abo Elnour 				    */
/*	 Date 				:    10 March 2019 						*/
/*	 Version 			:    1.0V 							 	*/
/*	 Description 		:   contain Stack size and type of      */
/*                          stored data   [config.h]            */
/****************************************************************/



/****************************************************************/
/* Description   : Gaurd to protect this File from include more */
/*                 than one time .                              */
/****************************************************************/

#ifndef _STACK_CFG_H_
#define _STACK_CFG_H_

/*****************************************************************/
/** please Enter Number to determine MAX Size For Stack         **/
/*****************************************************************/

#define MAXSTACK   10 

/*****************************************************************/
/** Please Enter type of Data stored on Stack                    */
/** input Values may be [ u8 , u16 , u32 , s8 , s16 , s32 ]      */
/*****************************************************************/

#define TYPE_OF_DATA_STORED_ON_STACK           u8  

              

#endif /** end of gaurd 									   **/

