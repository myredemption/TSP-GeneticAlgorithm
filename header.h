#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

    #include <stdio.h>
    #include <stdlib.h>
    #include <time.h>
    #include <string.h>

    #define NOC       5
    #define POPSIZE   10
    #define NS        5

    int BIN_ELEMENTS[NOC];


    typedef struct
    {

        int *path;
        double distance;
    }GA_struct;

#endif // HEADER_H_INCLUDED
