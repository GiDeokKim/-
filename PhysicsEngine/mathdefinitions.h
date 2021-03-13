#pragma once
#include "precision.h"

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

	public:
		Vector3();						// zero vector�� �����ϰ� ����Ʈ ������ ����
		Vector3(const real x_entry,
				const real y_entry, 
				const real z_entry);	//	�־��� ���� ������ vector�� �����ϴ� ����� ������
		void invert();					//	��� ������ ��ȣ�� �ݴ�� ����
	};
}
