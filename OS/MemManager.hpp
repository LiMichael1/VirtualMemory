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

    void pageIn();

private:
	FreeFrameList freeFrames;
	void MemoryManager();


};