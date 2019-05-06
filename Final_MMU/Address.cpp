#include "Address.h"



Address::Address()
{
}


Address::~Address()
{
}

Word Address::address()
{
    return Word();
}

void Address::address(int x)
{
    uint32(x);
}

/**********************************************
create word
initialize disp
return word
**********************************************/
Word Address::displacement()
{
    Word disp; // create word
    disp.uint32(uint32() & 255); // initialize disp
    return disp; // return word with disp;
}

/**********************************************
  set displacemnt in Address object
  shift page # left 8 bits
  add low 8 bits (aka index)
  do not change page#
**********************************************/
void Address::displacement(int x)
{
    uint32((page().uint32() << 8 )+(x&255));
}

Word Address::frame()
{
    return Word();
}

void Address::frame(int x)
{
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
    page.uint32((uint32() >> 8) & 255);
    return Word();
}

void Address::page(int x)
{
    x >> 8;
    x & 255;
    x << 8;

    x += uint32() & 255;

    uint32(x);
}
