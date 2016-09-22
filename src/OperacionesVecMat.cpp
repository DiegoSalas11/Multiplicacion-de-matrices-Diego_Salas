//#include "OperacionesVecMat.h"
//
//void OperacionesVecMat::init()
//{
//	v1.set(1, 1, 1);
//	v2.set(1, 1, 1);
//	v3.set(0, 0, 0);
//	escalarMultiplicacion = 2;
//	escalarDivision = 2;
//	//---------------------------Matriz 1
//	matriz1[0][0] = 1;	
//	matriz1[0][1] = 1;
//	matriz1[0][2] = 1;
//	matriz1[0][3] = 1;
//
//	matriz1[1][0] = 1;
//	matriz1[1][1] = 1;
//	matriz1[1][2] = 1;
//	matriz1[1][3] = 1;
//
//	matriz1[2][0] = 1;
//	matriz1[2][1] = 1;
//	matriz1[2][2] = 1;
//	matriz1[2][3] = 1;
//
//	matriz1[3][0] = 1;
//	matriz1[3][1] = 1;
//	matriz1[3][2] = 1;
//	matriz1[3][3] = 1;
//	//---------------------------Matriz 2
//	matriz1[0][0] = 1;
//	matriz1[0][1] = 1;
//	matriz1[0][2] = 1;
//	matriz1[0][3] = 1;
//
//	matriz1[1][0] = 1;
//	matriz1[1][1] = 1;
//	matriz1[1][2] = 1;
//	matriz1[1][3] = 1;
//
//	matriz1[2][0] = 1;
//	matriz1[2][1] = 1;
//	matriz1[2][2] = 1;
//	matriz1[2][3] = 1;
//
//	matriz1[3][0] = 1;
//	matriz1[3][1] = 1;
//	matriz1[3][2] = 1;
//	matriz1[3][3] = 1;
//
//
//
//	//------------------------------Matriz Resultante
//	
//	matrizR[0][0] = 0;
//	matrizR[0][1] = 0;
//	matrizR[0][2] = 0;
//	matrizR[0][3] = 0;
//
//	matrizR[1][0] = 0;
//	matrizR[1][1] = 0;
//	matrizR[1][2] = 0;
//	matrizR[1][3] = 0;
//
//	matrizR[2][0] = 0;
//	matrizR[2][1] = 0;
//	matrizR[2][2] = 0;
//	matrizR[2][3] = 0;
//
//	matrizR[3][0] = 0;
//	matrizR[3][1] = 0;
//	matrizR[3][2] = 0;
//	matrizR[3][3] = 0;
//
//}
//
//ofVec3f OperacionesVecMat::sumaVectores(ofVec3f v1, ofVec3f v2)
//{
//	v3 = v1 + v2;
//	return v3;
//}
//
//ofVec3f OperacionesVecMat::restaVectores(ofVec3f v1, ofVec3f v2)
//{
//	v3 = v1 - v2;
//	return v3;
//}
//
//ofVec3f OperacionesVecMat::multiplicacionVectores(float escalar, ofVec3f v2)
//{
//	v3 = escalarMultiplicacion*v2;
//	return v3;
//}
//
//ofVec3f OperacionesVecMat::divisionVectores(ofVec3f v1, float escalarDivision)
//{
//	v3 = v1 /escalarDivision ;
//	return v3;
//}
//
//float OperacionesVecMat::multiplicacionMatrices()
//{
//
//	for (int i = 0; i <= 3; i++)
//	{
//		for (int j = 0; j <= 3; j++)
//		{
//
//			for (int k = 0; k <= 3; k++)
//			{
//				matrizR[i][j] += (matriz1[i][k] * matriz2[k][j]);
//				cout << matrizR[i][j] << endl;
//			}
//		}
//	}
//
//
//	for (int i = 0; i <= 3; i++)
//	{
//		for (int j = 0; j <= 3; j++)
//		{
//
//			return matrizR[i][j];
//		}
//	}
//	
//}
