#pragma once
#include "mathdefinitions.h"
namespace PhysicsGD
{
	class Particle
	{
	protected:
		Vector3 position;		// 월드 공간상 입자의 위치
		Vector3 velocity;		// 월드 공간상 입자의 속도
		Vector3 acceleration;	// 월드 공간상 입자의 가속도
		real	damping;		// 직선 운동에 대한 댐핑의 정도, 수치 연산의 오차 완화
		real	inversemass;	// 입자 질량의 역수, 힘 방정식에서 역수가 더 계산상 자주 쓰임
	};
}

