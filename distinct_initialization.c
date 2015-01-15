/*during initialization , this function makes sure that each element of a population , i.e , each node of a path is distinct */


#include "header.h"

void distinc_init(int *p , int *q , int j)
    {
        int k,cnt=0;
        int x=rand()%NOC;
        for(k=0;k<j;k++)
        {
            if(q[x]==p[k])
            {
                cnt++;
            }
        }
        if(cnt==0)
        {
            p[j]=q[x];
        }
        else
        {
            distinc_init(p,q,j);
        }
    }
