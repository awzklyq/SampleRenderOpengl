class Quaternion 
{
public:
	Quaternion( ) : x( 0 ), y( 0 ), z( 0 ), w( 1 ) { }
	Quaternion( float xx, float yy, float zz, float ww ) : x( xx ), y( yy ), z( zz ), w( ww ) { }
	Quaternion( const Quaternion& q ) : x( q.x ), y( q.y ), z( q.z ), w( q.w ) { }
	~Quaternion( );

public:
	float x;
	float y;
	float z;
	float w;

public:
	float Magnitude( );
	void Inverse( );
	
	Quaternion& Mul( const Quaternion& q );
	Quaternion& Sub( const Quaternion& q );

public:
	inline Quaternion operator * ( const Quaternion& q )
		{ Quaternion ref( * this ); ref.Mul( q ); return ref; }

	inline Quaternion& operator *= ( const Quaternion& q )
		{ return this->Mul( q ); }

	inline Quaternion operator - ( const Quaternion& q )
		{ Quaternion ref( * this ); ref.Sub( q ); return ref; }

	inline Quaternion& operator -= ( const Quaternion& q )
		{ return this->Sub( q ); }
};