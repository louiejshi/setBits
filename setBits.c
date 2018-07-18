// C Programming
//
// Returns x with the n bits that begin at position p set to the rightmost n bits of y, leaving the other bits unchanged
//
//  Exercise_2-6
//
//  Created by Louie Shi on 7/16/18.
//  Copyright © 2018 Louie Shi. All rights reserved.
//

#include <stdio.h>
#include <string.h>

#define MAXSIZE 1000

unsigned setbits(unsigned x, int p, int n, unsigned y);

unsigned setbits(unsigned x, int p, int n, unsigned y)
{
    //return (x & (~(~(~0 << n)) << (p - n + 1))) | ((y & (~(~0 << n))) << (p - n + 1));
    return x & ~(~(~0 << n) << (p+1-n)) | ( y & ~(~0<<n)) << (p+1-n);
}

int main(int argc, const char * argv[])
{
    
    printf("%u \n", setbits((unsigned) 42, 4, 2, (unsigned)15));
    
    return 0;
}
