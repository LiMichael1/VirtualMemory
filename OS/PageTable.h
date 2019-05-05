#pragma once
#include "Ram.h"
class PageTable
{
public:
	PageTable();
	~PageTable();

private: 
	PageTableEntry pageTable[256];
	unsigned access_count;
	//maybe a queue
};

struct PageTableEntry
{

	unsigned int frameNumber;
	bool valid;
}

struct Frame
{
	char bytes [256];
};