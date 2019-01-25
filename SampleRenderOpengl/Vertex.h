class Matrix4;

class Vertex
{
public:

	float x;
	float y;
	float z;
public:
	inline Vertex( float xx, float yy, float zz ): x( xx ), y( yy ), z( zz ){ }
	inline Vertex( const Vertex& v ): x( v.x ), y( v.y ), z( v.z ){ }
	inline Vertex( ): x( 0.0f ), y( 0.0f ), z( 0.0f ){ }

public:
	Vertex& Mul( const Matrix4& mat );

public:
	inline Vertex operator * ( const Matrix4& mat )
		{ Vertex ref( *this ); ref.Mul( mat ); return ref; }
};
