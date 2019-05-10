#pragma once
#include"Word.h"
struct Page
{
public:
    Page();
    ~Page();

	Word frameNum;
	bool valid = false;
	unsigned int accessCount;
};

