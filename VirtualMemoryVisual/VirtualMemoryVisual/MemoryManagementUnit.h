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
	void tblFaults();

private:
	MemoryManagementUnit();
	int page_access_count_;

	struct PageFault
	{
		PageFault();
		Word_ pagenumber_;
	};
};

