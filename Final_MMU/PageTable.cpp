#include "PageTable.h"



PageTable::PageTable()
{
}


PageTable::~PageTable()
{
}

Page PageTable::getFrame(Address p)
{
	pageList[p.page().uint32()].accessCount++;
    return pageList[ p.page().uint32()];
}

void PageTable::setFrame(Word pageP, Word frameF)
{
	pageList[pageP.uint32()].frameNum = frameF;
}
