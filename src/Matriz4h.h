#pragma once
#include "Vec4.h"

using namespace std;

class Matriz4 {
public:
	float matriz[4][4];

	Matriz4();  
	Matriz4(Vec4 &vec1, Vec4 &vec2, Vec4 &vec3 , Vec4 &vec4 =Vec4(0,0,0,1));
	Matriz4 operator*(const Matriz4 &right); // Right
	Vec4 operator*(Vec4 &right);

	Matriz4 rotateX(const float &angle); // Ángulos
	Matriz4 rotateY(const float &angle);
	Matriz4 rotateZ(const float &angle);

	Matriz4 translate(const float x, const float y, const float z);
	Matriz4 scale(const float x, const float y, const float z);
	Matriz4 Camara(Vec4 &eye, Vec4 &target, Vec4 &up);
};
