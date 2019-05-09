#include "BackingStore.hpp"

	
void read(std::ifstream IT)
{
	//read line - offset
	//set RAM to that line

}

BackingStore::BackingStore()
{
	media ("BackingStore.bin", std::ifstream::binary);
	if(media)
	{
		media.seekg (0, media.end);
    	length = is.tellg();
    	media.seekg (0, media.beg);
    	offset = 0;
	}
}