#pragma once
#include "precision.h"

namespace PhysicsGD
{
	class Vector3
	{
	public:
		real x;		//	x축 방향 좌표 값
		real y;		//	y축 방향 좌표 값
		real z;		//	z축 방향 좌표 값

	private:
		real pad = 0;	//	4 워드 맞춤을 위해 덧붙임

	public:
		Vector3();						// zero vector로 설정하게 디폴트 생성자 구성
		Vector3(const real x_entry,
				const real y_entry, 
				const real z_entry);	//	주어진 원소 값으로 vector를 생성하는 명시적 생성자
		void invert();					//	모든 원소의 부호를 반대로 변경
	};
}
