//
//  main.cpp
//  vermoeden van coltsas
//
//  Created by Tijmen Wildervanck on 06-01-13.
//  Copyright (c) 2013 Het Veldhuis. All rights reserved.
//

#include <stdio.h>



int main ()
{
    unsigned int keren=0;
    //
    unsigned char oneven;
    //scanf("%llu", &getal);
    for (long long unsigned int totaalkeren=1; totaalkeren != 0; totaalkeren++) {
        for (unsigned long long int getal=totaalkeren; getal> 1; ++keren) {
            //printf("getal %d", keren);
            //printf("=%llu\n", getal);
            oneven= getal % 2;
            if (oneven== 1) {
                getal=(getal*3+1);}
            else {
                getal>>=1;}
        }
        printf("getal %lld", totaalkeren);
        printf(": %d", keren=0);
    }
    /*printf("getal %d", ++keren);
    printf("=%llu\n", getal);
    printf("Het duurde %d keer\n", --keren);
    return keren;*/
}


