#ifndef __INPUT_H__
#define __INPUT_H__
#include <string>
#include "books.h"
#include <regex>
#include "node_ll.h"
#include "linked_list.h"

bool input(Book* b, LinkedList* ll);
bool validString(std::string s);
bool validYear(std::string s);
bool validEdition(std::string s);
bool validBool(std::string s);
bool validIsbn(std::string s, LinkedList* ll);;

#endif
