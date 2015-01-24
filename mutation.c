/* this function mutates a particular individual of a population making use of swap function */

#include "definitions.h"`

void mutation(GA_struct *pop){

    int a , b , k , i;

    for(i=0 ; i<POPSIZE ; i++){ // POPSIZE to be defined in header file as a preprocessor constant

        for(k=0 ; k<NS ; k++){  // NS to be defined in header file as a preprocessor constant

            a=(rand()%NOC);     // NOC to be defined in header file as a preprocessor constant
            b=(rand()%NOC);     // here we access random cities in a given path and swap them
            swap((pop[i].path)+a , (pop[i].path)+b);
        }
    }
}
