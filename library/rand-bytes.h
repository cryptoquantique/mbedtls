#ifndef RAND_BYTES_H
#define RAND_BYTES_H

#include <stddef.h> // size_t
#include <sys/random.h> // getentropy()
#include "esp_random.h"
//#include <err.h> // errx()

// Fill `buf` with `len` random bytes using `getentropy()`.
//
// Prints an error message to standard error and exits with a non-zero
// error code if `len` random bytes could not be read.
static void rand_bytes(void * const buf, size_t len) {
  uint8_t *u8 = (uint8_t*) buf;
    //int i;
    //for(i=0; i<len; i++) u8[i] = (uint8_t)i;
    esp_fill_random(u8, len);
    return;
}

#endif /* RAND_BYTES_H */
