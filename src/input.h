#ifndef __INPUT_H__
#define __INPUT_H__
#include <string>
#include "books.h"
#include <regex>

void input(Book* b);
bool validString(std::string s);
bool validYear(std::string s);
bool validEdition(std::string s);
bool validBool(std::string s);

#endif
