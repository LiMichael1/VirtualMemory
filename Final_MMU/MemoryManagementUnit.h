#pragma once
#include "Address.h"
#include <vector>
#include "PageTable.h"


struct TLB
{
    //          page# frame#
    std::vector<Word, Word> TBL_[32];
};

struct PageFault
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
	template<typename T>
	void read(PageTable PTable, Address& Logical, T data);

private:

    void MemoryManagementUnit_(Address physical, PageTable pages);
    unsigned int page_access_count_;
    unsigned int page_faults_;
    unsigned int tbl_access_count_;
    unsigned int tbl_faults_;

    TLB tbl_;
};

template<typename T>
inline void MemoryManagementUnit::read(PageTable PTable, Address & Logical, T data)
{


}
