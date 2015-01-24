
#include "definitions.h"

int test(){

    int i , j;                                     // i and j are loop variables
    GA_struct *pop , *betapop;                     // GA_struct is a genome , to be defined in header file as a structure
    pop=calloc(POPSIZE , sizeof(GA_struct));
    betapop=calloc(POPSIZE , sizeof(GA_struct));   // POPSIZE is size of a population , to be defined in header file as a preprocessor constant
    printf("Before initialization , population is : \n");

    for(i=0 ; i<POPSIZE ; i++){                       // NOC is number of cities in a path , to be defined in header file as a preprocessor constant

        pop[i].path=calloc(NOC , sizeof(int));        // path is a member of a structure which is a pointer to an int
        printf("\n\n Individual %d is \t" , (i+1));

        for(j=0 ; j<NOC ; j++){

            printf("%d\t" , pop[i].path[j]);
        }
    }

    init_pop(pop , betapop);
    printf("After initialization , population is : \n");

    for(i=0 ; i<POPSIZE ; i++){

        printf("\n\n Individual %d is \t",i+1);
        for(j=0 ; j<NOC ; j++){

            printf("%d\t" , pop[i].path[j]);
        }
    }

    mutation(pop);
    printf("After mutation , population is : \n");

    for(i=0 ; i<POPSIZE ; i++){

        printf("\n\n Individual %d is \t" , i+1);
        for(j=0 ; j<NOC ; j++){

            printf("%d\t" , pop[i].path[j]);
        }
    }
    return 0;
}
