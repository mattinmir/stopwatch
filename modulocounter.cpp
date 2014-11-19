#include "modulocounter.hpp"

modulocounter_comp::modulocounter_comp(int m = 0)
{
	modulo = m;
	c.reset();
}

void modulocounter_comp::reset()
{
	c.reset();
}

int modulocounter_comp::get_count()
{
	return c.get_count();
}

bool modulocounter_comp::increment()
{
	bool rollover = false;;
	c.increment();
	if (c.get_count() == modulo)
	{
		c.reset();
		rollover = true;
	}
	
	return rollover;
}






modulocounter_sub::modulocounter_sub(int m = 0)
{
	modulo = m;
	reset();
}

bool modulocounter_sub::increment()
{
	bool rollover = false;;
	counter::increment();
	if (get_count() == modulo)
	{
		reset();
		rollover = true;
	}

	return rollover;
}