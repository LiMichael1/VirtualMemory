#pragma once
#include "Page.h"
struct Frame
{
public:
    Frame();
    ~Frame();

    char Fbytes[256];


    void setFrame(Page p);

};

