#include "Word_.h"

template<typename T>
constexpr auto mHigh(T x) { return (x & 0xFF00); }
#define mLow(x) (x&0xFF) 

struct Address_ : public Word
{
	Word address();
    void address(int x);

    Word displacement();
    void displacement(int x);

    Word frame();
    void frame(int x);

    Word page();
	void page(int x);
};