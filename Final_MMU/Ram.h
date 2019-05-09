#pragma once
#include <fstream>
#include "Frame.h"
#include "Page.h"
#include <vector>
#include "Address.h"

struct Status
{
    bool accessed = false;
    bool dirty = false;
};

struct Mem
{
	Status Stat;
	Frame data;
};

class Ram
{
public:
    Ram();
    ~Ram();

    Ram& instance();

    //Ram operator =(Page p); 
    //Ram operator =(Frame f);

	template<typename T>
    void read(Address &physical, T& data);


    std::vector<Mem> status[256];

private:
        void Ram_(Address x, Page p);

};

