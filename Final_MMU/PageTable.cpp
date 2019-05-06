#include "PageTable.h"



PageTable::PageTable()
{
}


PageTable::~PageTable()
{
}

Word PageTable::getFrame(Address p)
{
    return frameNum[ p.page().uint32() ];
}

void PageTable::setFrame(int y, Word x)
{
    frameNum[y] = x;
}
