#include "Matriz3.h"

Matriz3::Matriz3()
{
	for (int i = 0; i < 3;i++)
	{
		for (int j = 0; j < 3; j++)
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

Matriz3::Matriz3(Vec3 & vec1, Vec3 & vec2, Vec3 & vec3)
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; i++)
		{
			if (i == 0)
			{
				matriz[i][j] = vec1.vector3[j];
			}
			if (i == 1)
			{
				matriz[i][j] = vec2.vector3[j];
			}
			if (i == 2)
			{
				matriz[i][j] = vec3.vector3[j];
			}
		}
	}
}

Matriz3 Matriz3::operator*(const Matriz3 & right)
{
	Matriz3  matResultante;
	for (int i = 0; i<3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			matResultante.matriz[i][j] = 0;
			for (int k = 0; k < 3; k++)
			{
				matResultante.matriz[i][j] += matriz[i][k] * right.matriz[k][j];
			}
		}
	}
	return matResultante;
	
}

Vec3 Matriz3::operator*(Vec3 & right)
{
	Vec3 vectorR = Vec3(0, 0, 0);
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			vectorR.vector3[i] += matriz[i][j] * right.vector3[j];
		}
	}
	return vectorR;
}

Matriz3 Matriz3::rotate(const float & angle)
{
	Matriz3 rotate = Matriz3(Vec3(cos(angle/180),-sin(angle/180) ,0 ), Vec3(sin(angle/180),cos(angle/180), 0));
	Matriz3 matrizMama = Matriz3(Vec3(matriz[0][0], matriz[0][1], matriz[0][2]),
		Vec3(matriz[1][0], matriz[1][1], matriz[1][2]),
		Vec3(matriz[2][0], matriz[2][1], matriz[2][2]));

	return rotate*matrizMama;

}

Matriz3 Matriz3::translate(const float & x, const float & y)
{
	Matriz3 traslacion = Matriz3(Vec3(1, 0, x), Vec3(0, 1, y));
	Matriz3 matrizMama = Matriz3(Vec3(matriz[0][0], matriz[0][1], matriz[0][2]),
		Vec3(matriz[1][0], matriz[1][1], matriz[1][2]),
		Vec3(matriz[2][0], matriz[2][1], matriz[2][2]));

	return traslacion*matrizMama;

}

	Matriz3 Matriz3::scale(const float & x, const float & y)
	{
		Matriz3 scale = Matriz3(Vec3(x, 0, 0), Vec3(0, y, 0));
		Matriz3 matrizMama = Matriz3(Vec3(matriz[0][0], matriz[0][1], matriz[0][2]),
			Vec3(matriz[1][0], matriz[1][1], matriz[1][2]),
			Vec3(matriz[2][0], matriz[2][1], matriz[2][2]));

		return scale*matrizMama;
	}

