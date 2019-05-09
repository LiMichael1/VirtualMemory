#include "PageTable.h"



#include "PageTable.h"



PageTable::PageTable()
{
	access_count = 0;
	for (int i =0 ; i < 256; i++)
	{
		pagetable[i].frameNUm = 0; 
		pagetable[i].valid = false;
	}
}

Word PageTable::getFrame(Address p)
{
	pageList(p.page().uint32()).access_count++;
    return frameNum[ p.page().uint32() ];
}

void PageTable::setFrame(int pt_index, Word data)
{

    pt[pt_index] = data;
}
