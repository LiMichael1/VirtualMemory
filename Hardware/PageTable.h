#pragma once
#include "Word.h"
#include "Address.h"

struct Page
{
	unsigned int frameNumber;
	bool valid; 
};

class PageTable
{
public:
    PageTable();
    ~PageTable();

   	Page pt[256];
    Word getFrame(Address p);

    unsigned int access_count;

    //keep count
};