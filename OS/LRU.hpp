#include <queue>

class LRU : public PRA
{
	Word findVictim();
	LRU();
	void updateUsage();


	queue<Frame> UsedList;
};