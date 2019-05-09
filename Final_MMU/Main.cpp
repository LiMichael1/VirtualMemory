#include <iostream>
#include <fstream>
#include "PageTable.h"
#include "Ram.h"
#include "MemoryManagementUnit.h"
#include "MemoryManager.h"

static Ram;


int main(int argc, char* argv[]) {

	if (argc > 1) {
		std::cerr <<"to manny arguments\n";
		return 1;
	}
	//1 = fifo
	//2 = lru
	if (*argv[1] != '1' && *argv[1] != '2') {

	}
    return 0;
}