#pragma once
#include "Address.h"
#include <vector>
#include "PageTable.h"
#include <exception>
#include "Ram.h"

struct TLB
{
	Word log;
	Word Phys;
};

struct PageFault : public std::exception
{
    PageFault();
    Word pagenumber_;
};
class MemoryManagementUnit
{
public:
    MemoryManagementUnit();
    ~MemoryManagementUnit();

    void clearTBL();
    MemoryManagementUnit& instance();

    void pageAccess();
    void pageFaults();

    void tlbAccess();
    void tlbFaults();

	void read(PageTable PTable, Address& Logical);

private:

    unsigned int page_access_count_;
    unsigned int page_faults_;
    unsigned int tbl_access_count_;
    unsigned int tbl_faults_;

    TLB tlb_[16];
};
