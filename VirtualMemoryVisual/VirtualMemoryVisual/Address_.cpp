#include "Address_.h"

Word_ Address_::address()
{
	return this->_value;
}

/****************************************************
bit mask 0000 0000 1111 1111  = 255

return page index

****************************************************/

Word_ Address_::displacement() {
	return this->_value & 255;
}


/*************************************************
return location in physical memory


*************************************************/


Word_ Address_::frame() {

}



/****************************************************
bit mask 1111 1111 0000 0000 = 65280

shift right 8 times

return page number

****************************************************/
Word_ Address_::page() {
	return (this->_value & 65280) >> 8;
}