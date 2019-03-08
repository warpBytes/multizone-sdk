/* Copyright(C) 2018 Hex Five Security, Inc. - All rights reserved */
#include <stdio.h>

#include <libhexfive.h>

int test(void)
{
    int i;

    for (i = 0; i < 1e6; i++) {

    }
}

int main(int argc, char *argv[]){
    test();

    printf("pico stack initialized\n");

    while (1)
    {
        ECALL_YIELD();
    }

    return 0;
}
