#include "Word_.h"

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