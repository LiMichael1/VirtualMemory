#include "BackingStore.hpp"

	
void read(const Word& page , Frame& data)
{
	media.seekg(page.uint32() * 128);
	media.read(data.Fbytes, sizeof(data.Fbytes));

}

BackingStore::BackingStore()
{
	media ("BackingStore.bin", ios::binary);
	if(media)
	{
		media.seekg (0, media.end);
    	length = is.tellg();
    	media.seekg (0, media.beg);
    	offset = 0;
	}
	else
	{
		std::cout << endl << "BackingStore.bin not in this file" <<endl;
	}
}