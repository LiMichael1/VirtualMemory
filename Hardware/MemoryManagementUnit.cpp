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
		if(TLB[i].log.value == logical.value)
			return true;
	}
	return false;
}


//ram reading and adding the frame
//add data for backing store 

void MemoryManagementUnit::read(PageTable PTable, Address& Logical, unsigned char& data) {
    
    for (TLB t : tlb) {
        if ( t.log.uint32() == Logical.page().uint32()) {
            Logical.frame(t.Phys.uint32()); // match found, set physical address
            ram.read(Logical, data);
                           return;
        }
    }
    tlb_faults++;

    if (PTable.pageList[Logical.page().uint32()].valid) { //valid
        Logical.frame( PTable.pageList[Logical.page().uint32()].frameNum.uint32() ); // set physical address
        ram.read(Logical, data);
    }

    else { // not valid
    	page_faults++;
    	PageFault pf(logical);
		throw pf;
    }
}