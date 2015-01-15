/* this function swaps values of pointed by two pointers  */

#include "header.h"

swap(int *p1 , int *p2)
{
    int temp;
    temp=*p1;
    (*p1)=(*p2);
    *p2=temp;
}
