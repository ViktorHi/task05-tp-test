#include "../include/Header.h"

#define S_OK (0)
#define E_FAIL (-1)


int test_compare_date_func(){

	char* err_mess=NULL;
	int i;
	if(i=com_date("12-12-2012","12-12-2012",&err_mess)==0 && err_mess==NULL){
		return S_OK;
	}
 	printf("%d, %s\n", i, err_mess);
	return E_FAIL;
}

int run_tests() {
	if (E_FAIL==test_compare_date_func()){
		printf("failed test_compare_date()\n");
		return E_FAIL;
	}
	return S_OK;
}

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