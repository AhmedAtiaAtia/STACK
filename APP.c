#include <Stdio.h>
#include "Std_types.h"
#include "LBTY.h"
#include "STACK_int.h"


void main (void )
{
	
	/****Draft check */
	Stack s ;
	u8 status ;
	
	STACK_enuInitialize (&s);
	
	STACK_enuIsFull(&s , &status );
	
	if (status == 0)
	{
		STACK_enuPush( 150 ,&s );
		STACK_enuPush( 5 ,&s );
		STACK_enuPush( 50 ,&s );
		
		
	}
	
	STACK_enuPop(&s , &status);
	printf("%d \n", status );
	STACK_enuPop(&s , &status);
	printf("%d \n", status );
	STACK_enuPop(&s , &status);
	printf("%d \n", status );
	STACK_enuPop(&s , &status);
	printf("%d \n", status );
	STACK_enuPop(&s , &status);
	printf("%d \n", status );
	
	
	
}