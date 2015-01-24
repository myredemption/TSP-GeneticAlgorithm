/* this function initializes a population */

#include "definitions.h"

void init_pop(GA_struct *pop , GA_struct *betapop){

    int c;                                               //variable used for a for loop
    for(c=0 ; c<NOC ; c++){

        BIN_ELEMENTS[c]=(c+1);                           // to be defined in header file as an integer array
    }

    int i , j;  /*variables used for a for loop */
    for(i=0 ; i<POPSIZE ; i++){

        pop[i].path=calloc(NOC,sizeof(int));

        for(j=0 ; j<NOC ; j++){
            distinc_init(pop[i].path , BIN_ELEMENTS,j);  // BIN_ElEMENTS to be initialized as sorted array in ascending order with min
        }                                                // element = 1 and max element = NOC
    }

    for(i=0 ; i<POPSIZE ; i++){

        betapop[i].path=calloc(NOC , sizeof(int));
        for(j=0 ; j<NOC ; j++){

        betapop[i].path[j]=BIN_ELEMENTS[rand()%NOC];
        }
    }
}
