#include <stdio.h>
#include "../include/Header.h"

#define S_OK (0)
#define E_FAIL (-1)


/* ************************************************
	simple test cases for the library functions 
   ************************************************
*/

int test_compare_date_func(){
	char* err_mess=NULL;
	if(compare_date("12-12-2012","12-12-2012",&err_mess)==0 &&err_mess==NULL){
		return S_OK;
	}
	return E_FAIL;
}

/*   test cases for op_mul() function  */
/*int test_mul() {
	if (op_mul(3,4) != (3*4)) 
		return E_FAIL;
	return S_OK;
}*/

/* 	************************************************
	this is a simple test suite.  
	normally you would run cppUnit or some other 
	more general purpose test framework.
*/
int run_tests() {

	if (E_FAIL==test_compare_date_func()){
		printf("failed test_compare_date()\n");
		return E_FAIL;
	}


	/*if (E_FAIL == test_mul()){
			printf("failed test_mul()\n");
			return E_FAIL;
		}

	return S_OK;*/
}


/* 
	This main function only runs all the test code.
    If successful it returns S_OK which is equal to the numerical value of 0.
 	Any other value is considered a failure.
 	
 */
int main()
{
	int result;
	
	printf("Running Example tests .. \n");
	result = run_tests();

	if (result == S_OK) 
		printf ("tests passed.\n");
	else
		printf ("tests failed.\n");

    return result;  /* remember the value 0 is considered passing in a travis-ci sense */

}