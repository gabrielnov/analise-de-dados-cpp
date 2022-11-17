#include <iostream>
#include <stdlib.h>
#include "books.h"
#include "file_manager.h"
#include "linked_list.h"

void menu(LinkedList* ll);
Book* readData();
void printMenu();
bool readOption(char opt, LinkedList* ll);
bool validate(std::string* data)

bool fileFlag = false;

struct Result{
	std::string fields;
	int size;
};
