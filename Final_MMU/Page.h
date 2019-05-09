#pragma once
#include"Word.h"
struct Page
{
public:
    Page();
    ~Page();



	Word frameNum;
    char Pbytes[256];
	bool valid = true;
	unsigned int accessCount = 0;
};

