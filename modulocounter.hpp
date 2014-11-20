#include "counter.hpp"

class modulocounter_comp
{
public:
	modulocounter_comp(int m = 0);

	void reset();

	int get_count() const;

	bool increment();

	friend std::ostream& operator<<(std::ostream& out, const modulocounter_comp &mc);

private:
	int modulo;
	counter c;
};

class modulocounter_sub : public counter
{
public:
	modulocounter_sub(int m = 0);

	bool increment();

	friend std::ostream& operator<<(std::ostream& out, const modulocounter_sub &mc);
	
private:
	int modulo;
};