#pragma once
#include "Address_.h"

// "Word_.h"



class MemoryManagementUnit
{
public:
	MemoryManagementUnit();
	~MemoryManagementUnit();

	void clearTLB();
	MemoryManagementUnit& instance();
	MemoryManagementUnit();
	MemoryManagementUnit& operator =(MemoryManagementUnit bob);
	void pageAccess();
	void pageFaults();
	//void read<T>();
	void tlbAccess();
	void tlbFaults();

private:
	MemoryManagementUnit();
	unsigned int page_access_count_;
	unsigned int page_faults_;
	unsigned int tlb_access_count_;
	unsigned int tlb_faults_;
	

	struct PageFault
	{
		PageFault();
		Word_ pagenumber_;
	} pageF;
};

