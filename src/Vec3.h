#pragma once
#include<iostream>
using namespace std;
class Vec3
{
public:
	float escalar;
	float vector3[3];
	Vec3();
	Vec3(const float &x, const float &y , const float &z=1);

	Vec3 operator+(Vec3 right);
	Vec3 operator-(Vec3 right);
	Vec3 operator*(Vec3 right);
	Vec3 operator*(float right);
	Vec3 normalize(Vec3 vector);
	float point(Vec3 vec);
	Vec3 cross(Vec3 vec);


};
//suma, resta, multiplicación, multiplicación por un escalar, normalización, producto punto y producto cruz.
