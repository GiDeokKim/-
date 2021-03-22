#pragma once
#include "mathdefinitions.h"
namespace PhysicsGD
{
	class Particle
	{
	protected:
		Vector3 position;		// ���� ������ ������ ��ġ
		Vector3 velocity;		// ���� ������ ������ �ӵ�
		Vector3 acceleration;	// ���� ������ ������ ���ӵ�
		real	damping;		// ���� ��� ���� ������ ����, ��ġ ������ ���� ��ȭ
		real	inversemass;	// ���� ������ ����, �� �����Ŀ��� ������ �� ���� ���� ����
	};
}

