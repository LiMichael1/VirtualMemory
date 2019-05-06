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

private:

    void MemoryManagementUnit_(Address physical, PageTable pages);
    unsigned int page_access_count_;
    unsigned int page_faults_;
    unsigned int tbl_access_count_;
    unsigned int tbl_faults_;

    TLB tbl_;
};

