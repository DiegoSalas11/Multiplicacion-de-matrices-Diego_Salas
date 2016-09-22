#include "Matriz4h.h"

Matriz4::Matriz4()
{
	for (int i=0; i<4;i++)
	{
		for (int j=0;j<4;j++)
		{
			if (i == j)
			{
				matriz[i][j] = 1;
			}
			else
			{
				matriz[i][j] = 0;
			}

		}
	}
}

Matriz4::Matriz4(Vec4 & vec1, Vec4 & vec2, Vec4 & vec3, Vec4 & vec4)
{
	for (int i = 0; i<4; i++)
	{
		for (int j = 0; j<4; j++)
		{
			if (i == 0)
			{
				matriz[i][j] = vec1.vector4[j];
			}
			if (i == 1)
			{
				matriz[i][j] = vec2.vector4[j];
			}
			if (i == 2)
			{
				matriz[i][j] = vec3.vector4[j];
			}
			if (i == 3)
			{
				matriz[i][j] = vec4.vector4[j];
			}
			

		}
	}
}

Matriz4 Matriz4::operator*(const Matriz4 & right)
{
	Matriz4  matResultante;
	for (int i = 0; i<4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			matResultante.matriz[i][j] = 0;
			for (int k = 0; k < 4; k++)
			{
				matResultante.matriz[i][j] += matriz[i][k] * right.matriz[k][j];
			}
		}
	}
	return matResultante;
}

Vec4 Matriz4::operator*(Vec4 & right)
{
	Vec4 vectorR = Vec4(0, 0, 0,1);
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			vectorR.vector4[i] += matriz[i][j] * right.vector4[j];
		}
	}
	return vectorR;
}

Matriz4 Matriz4::rotateX(const float & angle)
{
	Matriz4 rotateX = Matriz4(Vec4(1,0,0,0), Vec4(0,cos(angle / 180), -sin(angle / 180), 0), Vec4(0,sin(angle / 180), cos(angle / 180), 0));
	Matriz4 matrizMama = Matriz4(Vec4(matriz[0][0], matriz[0][1], matriz[0][2],matriz[0][3]),
		Vec4(matriz[1][0], matriz[1][1], matriz[1][2],matriz[1][3]),
		Vec4(matriz[2][0], matriz[2][1], matriz[2][2], matriz[2][3]),
		Vec4(matriz[3][0], matriz[3][1], matriz[3][2], matriz[3][3]));


	return rotateX*matrizMama;
}

Matriz4 Matriz4::rotateY(const float & angle)
{
	Matriz4 rotateY = Matriz4(Vec4(cos(angle / 180),0, sin(angle / 180), 0), Vec4(0,1,0,0), Vec4(-sin(angle/180),0,cos(angle/180),0));
	Matriz4 matrizMama = Matriz4(Vec4(matriz[0][0], matriz[0][1], matriz[0][2], matriz[0][3]),
		Vec4(matriz[1][0], matriz[1][1], matriz[1][2], matriz[1][3]),
		Vec4(matriz[2][0], matriz[2][1], matriz[2][2], matriz[2][3]),
		Vec4(matriz[3][0], matriz[3][1], matriz[3][2], matriz[3][3]));
}

Matriz4 Matriz4::rotateZ(const float & angle)
{
	Matriz4 rotateZ = Matriz4(Vec4(cos(angle / 180), -sin(angle/180),0,0) , Vec4(sin(angle/180),cos(angle/180),0, 0), Vec4(0,0,1,0));
	Matriz4 matrizMama = Matriz4(Vec4(matriz[0][0], matriz[0][1], matriz[0][2], matriz[0][3]),
		Vec4(matriz[1][0], matriz[1][1], matriz[1][2], matriz[1][3]),
		Vec4(matriz[2][0], matriz[2][1], matriz[2][2], matriz[2][3]),
		Vec4(matriz[3][0], matriz[3][1], matriz[3][2], matriz[3][3]));
}

Matriz4 Matriz4::translate(const float x, const float y, const float z)
{
	Matriz4 traslacion = Matriz4(Vec4(1,0,0,x), Vec4(0,1,0,y),Vec4(0,0,1,z));
	Matriz4 matrizMama = Matriz4(Vec4(matriz[0][0], matriz[0][1], matriz[0][2], matriz[0][3]),
		Vec4(matriz[1][0], matriz[1][1], matriz[1][2], matriz[1][3]),
		Vec4(matriz[2][0], matriz[2][1], matriz[2][2], matriz[2][3]),
		Vec4(matriz[3][0], matriz[3][1], matriz[3][2], matriz[3][3]));
	return traslacion*matrizMama;
}

	



Matriz4 Matriz4::scale(const float x, const float y, const float z)
{
	Matriz4 scala = Matriz4(Vec4(x, 0, 0, 0), Vec4(0, y, 0, 0), Vec4(0, 0, z, 0));
	Matriz4 matrizMama = Matriz4(Vec4(matriz[0][0], matriz[0][1], matriz[0][2], matriz[0][3]),
		Vec4(matriz[1][0], matriz[1][1], matriz[1][2], matriz[1][3]),
		Vec4(matriz[2][0], matriz[2][1], matriz[2][2], matriz[2][3]),
		Vec4(matriz[3][0], matriz[3][1], matriz[3][2], matriz[3][3]));
	return scala*matrizMama;
}

Matriz4 Matriz4::Camara(Vec4 & eye, Vec4 & target, Vec4 & up)
{
	Vec4 w = Vec4(0,0,0,0);
	Vec4 u = Vec4(0, 0, 0, 0);
	Vec4 v = Vec4(0, 0, 0, 0);

	w = w.normalize(target - eye);
	u = u.normalize(w.cross(up));
	v = v.normalize(u.cross(w));

	Matriz4 matResusitado = Matriz4(Vec4(u.vector4[0], u.vector4[1], u.vector4[2], 0),
		Vec4(v.vector4[0], v.vector4[1], v.vector4[2],0),
		Vec4(w.vector4[0], w.vector4[1], w.vector4[2],0));
	Matriz4 matTransformer = Matriz4(Vec4(1, 0, 0, -eye.vector4[0]),
		Vec4(0, 1, 0, -eye.vector4[1]),
		Vec4(0, 0, 1, -eye.vector4[2]));

	return matTransformer*matResusitado;//te voy a matar pedrito :)
	

}
