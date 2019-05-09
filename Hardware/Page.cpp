#include "Page.h"



Page::Page()
{
	valid = true;
}


Page::~Page()
{
}

Page &Page::getPage()
{
    return *this;
}