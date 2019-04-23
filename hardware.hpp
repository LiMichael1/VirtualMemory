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

class Word
{
	public:
		uint32_t value;

};

class Address: Public Word
{
	
};

class MemoryManagementUnit
{
	private:
	public:
		void clearTLB();

};