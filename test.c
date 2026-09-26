// @BAKE gcc -o $*.out $@ -std=c23 -Wall -Wpedantic
#include "XXX.h"

signed main(void) {
    warn("my-warning");

    XXX;
    XXX();

    die("my-death");

    return 0;
}
