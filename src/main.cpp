#include "linked_list.h"
#include "file_manager.h"
#include "iostream"

int main(){
    LinkedList* ll = new LinkedList();

    readFile(ll);
	
	ll->print();
	
	ll = nullptr;	
    return 0;
}
