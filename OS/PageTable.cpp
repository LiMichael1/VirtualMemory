
#include "PageTable.h"



PageTable::PageTable()
{
	access_count = 0;
	for (int i =0 ; i < 256; i++)
	{
		pt[i].frameNUm = 0; 
		pt[i].valid = false;
		pt[i].access = 0;
	}
}

Word PageTable::getFrame(Address logical)
{
	pt(logical.page().uint32()).access_count++;
    return this->pt[ p.page().uint32() ];
}


//data == framenum
void PageTable::setFrame(int pt_index, Word data)
{

    pt[pt_index] = data;
}
