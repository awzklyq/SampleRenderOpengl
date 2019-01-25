#include "Header.h"

float Quaternion::Magnitude( )
{
	return ::sqrtf( w * w + x * x + y * y + z * z );
}

void Quaternion::Inverse( )
{
	float magnitude = Magnitude( );
	x /= magnitude;
	y /= magnitude;
	z /= magnitude;
	w /= magnitude;
}

Quaternion& Quaternion::Mul( const Quaternion& q )
{
	float xx = x, yy = y, zz = z, ww = w;

	w = ww * q.w - xx * q.x - yy * q.y - zz * q.z;

	x = ww * q.x + xx * q.w + zz * q.y - yy * q.z;
	y = ww * q.y + yy * q.w + xx * q.z - zz * q.x;
	z = ww * q.z + zz * q.w + yy * q.x - xx * q.y;

	return *this;
}

Quaternion& Quaternion::Sub( const Quaternion& q )
{
	Inverse( );
	Mul( q );

	return *this;
}
