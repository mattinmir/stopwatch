#include "modulocounter.hpp"

modulocounter::modulocounter(int m = 0)
{
	modulo = m;
	c.reset();
}

void modulocounter::reset()
{
	c.reset();
}

int modulocounter::get_count()
{
	
}