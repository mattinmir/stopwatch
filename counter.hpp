
class counter
{
public:
	counter();

	void increment();

	void reset();

	int& get_count();
private:
	int count;
};