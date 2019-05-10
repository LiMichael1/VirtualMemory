#include "Address.h"



Address::Address()
{
}


Address::~Address()
{
	free(this);
}

/**********************************************
return the value of the address as a wordd

*********************************************/
Word Address::address()
{
	Word addr;
	addr.uint32(this->uint32());
    return addr;
}

/**************************************************
void address(int x)

takes in an int;
set the address and mask the interger
**********************************************************/

void Address::address(int x)
{
    this->value = mAddress(x);
}

/**********************************************
create word
initialize disp
return word
**********************************************/
Word Address::displacement()
{
    Word disp; // create word
    disp.uint32(mLow(this->uint32())); // initialize disp
    return disp; // return word with disp;
}

/**********************************************
void displacement (int disp)

get value of this object
mask highbits

mask disp get low bits

add low & high

set new value of this object 

**********************************************/
void Address::displacement(int disp)
{
    this->uint32( mHigh(this->uint32())+ mLow(disp));
}

Word Address::frame()
{
	Word frame;
	frame.uint32(mFrame(this->uint32) >> 8);
	return frame;
}

void Address::frame(int x)
{
	this->uint32(mFrame((x << 8)) + mLow(this->uint32()));
}

/**********************************************
create word
initialize page
-shift bits right 8 times
-mask lower 8 bits
return word
**********************************************/
Word Address::page()
{
    Word page;
    page.uint32(mHigh(this->value) >> 8);
    return page;
}

void Address::page(int x)
{

    uint32(mHigh(x) + mLow(this->uint32()));
}
