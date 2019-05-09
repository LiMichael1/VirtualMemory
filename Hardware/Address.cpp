#include "Address_.h"


Word Address::address()
{
	return this._value;
}

void Address::address(int& x)
{
	this.uint32(x);
}

/****************************************************
bit mask 0000 0000 1111 1111  = 255

return page index

****************************************************/

Word Address::displacement() {
    Word temp;
    temp.value_ = this->value_ & 255;
    return temp;
}
void Address::displacement(int x )
{
	this.uint32(this.page().unint() << 8) + (disp&255);
}


/*************************************************
Get Frame num from physical addr 

*************************************************/


Word Address::frame(Page p) {
    
}
void Address::frame(int x)
{
	
}



/****************************************************
bit mask 1111 1111 0000 0000 = 65280

shift right 8 times

return page number

****************************************************/
Word Address::page() {
	Word temp;
	temp.value_ = (this.value_ >> 8) & 255;
    return temp;
}

	void Address::page(int x)
{
    x = x >> 8;
    x = x & 255;
    x = x << 8;

    x += uint32() & 255;

    this.uint32(x);
}

