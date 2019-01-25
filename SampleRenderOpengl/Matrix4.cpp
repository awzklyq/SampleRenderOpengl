#include "Header.h"

void Matrix4::MulRight( const Matrix4& mat )
{
	float m00 = m[0][0], m01 = m[0][1], m02 = m[0][2], m03 = m[0][3];
	float m10 = m[1][0], m11 = m[1][1], m12 = m[1][2], m13 = m[1][3];
	float m20 = m[2][0], m21 = m[2][1], m22 = m[2][2], m23 = m[2][3];
	float m30 = m[3][0], m31 = m[3][1], m32 = m[3][2], m33 = m[3][3];

	m[0][0] = m00 * mat.m[0][0] + m01 * mat.m[1][0] + m02 * mat.m[2][0] + m03 * mat.m[3][0];
	m[0][1] = m00 * mat.m[0][1] + m01 * mat.m[1][1] + m02 * mat.m[2][1] + m03 * mat.m[3][1];
	m[0][2] = m00 * mat.m[0][2] + m01 * mat.m[1][2] + m02 * mat.m[2][2] + m03 * mat.m[3][2];
	m[0][3] = m00 * mat.m[0][3] + m01 * mat.m[1][3] + m02 * mat.m[2][3] + m03 * mat.m[3][3];

	m[1][0] = m10 * mat.m[0][0] + m11 * mat.m[1][0] + m12 * mat.m[2][0] + m13 * mat.m[3][0];
	m[1][1] = m10 * mat.m[0][1] + m11 * mat.m[1][1] + m12 * mat.m[2][1] + m13 * mat.m[3][1];
	m[1][2] = m10 * mat.m[0][2] + m11 * mat.m[1][2] + m12 * mat.m[2][2] + m13 * mat.m[3][2];
	m[1][3] = m10 * mat.m[0][3] + m11 * mat.m[1][3] + m12 * mat.m[2][3] + m13 * mat.m[3][3];

	m[2][0] = m20 * mat.m[0][0] + m21 * mat.m[1][0] + m22 * mat.m[2][0] + m23 * mat.m[3][0];
	m[2][1] = m20 * mat.m[0][1] + m21 * mat.m[1][1] + m22 * mat.m[2][1] + m23 * mat.m[3][1];
	m[2][2] = m20 * mat.m[0][2] + m21 * mat.m[1][2] + m22 * mat.m[2][2] + m23 * mat.m[3][2];
	m[2][3] = m20 * mat.m[0][3] + m21 * mat.m[1][3] + m22 * mat.m[2][3] + m23 * mat.m[3][3];

	m[3][0] = m30 * mat.m[0][0] + m31 * mat.m[1][0] + m32 * mat.m[2][0] + m33 * mat.m[3][0];
	m[3][1] = m30 * mat.m[0][1] + m31 * mat.m[1][1] + m32 * mat.m[2][1] + m33 * mat.m[3][1];
	m[3][2] = m30 * mat.m[0][2] + m31 * mat.m[1][2] + m32 * mat.m[2][2] + m33 * mat.m[3][2];
	m[3][3] = m30 * mat.m[0][3] + m31 * mat.m[1][3] + m32 * mat.m[2][3] + m33 * mat.m[3][3];
}

