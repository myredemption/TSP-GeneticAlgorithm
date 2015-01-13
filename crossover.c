/*
 *  This file defines cross over function for TSP.
 *  We crossover individuals by selecting a mating partner
 *  for each individual randomly and further selecting an index
 *  on its path string , the remaining part of the string
 *  of the original individual is replaced by the path variable.
 *
 *  define : POPSIZE , NOCITY:
 */

#ifndef __CROSSOVER__
#define __CROSSOVER__

void crossover( ga_struct * pop) {

    int ind,par,index ,tocopy,i ,j;
    for(ind=0 ; ind<POPSIZE ; ind++) {

        par = rand()%POPSIZE;
        index = rand()%NOCITY;
        tocopy=index;

        for(i = 0 ; i < NOCITY ; i++) {
            // copy the cities to the second part starting from
            // the start of the partner
            for(j=0 ; j < index+i ; j++ )
                if( ind[j] == par[i])
                    break;

            // This means the element is not there and is to be copied
            if( j == index + i) {
                ind[tocopy] = par[i];
                tocopy++;
            }
        }
    }
}
#endif
