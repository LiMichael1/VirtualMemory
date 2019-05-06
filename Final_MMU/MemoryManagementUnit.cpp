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

void MemoryManagementUnit::MemoryManagementUnit_(Address logical, PageTable pages)
{
    Address physical;
    pages[logical.page.uint32];
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
