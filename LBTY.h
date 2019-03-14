/****************************************************************/
/*   Author             :    Ahmed Abo Elnour 				    */
/*	 Date 				:    10 March 2019 						*/
/*	 Version 			:    1.0V 							 	*/
/*	 Description 		:    Error Status Lib				    */
/****************************************************************/


/****************************************************************/
/* Description   : Gaurd to protect this lib from include more  */
/*                 than one time .                              */
/****************************************************************/
#ifndef _LBTY_H_
#define _LBTY_H_

typedef enum Error 
{
	LBTY_OK   		  ,
	LBTY_NOK  		  ,
	LBTY_OUT_OF_RANGE ,
	LBTY_NULL_POINTER 
		
}LBTY_tenuErrorStatus ;

#define LBTY_NULL ((void *)0)


#endif /**!comment : end of gaurd */


