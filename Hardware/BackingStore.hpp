class BackingStore
{
public:
	BackingStore();
	void read();
private:
	BackingStore() = default;
	basic_if_stream<char> media;
	int length;
	int offset;
};	