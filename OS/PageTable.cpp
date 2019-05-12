
#include "PageTable.h"



PageTable::PageTable()
{

}



Word PageTable::getFrame(Address p)
{
	pageList(p.page().uint32()).access_count++;
    return frameNum[ p.page().uint32() ];
}

void PageTable::setFrame(int pt_index, Word data)
{

    pageList[pt_index] = data;
    
}

bool PageTable::SearchFrame(unsigned int frame, unsigned int& index)
{
	for (int i =0 ; i < 128 ; i ++)
	{
		if(pageList[i].frameNumber == frame && pageList[i].valid == true)
		{
			index = i;
			return true;
		}
	}
	return false;
}