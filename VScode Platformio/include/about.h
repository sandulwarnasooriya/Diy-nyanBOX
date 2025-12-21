/* ____________________________
   This software is licensed under the MIT License:
   https://github.com/jbohack/nyanBOX
   ________________________________________ */

#ifndef ABOUT_H
#define ABOUT_H

#include <U8g2lib.h>
#include "pindefs.h"

#define NYANBOX_VERSION "v4.13.6"
extern const char* nyanboxVersion;

void aboutSetup();
void aboutLoop();
void aboutCleanup();

#endif