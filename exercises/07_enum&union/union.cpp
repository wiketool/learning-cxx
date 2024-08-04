#include <iostream>

int main(){
    float y = 4;
    long  i = *(long *) &y;                 // evil floating point bit level hacking
    i = 0x5f3759df - (i >> 1);        // what the fuck? 
    y = *(float *) &i;
    std::cout << y << " " << i << std::endl;
}