
#include "header.h"

int main()
{
    int i,j;
    GA_struct *pop,*betapop;
    pop=calloc(POPSIZE,sizeof(GA_struct));
    betapop=calloc(POPSIZE,sizeof(GA_struct));
    printf("Before initialization , population is : \n");
    for(i=0;i<POPSIZE;i++)
    {
        pop[i].path=calloc(NOC,sizeof(int));
        printf("\n\n Individual %d is \t",(i+1));
        for(j=0;j<NOC;j++)
        {
            printf("%d\t",pop[i].path[j]);
        }
    }
    init_pop(pop,betapop);
    printf("After initialization , population is : \n");
    for(i=0;i<POPSIZE;i++)
    {

        printf("\n\n Individual %d is \t",i+1);
        for(j=0;j<NOC;j++)
        {
            printf("%d\t",pop[i].path[j]);
        }
    }
    mutation(pop);
    printf("After mutation , population is : \n");
    for(i=0;i<POPSIZE;i++)
    {

        printf("\n\n Individual %d is \t",i+1);
        for(j=0;j<NOC;j++)
        {
            printf("%d\t",pop[i].path[j]);
        }
    }

    return 0;
}
