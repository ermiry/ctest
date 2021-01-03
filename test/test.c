#include <stdlib.h>
#include <stdio.h>

#include "utils.h"

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-parameter"

int main (int argc, char const **argv) {

	(void) printf ("Testing UTILS...\n");

	utils_tests_c_strings ();

	(void) printf ("\nDone with UTILS tests!\n\n");

	return 0;

}

#pragma GCC diagnostic pop