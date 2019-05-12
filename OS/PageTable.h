#pragma once
#include "Word.h"
#include "Address.h"

struct Page
{
	unsigned int frameNumber;
	bool valid;
	unsigned int access_count; 
	
	Paga() : frameNumber(0) , access_count(0), valid(false) {} 
};

class PageTable
{
public:
    PageTable();


   	Page pageList[256];
    Word getFrame(Address p);
    bool searchFrame(unsigned int );


};