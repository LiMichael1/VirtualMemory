#pragma once
#include "Word.h"
#include "Address.h"

struct Page
{
	unsigned int frameNumber;
	bool valid; 
	unsigned int access;
	
};

class PageTable
{
public:
    PageTable();


   	Page pt[256];
    Word getFrame(Address logical);

    unsigned int access_count;
};