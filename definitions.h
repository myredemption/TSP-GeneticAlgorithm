
#ifndef __DEFINITIONS__
#define __DEFINITIONS__

#define POPSIZE 10
#define NOCITY  5
#define DIGITS 4
#define NO_INIT_SWAP (NOCITY/2)


/*
 * Note that the char * id tag is used to refer to the city.
 */
typedef struct ga_struct {
    int * path;
    double length;
};

#endif