void Matrix4::MulLeft( const Matrix4& mat )
{
	float m00 = m[0][0], m01 = m[0][1], m02 = m[0][2], m03 = m[0][3];
	float m10 = m[1][0], m11 = m[1][1], m12 = m[1][2], m13 = m[1][3];
	float m20 = m[2][0], m21 = m[2][1], m22 = m[2][2], m23 = m[2][3];
	float m30 = m[3][0], m31 = m[3][1], m32 = m[3][2], m33 = m[3][3];

	m[0][0] = mat.m[0][0] * m[0][0] + mat.m[0][1] * m[1][0] + mat.m[0][2] * m[2][0] + mat.m[0][3] * m[3][0];
	m[0][1] = mat.m[0][0] * m[0][1] + mat.m[0][1] * m[1][1] + mat.m[0][2] * m[2][1] + mat.m[0][3] * m[3][1];
	m[0][2] = mat.m[0][0] * m[0][2] + mat.m[0][1] * m[1][2] + mat.m[0][2] * m[2][2] + mat.m[0][3] * m[3][2];
	m[0][3] = mat.m[0][0] * m[0][3] + mat.m[0][1] * m[1][3] + mat.m[0][2] * m[2][3] + mat.m[0][3] * m[3][3];

	m[0][0] = mat.m[0][0] * m00 + mat.m[0][1] * m10 + mat.m[0][2] * m20 + mat.m[0][3] * m30;
	m[0][1] = mat.m[0][0] * m01 + mat.m[0][1] * m11 + mat.m[0][2] * m21 + mat.m[0][3] *	m31;
	m[0][2] = mat.m[0][0] * m02 + mat.m[0][1] * m12 + mat.m[0][2] * m22 + mat.m[0][3] * m32;
	m[0][3] = mat.m[0][0] * m03 + mat.m[0][1] * m13 + mat.m[0][2] * m23 + mat.m[0][3] * m33;

	m[1][0] = mat.m[1][0] * m00 + mat.m[1][1] * m10 + mat.m[1][2] * m20 + mat.m[1][3] * m30;
	m[1][1] = mat.m[1][0] * m01 + mat.m[1][1] * m11 + mat.m[1][2] * m21 + mat.m[1][3] * m31;
	m[1][2] = mat.m[1][0] * m02 + mat.m[1][1] * m12 + mat.m[1][2] * m22 + mat.m[1][3] * m32;
	m[1][3] = mat.m[1][0] * m03 + mat.m[1][1] * m13 + mat.m[1][2] * m23 + mat.m[1][3] * m33;

	m[2][0] = mat.m[2][0] * m00 + mat.m[2][1] * m10 + mat.m[2][2] * m20 + mat.m[2][3] * m30;
	m[2][1] = mat.m[2][0] * m01 + mat.m[2][1] * m11 + mat.m[2][2] * m21 + mat.m[2][3] * m31;
	m[2][2] = mat.m[2][0] * m02 + mat.m[2][1] * m12 + mat.m[2][2] * m22 + mat.m[2][3] * m32;
	m[2][3] = mat.m[2][0] * m03 + mat.m[2][1] * m13 + mat.m[2][2] * m23 + mat.m[2][3] * m33;

	m[3][0] = mat.m[3][0] * m00 + mat.m[3][1] * m10 + mat.m[3][2] * m20 + mat.m[3][3] * m30;
	m[3][1] = mat.m[3][0] * m01 + mat.m[3][1] * m11 + mat.m[3][2] * m21 + mat.m[3][3] * m31;
	m[3][2] = mat.m[3][0] * m02 + mat.m[3][1] * m12 + mat.m[3][2] * m22 + mat.m[3][3] * m32;
	m[3][3] = mat.m[3][0] * m03 + mat.m[3][1] * m13 + mat.m[3][2] * m23 + mat.m[3][3] * m33;
}

void Matrix4::Translation( float xx, float yy, float zz )
{
	m[3][0] = xx;
	m[3][1] = yy;
	m[3][2] = zz;
}


void Matrix4::RotationX( float r )
{
	float sinvalue = ::sinf( r ), cosvalue = ::cos( r );

	m[0][0]	= 1.0f; m[0][1] =       0.0f; m[0][2] =     0.0f; m[0][3] = 0.0f;
	m[1][0] = 0.0f; m[1][1] =   cosvalue; m[1][2] = sinvalue; m[1][3] = 0.0f;
	m[2][0] = 0.0f; m[2][1] = - sinvalue; m[2][2] = cosvalue; m[2][3] = 0.0f;
	m[3][0] = 0.0f; m[3][1] =       0.0f; m[3][2] =     0.0f; m[3][3] = 1.0f;
}

void Matrix4::RotationY( float r )
{
	float sinvalue = ::sinf( r ), cosvalue = ::cosf( r );

	m[0][0]	= cosvalue; m[0][1] = 0.0f; m[0][2] = - sinvalue; m[0][3] = 0.0f;
	m[1][0] =     0.0f; m[1][1] = 1.0f; m[1][2] =       0.0f; m[1][3] = 0.0f;
	m[2][0] = sinvalue; m[2][1] = 0.0f; m[2][2] =   cosvalue; m[2][3] = 0.0f;
	m[3][0] =     0.0f; m[3][1] = 0.0f; m[3][2] =       0.0f; m[3][3] = 1.0f;
}

void Matrix4::RotationZ( float r )
{
	float sinvalue = ::sinf( r ), cosvalue = ::cosf( r );

	m[0][0]	=   cosvalue; m[0][1] = sinvalue; m[0][2] = 0.0f; m[0][3] = 0.0f;
	m[1][0] = - sinvalue; m[1][1] = cosvalue; m[1][2] = 0.0f; m[1][3] = 0.0f;
	m[2][0] =       0.0f; m[2][1] =     0.0f; m[2][2] = 1.0f; m[2][3] = 0.0f;
	m[3][0] =       0.0f; m[3][1] =     0.0f; m[3][2] = 0.0f; m[3][3] = 1.0f;
}


void Matrix4::Rotation( float xx, float yy, float zz, float angle )
{
	float cos = ::cosf( angle );
	float sin = ::sinf( angle );

	m[0][0] = xx * xx * ( 1 - cos ) + cos;
	m[0][1] = xx * yy * ( 1 - cos ) + zz * cos;
	m[0][2] = xx * zz * ( 1 - cos ) - yy * sin;

	m[1][0] = xx * yy * ( 1 - cos ) - zz * sin;
	m[1][1] = yy * yy * ( 1 - cos ) + cos; 
	m[1][2] = yy * zz * ( 1 - cos ) + xx * sin;

	m[2][0] = xx * zz * ( 1 - cos ) - yy * sin;
	m[2][1] = yy * zz * ( 1 - cos ) - xx * sin;
	m[2][2] = zz * zz * ( 1 - cos ) + cos;
}

void Matrix4::Scale( float xx, float yy, float zz )
{
	m[0][0] = xx;
	m[1][1] = yy;
	m[2][2] = zz;
}