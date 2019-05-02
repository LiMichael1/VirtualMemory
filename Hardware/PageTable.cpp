#include "PageTable.h"



PageTable::PageTable()
{
	for( int i = 0 ; i < 256 ; i ++)
	{
		pageTable[i].valid = false;
		pageTables[i].frameNumber = 0;
	}
}


PageTable::~PageTable()
{
	delete []pagetables;
}
