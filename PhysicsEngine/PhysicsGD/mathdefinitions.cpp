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

	void Vector3::operator*=(const real _value)
	{
		x *= _value;
		y *= _value;
		z *= _value;
	}

	Vector3 Vector3::operator*(const real _value)
	{
		return Vector3(x * _value, y * _value, z * _value);
	}

	void	Vector3::operator+=(const Vector3& _vector)
	{
		x += _vector.x;
		y += _vector.y;
		z += _vector.z;
	}

	Vector3 Vector3::operator+(const Vector3& _vector)
	{
		return Vector3(x + _vector.x, y + _vector.y, z + _vector.z);
	}

	void	Vector3::operator-=(const Vector3& _vector)
	{
		x -= _vector.x;
		y -= _vector.y;
		z -= _vector.z;
	}

	Vector3 Vector3::operator-(const Vector3& _vector)
	{
		return Vector3(x - _vector.x, y - _vector.y, z - _vector.z);
	}

	void Vector3::invert()
	{
		x = -x;
		y = -y;
		z = -z;
	}

	void Vector3::normalize()
	{
		real vectorlen = magnitude();
		if (vectorlen > 0)
			(*this) *= ((real)1) / vectorlen;
	}

	void Vector3::addScaledVector(const Vector3& _vector, real scale)
	{
		x += _vector.x * scale;
		y += _vector.y * scale;
		z += _vector.z * scale;
	}

	real Vector3::magnitude()
	{
		return sqrt(x * x + y * y + z * z);
	}

	real Vector3::SquareMagnitude()
	{
		return x * x + y * y + z * z;
	}
	
	Vector3	Vector3::componentProduct(const Vector3& _vector)
	{
		return Vector3(x * _vector.x, y * _vector.y, z * *_vector.z);
	}

	void Vector3::componentProductUpdate(const Vector3& _vector)
	{
		x *= _vector.x;
		y *= _vector.y;
		z *= _vector.z;
	}

	real Vector3::InnerProduct(const Vector3& _vector)
	{
		return x * _vector.x + y * _vector.y + z * _vector.z;
	}

	Vector3 Vector3::crossProduct(const Vector3& _vector)
	{
		return Vector3(y * _vector.z - z * _vector.y,
					z * _vector.x - x * _vector.z,
					x * _vector.y - y * _vector.x);
	}

	void Vector3::makeOrthonormalBasis(Vector3* a, Vector3* b, Vector3* c)
	{
		a->normalize();
		(*c) = a->crossProduct(b);
		if (c->SquareMagnitude() == 0) return;	//	vector a와 vector b가 평행
		c->normalize();
		(*b) = c->crossProduct(a);
	}
}
