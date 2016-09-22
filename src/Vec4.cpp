#include "Vec4.h"

Vec4::Vec4()
{
	vector4[0] = 0;
	vector4[1] = 0;
	vector4[2] = 0;
	vector4[3] = 1;
}
Vec4::Vec4(const float &x,const float &y,const float &z,const float &w=1)
{
	vector4[0] = x;
	vector4[1] = y;
	vector4[2] = z;
	vector4[3] = w;
}
Vec4 Vec4::operator+(Vec4 right)
{
	return Vec4(vector4[0]+right.vector4[0],vector4[1]+right.vector4[1],vector4[2]+right.vector4[2]);
}

Vec4 Vec4::operator-(Vec4 right)
{
	return Vec4(vector4[0] - right.vector4[0], vector4[1] - right.vector4[1], vector4[2] - right.vector4[2]);
}

Vec4 Vec4::operator*(Vec4 right)
{
	return Vec4(vector4[0] * right.vector4[0], vector4[1] * right.vector4[1], vector4[2] * right.vector4[2]);
}

Vec4 Vec4::operator*(float right)
{
	return Vec4(vector4[0] * right, vector4[1] * right, vector4[2] * right);
}
	


Vec4 Vec4::normalize(Vec4 vector)
{
	float Normal = sqrt(pow(vector.vector4[0], 2) + pow(vector.vector4[1], 2) + pow(vector.vector4[2], 2) + pow(vector.vector4[3], 2));
	return Vec4(vector4[0] / Normal, vector4[1] / Normal, vector4[2] / Normal, vector4[3] / Normal);
}

float Vec4::point(Vec4 vec)
{
	escalar = 0;
	for (int i = 0; i<4; i++)
	{
		escalar += vec.vector4[i] * vec.vector4[i];
	}
	cout << escalar << endl;
	return escalar;
}

 Vec4 Vec4::cross(Vec4 vec)
{
	Vec4 temporal;
	temporal.vector4[0] = vector4[1] * vec.vector4[2] - (vector4[2] * vec.vector4[1]);
	temporal.vector4[1] = vector4[0] * vec.vector4[2] - (vector4[2] * vec.vector4[0]);
	temporal.vector4[2] = vector4[0] * vec.vector4[1] - (vector4[1] * vec.vector4[0]);
	cout << temporal.vector4[0] << temporal.vector4[1] << temporal.vector4[2] << endl;
	return temporal;
}

