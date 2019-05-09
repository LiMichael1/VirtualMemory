#include <iostream>
#include <fstream>
#include "PageTable.h"
#include "Ram.h"
#include "MemoryManagementUnit.h"
#include "MemoryManager.h"
#include "Address.h"

static Ram;


int main(int argc, char* argv[]) {

	Address addr;

	if (argc > 1) {
		std::cerr <<"to manny arguments\n";
		return 1;
	}
	//1 = fifo
	//2 = lru
	if (*argv[1] != '1' && *argv[1] != '2') {

	}

	std::ifstream addresses;
	addresses.open("C:\\Users\handb\\Desktop\\CPSC 251 Final\\VirtualMemory\\addresses.txt");
	if (!addresses) {
		std::cout << "could not open file\n";
		exit(0);
	}

	while (addresses >> addr) {

	}
    return 0;
}