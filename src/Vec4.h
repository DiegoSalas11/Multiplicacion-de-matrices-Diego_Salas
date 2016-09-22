#pragma once
#include<iostream>
using namespace std;
class Vec4
{
public:
	float escalar;
	float vector4[3];
	Vec4();
	Vec4(const float &x, const float &y, const float &z, const float &w);

	Vec4 operator+(Vec4 right);
	Vec4 operator-(Vec4 right);
	Vec4 operator*(Vec4 right);
	Vec4 operator*(float right);
	Vec4 normalize(Vec4 vector);
	float point(Vec4 vec);
	Vec4 cross(Vec4 vec);



};