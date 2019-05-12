#pragma once
#include "Address_.h"

// "Word_.h"

struct TLB 
{
	Page log;
	Frame Memory;
}

class MemoryManagementUnit
{
public:
	MemoryManagementUnit();
	
	void clearTLB();
	
	MemoryManagementUnit();
	void pageAccess();
	void pageFaults();
	template<T>
		void read(Address, PageTable, T&);
	void tlbAccess();
	void tlbFaults();
	
	unsigned int page_access_count_;
	unsigned int page_faults_;
	unsigned int tlb_access_count_;
	unsigned int tlb_faults_;

	TLB tlb[16];

	struct PageFault
	{
		PageFault(Address);
		Word pagenumber_;
	} pageF;

	
};

