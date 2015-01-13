/*
 * This file contains utilities function whose implementation details
 * are insignificant to the actual algorithm
 *
 * To be included in the main file
 */
#include "definitons.h"

// Initialize a population with a random permutation of the string
void initialize (ga_struc * pop) {
    /*
     * Note : Current implementation just perfroms swaps after assigning
     *        a initial sequence of string
     */

    int * seq = malloc(sizeof(int)*(NOCITY));

    int i = 0;
    for( i ; i < NOCITY ; i++ )
        seq[i]=i;

    int randx, randy;
    for(i = 0 ; i < NO_INIT_SWAP ; i++) {

        pop[i].path = malloc( sizeof(int) * (NOCITY));
        randx = random() % NOCITY;
        randy = random() % NOCITY;

        swap ( seq[randx] , seq[randy]);
        // DELETE : Implemented in Kabdals code
        for(j=0 ; j< NOCITY ; j++) {
            pop[i].path[j] = seq[j] ;
        }
     }
}
