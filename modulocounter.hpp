#include "counter.hpp"

class modulocounter
{
public:
	modulocounter(int m = 0);

	void reset();

	int get_count();

	bool increment();

private:
	int modulo;
	counter c;
};