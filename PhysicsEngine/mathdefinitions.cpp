#include "mathdefinitions.h"

namespace PhysicsGD
{
	Vector3::Vector3()
	{
		x = (real)0;
		y = (real)0;
		z = (real)0;
	}

	Vector3::Vector3(const real x_entry, const real y_entry, const real z_entry)
	{
		x = x_entry;
		y = y_entry;
		z = z_entry;
	}

	void Vector3::invert()
	{
		x = -x;
		y = -y;
		z = -z;
	}
}
