class BackingStore
{
public:
	BackingStore();
	void read();
	
private:
	basic_if_stream<char> media;
	int length;
	int offset;
};	