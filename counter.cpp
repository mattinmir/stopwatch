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

int counter::get_count() const
{
	return count;
}

std::ostream& operator<<(std::ostream& out, const counter &c)
{
	out << c.count;
	return out;
}