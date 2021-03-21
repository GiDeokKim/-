#pragma once
#include "precision.h"
#include <cmath>

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

	//	생성자 및 연산자 오버로딩
	public:
		Vector3();											// zero vector로 설정하게 디폴트 생성자 구성
		Vector3(const real x_entry,
				const real y_entry, 
				const real z_entry);						//	주어진 원소 값으로 vector를 생성하는 명시적 생성자
		void	operator+=(const Vector3& _vector);			//	주어진 vector만큼 더하기
		Vector3 operator+(const Vector3& _vector) const;	//	주어진 vector만큼 더한 vector를 return
		void	operator-=(const Vector3& _vector);			//	주어진 vector만큼 빼기
		Vector3 operator-(const Vector3& _vector) const;	//	주어진 vector만큼 뺀 vector를 return
		void	operator*=(const real _value);				//	vector를 주어진 scalar value만큼 곱
		Vector3 operator*(const real _value) const;			//	대상 vector에 주어진 scalar value만큼 곱한 vector를 return
		

	//	Vector 연산
	public:
		void		invert();										//	모든 원소의 부호를 반대로 변경
		void		normalize();									//	zero vector가 아닌 vector를 unit vector로 변환
		void		addScaledVector(const Vector3& _vector,
									real scale);					//	주어진 vector를 주어진 scalar value만큼 곱한 다음 vector에 더해준다.
		real		magnitude();									//	vector의 크기를 계산
		real		SquareMagnitude();								//	vector의 크기의 제곱을 계산
		real		InnerProduct(const Vector3& _vector);			//	vector 내적 계산
		Vector3		componentProduct(const Vector3& _vector);		//	대상 vector에 주어진 vector와의 성분 간 곱셈을 하여 return
		void		componentProductUpdate(const Vector3& _vector);	//	주어진 vector의 성분을 대상 vector의 각 성분에 곱
		Vector3		crossProduct(const Vector3& _vector);			//	벡터곱 계산

		void		makeOrthonormalBasis(Vector3* a, Vector3* b, Vector3* c);	//	정규직교 기저 구하기
	};
}
