#pragma once
#include "Word.h"
class Address : Word
{
public:
    Address();
    ~Address();

    Word address();
    void address(int x);

    Word displacement();
    void displacement(int x);

    Word frame();
    void frame(int x);

    Word page();
    void page(int x);
    
};

