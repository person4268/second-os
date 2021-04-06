#ifndef FRAMEBUFFER_H
#define FRAMEBUFFER_H

#include "common.h"

// Write a single character out to the screen.
void fb_put(char c);

// Clear the screen to all black.
void fb_clear();

// Output a null-terminated ASCII string to the monitor.
void fb_write(char *c);

void fb_write_hex(u32int n);
void fb_write_dec(u32int n);

#endif
