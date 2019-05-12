#include "Word_.h"

struct Address_ : public Word
{
	Address();
	Address(int x) : Word(x) {}

	~Address();

	Word address();
    void address(int x);

    Word displacement();
    void displacement(int x);

    Word frame();
    void frame(int x);

    Word page();
	void page(int x);

	friend std::ifstream& operator >>(std::ifstream& fin, Address& x) {
        fin >> x.value;
    };
};