#include "MemoryManagementUnit.h"



MemoryManagementUnit::MemoryManagementUnit()
{

}


MemoryManagementUnit::~MemoryManagementUnit()
{
}

MemoryManagementUnit::MemoryManagementUnit& operator =(MemoryManagementUnit bob)
{
	return bob;
}

void MemoryManagementUnit::pageAccess()	{return page_access_count_;}
void MemoryManagementUnit::pageFaults() {return page_faults_;}
void MemoryManagementUnit::tlbAccess()	{return tlb_access_count_;}
void MemoryManagementUnit::tlbFaults()	{return tlb_faults_;}