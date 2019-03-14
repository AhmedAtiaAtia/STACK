/****************************************************************/
/*   Author             :    Ahmed Abo Elnour 				    */
/*	 Date 				:    10 March 2019 						*/
/*	 Version 			:    1.0V 							 	*/
/*	 Description 		:   Progam algorithm for Stack [prog.c] */
/****************************************************************/

/****************************************************************/
/*********************** STD LIB DIRECTIVES *********************/
/****************************************************************/

#include "Std_types.h"
#include "LBTY.h"

/****************************************************************/
/*********************** Component DIRECTIVES *******************/
/****************************************************************/

#include "STACK_cfg.h"
#include "STACK_priv.h"
#include "STACK_int.h"


/****************************************************************/
/*********************** Function Implementation  ***************/
/****************************************************************/


/****************************************************************/
/* Description    :  This function used to initialize Stack     */
/*					 Inputs : pointer to stack 					*/
/*					 return : Error Status 						*/
/****************************************************************/

LBTY_tenuErrorStatus STACK_enuInitialize (Stack  * ps_cpy )
{
	
	LBTY_tenuErrorStatus ErrorStat ; 
	
	/***********************************************************/
	/**!comment   :  we need to check on passing parameter     */
	/**              pointer if null return null else  ok      */
	/***********************************************************/
	
	if (ps_cpy != LBTY_NULL )
	{
		
	/***********************************************************/
	/**!comment   :  we initialize Stack  by inialize top    */
	/**              [top indicate to place will push on it] */ 
	/***********************************************************/
		ps_cpy -> top = 0  ;
	
		ErrorStat = LBTY_OK ;
	
	}
	else 
	{
		ErrorStat = LBTY_NULL_POINTER ;
	}
	
	return ErrorStat ; 
}



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

LBTY_tenuErrorStatus STACK_enuPush (StackEntry element_cpy  , Stack * ps_cpy)
{
	LBTY_tenuErrorStatus ErrorStat  ;
	
	/***********************************************************/
	/**!comment   :  we need to check on passing parameter     */
	/**              pointer if null return null else  ok      */
	/***********************************************************/
	
	if ( ps_cpy == LBTY_NULL )
	{
		ErrorStat  = LBTY_NULL_POINTER ;
		
	}
	else 
	{
		
	/***********************************************************/
	/**!comment   :  push data element to last place in stack  */
	/**              and increment position top to the next  */
	/**				 place 									   */
	/***********************************************************/
	
		ps_cpy -> StackData[ps_cpy -> top ] = element_cpy ; 
		
		ps_cpy -> top ++ ; 
	
		ErrorStat = LBTY_OK ;	
	
	}
	
	return ErrorStat ; 
	
}


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

LBTY_tenuErrorStatus STACK_enuIsFull ( Stack * ps_cpy , u8 * pout_cpy)
{
	LBTY_tenuErrorStatus ErrorStatLoc ; 
	
	/************************************************************/
	/** !comment :  check on passing pointers                   */
	/************************************************************/
	
	if (ps_cpy == LBTY_NULL || pout_cpy == LBTY_NULL )
	{
			
			ErrorStatLoc = LBTY_NULL_POINTER ;
			
	}
	else 
	{
		
	/***********************************************************/	
	/** !comment : check if top equal Maxstack size  that is   */
	/**            mean stack is full 					       */
	/***********************************************************/
	
		if  ( ps_cpy -> top  >= MAXSTACK )
		{
						   /************************************/
			*pout_cpy = 1 ; /** mean stack Full                 */
						   /************************************/
		}
		else 
		{				   /************************************/
			*pout_cpy = 0 ; /* mean stack is not full           */
						   /************************************/
		}
		
		ErrorStatLoc = LBTY_OK ; 
		
	}
	
	return ErrorStatLoc ; 
}


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

