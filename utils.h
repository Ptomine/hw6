#ifndef H_UUTILS
#define H_UUTILS

#include <vector>

#include "figures.h"

std::vector<Figure*> vectorFromFile(const char* const path);
void deAllocVector(std::vector<Figure*>& vect);

#endif