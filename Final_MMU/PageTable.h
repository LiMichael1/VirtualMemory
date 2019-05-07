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

    Page getFrame(Address p);
    void setFrame(Word pageP, Word frameF);
};

