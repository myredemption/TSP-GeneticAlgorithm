/*during initialization , this function makes sure that each element of a population , i.e , each node of a path is distinct */


#include "definitions.h"

void distinc_init(int *p , int *q , int j){

    int k,cnt=0;
    int x=rand()%NOC;
                                //  NOC is to be defined in header file as a preprocessor constant
    for(k=0 ; k<j ; k++){       // here we access an element (a city) at random location in BINELEMENTS and
                                // check recursively if it is already present in the path of the given
        if(q[x]==p[k]){
                                // individual of a population . If it isnt present , the next city in the path
            cnt++;              // is assigned the value of this element.It makes sure that no city in any path
        }                       // is repeated , ie the path consisrs of distinct cities.
    }

    if(cnt==0){

        p[j]=q[x];
    }
    else{

        distinc_init(p , q , j);
    }
}
