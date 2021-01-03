#include <stdlib.h>
#include <stdio.h>

#include "utils/utils.h"

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-parameter"

extern void collections_tests_htab (void);

int main (int argc, char const **argv) {

	(void) printf ("Testing COLLECTIONS...\n");

	collections_tests_htab ();

	(void) printf ("\nDone with COLLECTIONS tests!\n\n");

	(void) printf ("Testing UTILS...\n");

	utils_tests_c_strings ();

	(void) printf ("\nDone with UTILS tests!\n\n");

	return 0;

}

#pragma GCC diagnostic pop