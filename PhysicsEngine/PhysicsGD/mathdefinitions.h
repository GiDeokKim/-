#pragma once
#include "precision.h"
#include <cmath>

namespace PhysicsGD
{
	class Vector3
	{
	public:
		real x;		//	x�� ���� ��ǥ ��
		real y;		//	y�� ���� ��ǥ ��
		real z;		//	z�� ���� ��ǥ ��

	private:
		real pad = 0;	//	4 ���� ������ ���� ������

	//	������ �� ������ �����ε�
	public:
		Vector3();											// zero vector�� �����ϰ� ����Ʈ ������ ����
		Vector3(const real x_entry,
				const real y_entry, 
				const real z_entry);						//	�־��� ���� ������ vector�� �����ϴ� ����� ������
		void	operator+=(const Vector3& _vector);			//	�־��� vector��ŭ ���ϱ�
		Vector3 operator+(const Vector3& _vector) const;	//	�־��� vector��ŭ ���� vector�� return
		void	operator-=(const Vector3& _vector);			//	�־��� vector��ŭ ����
		Vector3 operator-(const Vector3& _vector) const;	//	�־��� vector��ŭ �� vector�� return
		void	operator*=(const real _value);				//	vector�� �־��� scalar value��ŭ ��
		Vector3 operator*(const real _value) const;			//	��� vector�� �־��� scalar value��ŭ ���� vector�� return
		

	//	Vector ����
	public:
		void		invert();										//	��� ������ ��ȣ�� �ݴ�� ����
		void		normalize();									//	zero vector�� �ƴ� vector�� unit vector�� ��ȯ
		void		addScaledVector(const Vector3& _vector,
									real scale);					//	�־��� vector�� �־��� scalar value��ŭ ���� ���� vector�� �����ش�.
		real		magnitude();									//	vector�� ũ�⸦ ���
		real		SquareMagnitude();								//	vector�� ũ���� ������ ���
		real		InnerProduct(const Vector3& _vector);			//	vector ���� ���
		Vector3		componentProduct(const Vector3& _vector);		//	��� vector�� �־��� vector���� ���� �� ������ �Ͽ� return
		void		componentProductUpdate(const Vector3& _vector);	//	�־��� vector�� ������ ��� vector�� �� ���п� ��
		Vector3		crossProduct(const Vector3& _vector);			//	���Ͱ� ���

		void		makeOrthonormalBasis(Vector3* a, Vector3* b, Vector3* c);	//	�������� ���� ���ϱ�
	};
}
