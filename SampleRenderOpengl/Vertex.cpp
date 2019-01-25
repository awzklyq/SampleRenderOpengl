#include "Header.h"

Vertex& Vertex::Mul( const Matrix4& mat )
{
	float xx = x, yy = y, zz = z;

	x = xx * mat.m[0][0] + yy * mat.m[1][0] + zz * mat.m[2][0] + mat.m[3][0];

	y = xx * mat.m[0][1] + yy * mat.m[1][1] + zz * mat.m[2][1] + mat.m[3][1];

	z = xx * mat.m[0][2] + yy * mat.m[1][2] + zz * mat.m[2][2] + mat.m[3][2];

	return *this;
}