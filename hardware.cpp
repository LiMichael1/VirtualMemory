#include <iostream>


class BackingStore
{
	private:
		//

	public:
		BackingStore();
		~BackingStore();
		//instance();
		//BackingStore operator=


};



class Ram
{
	private:
		Struct Status
		{
			bool accessed;
			bool dirty;
		};
		Status status;
		
	public:	

};

struct Word
{
	public:
		Word(int x) : _value(x) {};
		int uint32();
		uint32_t _value;

};

int Word::uint32()
{
	return this->_value;
}


struct Address : public Word
{
	Word address();
	Word displacement();
	Word frame();
	Word page();

};

Word Address::address()
{
	return this->_value;
}

/****************************************************
bit mask 0000 0000 1111 1111  = 255

return page index

****************************************************/

Word Address::displacement() {
	return this->_value & 255;
}


/*************************************************
return location in physical memory


*************************************************/


Word Address::frame() {
	
}
 


/****************************************************
bit mask 1111 1111 0000 0000 = 65280

shift right 8 times

return page number

****************************************************/
Word Address::page() {
	return (this->_value & 65280) >> 8;
}

class MemoryManagementUnit
{
	public:
		void clearTLB();
		MemoryManagementUnit& instance();
		MemoryManagementUnit();
		MemoryManagementUnit& operator =();
		void pageAccess();
		void pageFaults();
		//void read<T>();
		void tlbAccess();
		void tblFaults();

	private:
		MemoryManagementUnit();
		int page_access_count_;


		struct PageFault
		{
			PageFault();
			Word pagenumber_;
		};

};


