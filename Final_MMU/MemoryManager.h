#pragma once

struct FreeFrameList
{
	FreeFrameList();
	bool isFree[256];
	bool* head;


};

FreeFrameList::FreeFrameList() {
	for (int i = 0; i < 256; i++) {
		isFree[i] = true;
	}
};

class MemoryManager
{
public:
    MemoryManager();
    ~MemoryManager();

    MemoryManager& instance();
    
    //MemoryManager& operator =(MemoryManager y);
    //MemoryManager operator =(MemoryManager x);

    void pageIn();

private:
	FreeFrameList freeFrames_;
	void MemoryManager_();


};

