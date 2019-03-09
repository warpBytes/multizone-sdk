/* Copyright(C) 2018 Hex Five Security, Inc. - All rights reserved */
#include <libhexfive.h>

int main(int argc, char *argv[]){
    volatile int i;

    for (i = 0; i < 1e6; i++) {

    }

    asm volatile ("li a0, 0x1; lw a0, (a0)");

    while (1)
    {
        ECALL_YIELD();
    }

    return 0;
}
