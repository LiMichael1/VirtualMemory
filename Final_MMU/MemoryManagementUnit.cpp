#include "MemoryManagementUnit.h"
///////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////
/*
                 MemoryManagementUnit
*/
///////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////

/********************************************************
MemoryManagementUnit Constructor


********************************************************/
MemoryManagementUnit::MemoryManagementUnit()
{
    page_access_count_ = 
        page_faults_ = 
        tbl_access_count_ = 
        tbl_faults_ = 0;

}


MemoryManagementUnit::~MemoryManagementUnit()
{
}

void MemoryManagementUnit::clearTBL()
{
}

MemoryManagementUnit & MemoryManagementUnit::instance()
{
    return *this;
}

void MemoryManagementUnit::pageAccess()
{
    page_access_count_++;
}

void MemoryManagementUnit::pageFaults()
{
    page_faults_++;
}

void MemoryManagementUnit::tlbAccess()
{
    tbl_access_count_++;
}

void MemoryManagementUnit::tlbFaults()
{
    tbl_faults_++;
}


void MemoryManagementUnit::read(PageTable PTable, Address& Logical) {
	
	for (TLB t : tlb_) {
		if ( t.log.uint32() == Logical.page().uint32()) {
			Logical.frame(t.Phys.uint32()); // match found, set physical address
		}
	}

	if (PTable.pageList[Logical.page().uint32()].valid) { //valid
		Logical.frame( PTable.pageList[Logical.page().uint32()].frameNum.uint32() ); // set physical address
	}
	else { // not valid
		//throw PageFault ;
	}
	

}

///////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////
/*
                         PageFault
*/
///////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////

PageFault::PageFault()
{
}
