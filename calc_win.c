#include <stdio.h>
#include <stdlib.h>

/*
build: gcc -shared -o calc_win.so -fPIC calc_win.c
*/

static void plugon() __attribute__((constructor));
void plugon() {
    system("calc");
}
