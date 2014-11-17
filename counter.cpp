#include "counter.hpp"

counter::counter() : count(0)
{}

void counter::increment()
{
	count++;
}

void counter::reset()
{
	count = 0;
}

int& counter::get_count()
{
	return count;
}