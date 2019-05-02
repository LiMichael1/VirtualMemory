class BackingStore
{
public:
	~BackingStore();
	BackingStore();
	BackingStore& instance();
	BackingStore& operator=(BackingStore);
	void read();
private:
	BackingStore();
	basic_if_stream<char> media_;
};	