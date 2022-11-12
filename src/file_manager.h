#ifndef __FILE_MANAGER_H__
#define __FILE_MANAGER_H__

#include "linked_list.h"
#include <stdio.h>
#include <string.h>

#include <fstream>
#include <iostream>
#include "books.h"

const int MAX = 80;
const std::string FILE_PATH = "bibliografia.csv";

void readFile(LinkedList *ll);
void saveFile();
void substring(std::string s, std::string* v);

#endif
