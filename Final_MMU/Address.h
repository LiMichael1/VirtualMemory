#pragma once
#include "Word.h"
#include <iostream>
#include <fstream>

#define mHigh(x) (x & 0xFF00)
#define mLow(x) (x & 0x00FF)
#define mFrame(x) (x & 0x7F00)
#define mAddress(x) (x & 0xFFFF)

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

	Address operator >>(int x);


	friend std::ifstream& operator >>(std::ifstream& fin, Address& x) {
		fin >> x.value;
	};
    
};
