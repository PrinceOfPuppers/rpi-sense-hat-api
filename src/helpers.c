#include "helpers.h"
#include <stdio.h>


int primes[5] = {1,2,3,5,7};

int smallHash(char * str){
    int sum = 0;
    int i=0;
    while(str[i] != '\0'){
        sum+=primes[i]*str[i];
        i++;
    }
    return sum;

}

uint16_t rgbIntToHex(uint16_t r, uint16_t g, uint16_t b){

    r = r << 11;

    printf("%x %i\n",b,b);
    g = g << 5;
    printf("%i %x\n",r|g|b,r|g|b);
    return r|g|b;
}
uint16_t rgbFloatToHex(float r, float g, float b){
    return rgbIntToHex((uint16_t)(r*31),(uint16_t)(g*63),(uint16_t)(b*31));
}


