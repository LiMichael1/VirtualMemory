#pragma 

#include <fstream>

struct Status
{
public:
	bool accessed;
	bool dirty;
};

class Ram
{
	public:
		Ram& instance();
		Ram();
		~Ram();

		Ram operator =(Ram Var2);

		
		void read(std::ifstream IT);

		//stores metadata on page
		Status status[256];
	private:
		void Ram();
	
};

