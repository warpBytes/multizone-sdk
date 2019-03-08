/* Copyright(C) 2018 Hex Five Security, Inc. - All Rights Reserved */
#include <fcntl.h>
#include <stdio.h>

#include <libhexfive.h>

static const char welcome_msg[] =
	"\e[2J\e[H" // clear terminal screen
	"======================================================================\r\n"
	"     	                 FreeRTOS Kernel V10.1.1\r\n"
	"     	   LEDs and Robot Control with Command-line interface\r\n"
	"======================================================================\r\n"
;

int main(void)
{
    open("UART", 0, 0);
    while (!ECALL_SEND(2, welcome_msg)) {
        ECALL_YIELD();
    }
    printf("Sent message to zone 2\n");
    while (!ECALL_SEND(2, &welcome_msg[16])) {
        ECALL_YIELD();
    }
    printf("Sent message to zone 2\n");

    while (1) {
        ECALL_YIELD();
    }
}
