/****************************************************************/
/*   Author             :    Ahmed Abo Elnour 				    */
/*	 Date 				:    10 March 2019 						*/
/*	 Version 			:    1.0V 							 	*/
/*	 Description 		:   public Accessing mechanism prototype*/ 
/*							for Stack [int.h] 				    */
/****************************************************************/


/****************************************************************/
/* Description   : Gaurd to protect this File from include more */
/*                 than one time .                              */
/****************************************************************/

#ifndef _STACK_INT_H_
#define _STACK_INT_H_

#include "STACK_cfg.h"
#include "STACK_priv.h"

/****************************************************************/
/* Description    :  This function used to initialize Stack     */
/*					 Inputs : pointer to stack 					*/
/*					 return : Error Status 						*/
/****************************************************************/

LBTY_tenuErrorStatus STACK_enuInitialize (Stack  * ps_cpy ) ;



/****************************************************************/
/* Description    :  This function used to push new element in  */
/*					 stack 										*/
/*					 Inputs : pointer to stack 	 ,  			*/
/*   						  element we need to push 			*/
/*					 return : Error Status 						*/
/****************************************************************/
/* Pre_condition  :  this function must be used after stack     */
/*     				 initialized and check if it is Is not Full */
/*                   we can use it to push 						*/
/****************************************************************/

LBTY_tenuErrorStatus STACK_enuPush (StackEntry element_cpy  , Stack * ps_cpy) ; 

/****************************************************************/
/* Description    : This function used to check if stack is Full*/ 
/*					or not full used befor Push any element.    */
/*					Inputs : pointer to stack 	 ,  			*/
/*   						 pointer to output status 			*/
/*					Return : Error Status 						*/
/****************************************************************/
/* Pre_condition  :  this function must be used after stack     */
/*     				 initialized 							    */
/****************************************************************/

LBTY_tenuErrorStatus STACK_enuIsFull ( Stack * ps_cpy , u8 * pout_cpy)  ; 
 
/****************************************************************/
/* Description   : This function used to pop last element pushed*/
/*				   in stack 							     	*/
/*				   Inputs : pointer to stack 	 ,  			*/
/*   					    pointer to element we need to popped*/			
/*				   Return : Error Status 						*/
/****************************************************************/
/* Pre_condition  :  this function must be used after stack     */
/*     				 initialized and check if it is Is not Empty*/
/*                   we can use it to pop from stack  		    */
/****************************************************************/

LBTY_tenuErrorStatus STACK_enuPop( Stack * ps_cpy , StackEntry * pReturnElement_cpy) ; 


/*****************************************************************/
/* Description    : This function used to check if stack is Empty*/ 
/*					or not Empty used befor pop any element from */
/*                  Stack                                        */
/*					Inputs : pointer to stack 	 ,  			 */
/*   						 pointer to output status 			 */
/*					Return : Error Status 					     */
/*****************************************************************/
/* Pre_condition  :  this function must be used after stack      */
/*     				 initialized 							     */
/*****************************************************************/

LBTY_tenuErrorStatus STACK_enuIsEmpty ( Stack * ps_cpy , u8 * pout_cpy) ;


/*****************************************************************/
/* Description   : This function used to check on stack data size*/ 					                                       															
/*				   Inputs : pointer to stack 	 ,  			 */
/*   						pointer to Data Size on Stack        */
/*				   Return : Error Status 					     */
/*****************************************************************/
/* Pre_condition  :  this function must be used after stack      */
/*     				 initialized 							     */
/*****************************************************************/

LBTY_tenuErrorStatus Stack_enuSize ( Stack * ps_cpy , u8 * pStackSize_Cpy) ; 


/*****************************************************************/
/* Description   : This function used to return Data on stackTop */
/*                 without change Stack Size 					 */ 					                                       															
/*				   Inputs : pointer to stack 	 ,  			 */
/*   						pointer to Data element 			 */
/*				   Return : Error Status 					     */
/*****************************************************************/
/* Pre_condition  :  this function must be used after stack      */
/*     				 initialized 	and Not Empty                */
/*****************************************************************/


LBTY_tenuErrorStatus STACK_enuTop (Stack  * ps_cpy , StackEntry * pElement_cpy) ;



#endif /**!comment : End of the gaurd 							**/