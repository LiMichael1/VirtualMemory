#include "Address_.h"


Word_ Address_::address()
{
	return this->_value;
}

void Address::address(int& x)
{
	this.uint32(x);
}

/****************************************************
bit mask 0000 0000 1111 1111  = 255

return page index

****************************************************/

Word_ Address::displacement() {
    Word_ temp
    temp.value_ = this->value_ & 255;
    return temp;
}
void Address::displacement(Word_ & w)
{

}


/*************************************************
Get Frame num from physical addr 

*************************************************/


Word_ Address_::frame() {
	Word_ temp ;
	temp.value_ = (page().value_*256 )+ displacement().value_;
	return Word;
}
void Address::frame(Word_ w)
{
	uint32_t physical = w.value_
}



/****************************************************
bit mask 1111 1111 0000 0000 = 65280

shift right 8 times

return page number

****************************************************/
Word_ Address_::page() {
	Word temp;
	temp.value_ = (this->value_ >> 8) & 255;
    return temp;
}
void Address::page()
{

}
