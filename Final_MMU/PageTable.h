#pragma once
#include "Word.h"
#include "Address.h"
struct PageTable
{
public:
    PageTable();
    ~PageTable();

    Word frameNum[256];
    Word getFrame(Address p);
    void setFrame(int y, Word x);
};

