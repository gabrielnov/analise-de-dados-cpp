#ifndef __MENU_H__
#define __MENU_H__

#include <iostream>
#include <stdlib.h>
#include "books.h"
#include "file_manager.h"
#include "linked_list.h"
#include "input.h"

void menu(LinkedList* ll);
Book* readData();
void printMenu();
bool readOption(char opt, LinkedList* ll, bool* fileRead);
bool validate(std::string* data);

#endif
