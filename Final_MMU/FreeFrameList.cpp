#include "FreeFrameList.h"



FreeFrameList::FreeFrameList()
{
    std::memset(&freeFrames_, 0, 10000 * sizeof(bool));
}


FreeFrameList::~FreeFrameList()
{
}
