#include "Vec3.h"
#include "math.h"
Vec3::Vec3()
{
	vector3[0] = 0;
	vector3[1] = 0;
	vector3[2] = 1;
}

Vec3::Vec3(const float & x, const float & y, const float & z)
{
		vector3[0] = x;
		vector3[1] = y;
		vector3[2] = z;
}



Vec3 Vec3::operator+(Vec3 right)
{
	//cout << vector3[0] + right.vector3[0] << vector3[1]+ right.vector3[1] << endl;
	
	return Vec3(vector3[0]+ right.vector3[0],vector3[1]+right.vector3[1]);
}

Vec3 Vec3::operator-(Vec3 right)
{
	return Vec3(vector3[0] - right.vector3[0], vector3[1] - right.vector3[1]);
}

Vec3 Vec3::operator*(Vec3 right)
{
	return Vec3(vector3[0] * right.vector3[0], vector3[1] * right.vector3[1]);
}

Vec3 Vec3::operator*(float right)
{
	return Vec3(vector3[0] * right, vector3[1] * right);
}

Vec3 Vec3::normalize(Vec3 vector)
{
	float Normal = sqrt(pow(vector.vector3[0], 2) + pow(vector.vector3[1], 2) + pow(vector.vector3[2], 2));
	return Vec3(vector3[0]/Normal,vector3[1]/Normal,vector3[2]/Normal);
}

float Vec3::point(Vec3 vec)
{
	escalar = 0;
	for(int i =0 ; i<3;i++)
	{
		escalar += vec.vector3[i] * vec.vector3[i];
	}
	cout << escalar << endl;
	return escalar;
}

Vec3 Vec3::cross(Vec3 vec)
{
	Vec3 temporal;
	temporal.vector3[0] = vector3[1] * vec.vector3[2] - (vector3[2] * vec.vector3[1]);
	temporal.vector3[1] = vector3[0] * vec.vector3[2] - (vector3[2] * vec.vector3[0]);
	temporal.vector3[2] = vector3[0] * vec.vector3[1] - (vector3[1] * vec.vector3[0]);
	cout << temporal.vector3[0] << temporal.vector3[1] << temporal.vector3[2] << endl;

	return Vec3();
}
