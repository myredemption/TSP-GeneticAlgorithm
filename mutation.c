/* this function mutates a particular individual of a population making use of swap function */

#include "header.h"`

void mutation(GA_struct *pop)
{
    int a,b,k,i;
    for(i=0;i<POPSIZE;i++)
    {
        for(k=0;k<NS;k++)
        {
            a=(rand()%NOC);
            b=(rand()%NOC);
            swap((pop[i].path)+a,(pop[i].path)+b);

        }
    }
}
