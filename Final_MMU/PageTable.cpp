#include "PageTable.h"



PageTable::PageTable()
{
}


PageTable::~PageTable()
{
}



void PageTable::setFrame(Word pageP, Word frameF)
{
	pageList[pageP.uint32()].frameNum = frameF;
}
