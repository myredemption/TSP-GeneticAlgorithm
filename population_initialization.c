/* this function initializes a population */

#include "header.h"


void init_pop(GA_struct *pop , GA_struct *betapop)
    {
        int c;
        for(c=0 ; c<NOC ; c++)
        {
            BIN_ELEMENTS[c]=(c+1);
        }

        int i,j;
        for(i=0 ; i<POPSIZE ; i++)
        {
            pop[i].path=calloc(NOC,sizeof(int));
            for(j=0;j<NOC;j++)
            {
                distinc_init(pop[i].path,BIN_ELEMENTS,j);

            }
        }
        for(i=0 ; i<POPSIZE ; i++)
        {
            betapop[i].path=calloc(NOC,sizeof(int));
            for(j=0;j<NOC;j++)
            {

                betapop[i].path[j]=BIN_ELEMENTS[rand()%NOC];
            }
        }
    }
