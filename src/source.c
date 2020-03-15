#include "../include/Header.h"
//dd-mm-yyyy

int main()
{
 char* err_mess=NULL;
 char* date1 = "08-04-2018";
 char* date2 = "08-04-2018";
 int i=compare_date(date1, date2, &err_mess);
 printf("%d, %s\n", i, err_mess);
 return 0;
}