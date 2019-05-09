#include "MemoryManagementUnit.h"



MemoryManagementUnit::MemoryManagementUnit()
{
	page_access_count = 0;
	page_faults =0 ;
	tlb_access_count = 0 ;
	lb_faults  = 0;
}


void MemoryManagement::clearTLB()
{
	for( int i =0 ; i<16 ; i++)
	{
		tlb[i].logical.frameNumber = 0;
		tlb[i].logical.valid = true;
		tlb[i].Memory.Fbytes = "";
	}
}

void MemoryManagementUnit::pageAccess(){ return page_access_count; }

void MemoryManagementUnit::pageFaults(){ return page_faults;}

void MemoryManagementUnit::tlbAccess() { return tlb_access_count;}

void MemoryManagementUnit::tlbFaults() { return tlb_faults;}

bool tlb_search(Address& logical)
{
	for(int i =0 ; i < 16; i ++)
	{
		if(TLB[i].logical._value == logical._value)
			return true;
	}
	return false;
}

template<T>
void MemoryManagementUnit::Read(Address& logical, PageTable& pt , T& data)
{
	Frame f;
	if(tlb_search(logical))
	{
		f = TLB[logical.page()._value];
		//ram read
	}
	else if ()
	{
		//check page Table for the logical addr
		//Ram read
	}
	else
	{
		PageFault pf(logical);
		throw pf;
	}
}

//ram reading and adding the frame
//add data for backing store 