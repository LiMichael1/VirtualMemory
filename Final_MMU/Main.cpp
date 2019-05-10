#include <iostream>
#include <fstream>
#include "PageTable.h"
#include "Ram.h"
#include "MemoryManagementUnit.h"
#include "MemoryManager.h"
#include "Address.h"

static Ram ram;


int main(int argc, char* argv[]) {

	Address logical;
	MemoryManagementUnit MMU;
	MemoryManager MM;
	PageTable pt;
	char data;

	if (argc > 1) {
		std::cerr <<"to manny arguments\n";
		return 1;
	}
	//1 = fifo
	//2 = lru
	if (*argv[1] != '1' && *argv[1] != '2') {

	}

	//open file stream to addresses.txt
	std::ifstream addr;
	addr.open("C:\\Users\\handb\\Desktop\\CPSC 251 Final\\VirtualMemory\\addresses.txt");
	if (!addr) {
		std::cout << "was not able to open addresses.txt\n";
		exit(1);
	}

	while (addr >> logical)
	{
		try {
			MMU.read(pt, logical);
			ram.read(logical, data);
		}
		catch (PageFault x) {
			MM.pageIn(pt, logical);

			ram.read(logical, data);
		}

		std::cout << data << std::endl;
		
	}
    return 0;
}