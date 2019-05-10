#pragma once
#include "Word.h"
#include "Address.h"
#include "Page.h"
struct PageTable //aka Process Control Block
{
public:
    PageTable();
    ~PageTable();

	Page pageList[256];

    void setFrame(Word pageP, Word frameF);
};

