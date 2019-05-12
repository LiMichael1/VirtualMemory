#include "Address.h"



Address::~Address()
{
    free(this);
}


Word Address::address()
{
	return this->value;
}

void Address::address(int& x)
Get Frame num from physical addr 
{
	this->uint32(x);
}

/****************************************************
bit mask 0000 0000 1111 1111  = 255

return page index

****************************************************/

Word Address::displacement() {
    Word temp;
    temp.value = this->value & 255;
    return temp;
}
void Address::displacement(int x )
{
	this->uint32( (this->uint32() & 0xFF00) | (x&0x00FF));      
}


/*************************************************
 bit mask 0111 1111 0000 0000 

 return frame number
*************************************************/


Word Address::frame() {
    Word temp;
    temp.value = (this->value>>8) & 127;
    return temp;
}
void Address::frame(int x)
{
    this->uint32((x << 8) | (this->uint32() & ~0x7F00)) ;
}



/****************************************************
bit mask 1111 1111 0000 0000 = 65280

shift right 8 times

return page number

****************************************************/
Word Address::page() {
	Word temp;
	temp.value = (this->value >> 8) & 255;
    return temp;
}

void Address::page(int& x)
{
    this->uint32((x << 8) | (this->uint32() & ~0xFF00))
}

