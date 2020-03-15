#include "../include/Header.h"

int compare_date(const char* a, const char* b, char** err_mess)
{
 if (strlen(a)!=10 || strlen(b) != 10)
  *err_mess = "date size isn't valid";
 if(a[2]!='-'||a[5]!='-'|| b[2] != '-' || b[5] != '-')
  *err_mess = "date format isn't valid";
 
 for (int i = 6; i < 11; i++) {
  if (a[i] < b[i])
   return -1;
  if (a[i] > b[i])
   return 1;
 }

 for (int i = 3; i < 5; i++) {
  if (a[i] < b[i])
   return -1;
  if (a[i] > b[i])
   return 1;
 }

 for (int i = 0; i < 2; i++) {
  if (a[i] < b[i])
   return -1;
  if (a[i] > b[i])
   return 1;
 }
 return 0;
}