LBTY_tenuErrorStatus STACK_enuPop( Stack * ps_cpy , StackEntry * pReturnElement_cpy)
{
	
	LBTY_tenuErrorStatus ErrorStatLoc ; 
	
	/************************************************************/
	/** !comment :  check on passing pointers                   */
	/************************************************************/
	
	if (ps_cpy == LBTY_NULL || pReturnElement_cpy == LBTY_NULL )
	{
			
	    ErrorStatLoc = LBTY_NULL_POINTER ;
			
	}
	else 
	{
		/*******************************************************/
		/** !comment  : decrement top to point to last pushed  */
		/**             Data element to returned               */
		/*******************************************************/
		ps_cpy -> top -- ;
		
		
		/*******************************************************/
		/** !comment : return last Data pushed in stack to user*/ 
		/*			   by passing value to passed pointer      */
		/*******************************************************/
		
	    *(pReturnElement_cpy) = ps_cpy -> StackData [ps_cpy->top] ;
	
	
	    ErrorStatLoc = LBTY_OK ; 
	}
	
	return ErrorStatLoc  ;
}


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

LBTY_tenuErrorStatus STACK_enuIsEmpty ( Stack * ps_cpy , u8 * pout_cpy)
{
	LBTY_tenuErrorStatus ErrorStatLoc ; 
	
	/************************************************************/
	/** !comment :  check on passing pointers                   */
	/************************************************************/
	
	if (ps_cpy == LBTY_NULL || pout_cpy == LBTY_NULL )
	{
			
			ErrorStatLoc = LBTY_NULL_POINTER ;
			
	}
	else 
	{
		
	/***********************************************************/	
	/** !comment : check if top equal zero size  that is mean  */
	/**            stack is Empty    					       */
	/***********************************************************/
	
		if  ( ps_cpy -> top  == 0 )
		{
						   /************************************/
			*pout_cpy = 1 ; /** mean stack Empty                */
						   /************************************/
		}
		else 
		{				   /************************************/
			*pout_cpy = 0 ; /* mean stack is not Empty          */
						   /************************************/
		}
		
		ErrorStatLoc = LBTY_OK ; 
		
	}
	
	return ErrorStatLoc ; 
}


/*****************************************************************/
/* Description   : This function used to check on stack data size*/ 					                                       															
/*				   Inputs : pointer to stack 	 ,  			 */
/*   						pointer to Data Size on Stack        */
/*				   Return : Error Status 					     */
/*****************************************************************/
/* Pre_condition  :  this function must be used after stack      */
/*     				 initialized 							     */
/*****************************************************************/

LBTY_tenuErrorStatus Stack_enuSize ( Stack * ps_cpy , u8 * pStackSize_Cpy)
{
	LBTY_tenuErrorStatus ErrorStatLoc ;
		
	/************************************************************/
	/** !comment :  check on passing pointers                   */
	/************************************************************/
	
	if ( ps_cpy == LBTY_NULL || pStackSize_Cpy == LBTY_NULL )
	{										
		ErrorStatLoc = LBTY_NULL_POINTER ;  
		
	}
	else 
	{
			
	/***********************************************************/	
	/** !comment : Return to pStackSize_Cpy  Stack data size by*/ 
	/**            returnning Stack top 					   */
	/***********************************************************/
	
		*(pStackSize_Cpy) = ps_cpy -> top ;
		
		ErrorStatLoc = LBTY_OK ; 
		
	}
	
	return  ErrorStatLoc ;
	
}


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


LBTY_tenuErrorStatus STACK_enuTop (Stack  * ps_cpy , StackEntry * pElement_cpy)
{
	LBTY_tenuErrorStatus ErrorStatLoc ;
	
	/** !comment : check on passing parameter                    */
	
	if (ps_cpy == LBTY_NULL || pElement_cpy == LBTY_NULL )
	{
		
		ErrorStatLoc = LBTY_NULL_POINTER  ; 
		
	}
	else 
	{	/*******************************************************/
		/** !comment:  return Data on stacktop to pElement     */
		/**            without Change top or stack size or data*/   
		/*******************************************************/
		
		 *pElement_cpy = ps_cpy -> StackData [ (ps_cpy -> top )-1 ] ; 
		 
		 ErrorStatLoc = LBTY_OK ;
	}
	
	return ErrorStatLoc ; 
}
/***********************************************************************************************/
/************************************* END OF PROGRAM ******************************************/
/***********************************************************************************************/