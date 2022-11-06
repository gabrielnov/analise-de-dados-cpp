#include "linked_list.h"
#include "file_manager.h"

int main(){
    LinkedList* ll = new LinkedList();

    readFile(ll);

	ll = nullptr;	
    return 0;
}
