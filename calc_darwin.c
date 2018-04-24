#include <stdio.h>
#include <stdlib.h>

/*
build: gcc -shared -o calc_darwin.so -fPIC calc_darwin.c
*/

static void plugon() __attribute__((constructor));
void plugon() {
    system("open /Applications/Calculator.app");
}
