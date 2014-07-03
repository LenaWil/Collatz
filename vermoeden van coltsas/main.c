//
//  main.cpp
//  vermoeden van coltsas
//
//  Created by Tijmen Wildervanck on 06-01-13.
//  Copyright (c) 2013 Het Veldhuis. All rights reserved.
//

#include <stdio.h>
#include <limits.h>

int main ()
{
    
    unsigned int keren=0;
    unsigned long long int getal;
    //unsigned char oneven;
    printf("\nVoer een getal in(kan maximaal %llu zijn (2^%lu-1), en gebruik geen '.' of '-'):", ULONG_LONG_MAX, (sizeof(unsigned long long int)<<3));
    scanf("%llu", &getal);
    //getal=27;
    
    if (getal==0) {
        printf("geef geen 0 op\n");
        return -1;
    }
    while (getal!= 1) {
        printf("getal %d\t=%llu\n", keren++, getal);
        //oneven= ;
        if ((getal & 1)== 1) {
            if (ULONG_LONG_MAX/3<=getal) {
                printf("getal %d: ?(getal te hoog)\nHet Programma sluit zich nu af", keren++);
                return -2;
            }
            getal=(getal*3+1);}
        else {
            getal>>=1;
    }
    }
    printf("getal %d\t=%llu\nHet duurde %d keer\n", keren, getal, keren);
    return keren;
}


