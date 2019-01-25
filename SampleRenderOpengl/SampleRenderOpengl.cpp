#include "Header.h"

Vertex gResource[8];
Vertex gSquare[8];

Matrix4 mat1;
Matrix4 mat2;

int gLenth = 0;
int gWidth = 400;
int gHeight = 400;

void init( )
{
	gResource[0] = Vertex( -0.25f, -0.25f, -0.25f );
	gResource[1] = Vertex( 0.25f, -0.25f, -0.25f );
	gResource[2] = Vertex( 0.25f, 0.25f, -0.25f );
	gResource[3] = Vertex( -0.25f, 0.25f, -0.25f );
	gResource[4] = Vertex( -0.25f, -0.25f, 0.25f );
	gResource[5] = Vertex( 0.25f, -0.25f, 0.25f );
	gResource[6] = Vertex( 0.25f, 0.25f, 0.25f );
	gResource[7] = Vertex( -0.25f, 0.25f, 0.25f );

	gSquare[0] = Vertex( -0.25f, -0.25f, -0.25f );
	gSquare[1] = Vertex( 0.25f, -0.25f, -0.25f );
	gSquare[2] = Vertex( 0.25f, 0.25f, -0.25f );
	gSquare[3] = Vertex( -0.25f, 0.25f, -0.25f );
	gSquare[4] = Vertex( -0.25f, -0.25f, 0.25f );
	gSquare[5] = Vertex( 0.25f, -0.25f, 0.25f );
	gSquare[6] = Vertex( 0.25f, 0.25f, 0.25f );
	gSquare[7] = Vertex( -0.25f, 0.25f, 0.25f );
}

float gTemp = 0.1f;

#define TYPE GL_QUADS
void  display( HWND hwnd )
{
	//gTemp += 0.1f;
	//mat1.Rotation( 1.0f, 1.0f, 0.0f, gTemp );
	mat2.RotationX( 0.1f );
	mat1.MulRight( mat2 );
	mat2.RotationY( 0.1f );
	mat1.MulRight( mat2 );

	gSquare[0] =  gResource[0] * mat1;
	gSquare[1] =  gResource[1] * mat1;
	gSquare[2] =  gResource[2] * mat1;
	gSquare[3] =  gResource[3] * mat1;
	gSquare[4] =  gResource[4] * mat1;
	gSquare[5] =  gResource[5] * mat1;
	gSquare[6] =  gResource[6] * mat1;
	gSquare[7] =  gResource[7] * mat1;

     glClearColor( 0.0, 0.0, 0.0, 0.0 );
     glClear(GL_COLOR_BUFFER_BIT);
     glColor4f( 1.0,0.0,0.0,1.0 );     // set the quad color


	//glBegin( GL_POINTS );
	//	glVertex3f( gSquare[0].x, gSquare[0].y, gSquare[0].z );
 //   glEnd();

	// glColor4f( 0.0,1.0,0.0,1.0 );
	//glBegin( GL_POINTS );
	//	glVertex3f( gSquare[1].x, gSquare[1].y, gSquare[1].z );
 //   glEnd();

	glBegin( TYPE );
		glVertex3f( gSquare[0].x, gSquare[0].y, gSquare[0].z );
		glVertex3f( gSquare[1].x, gSquare[1].y, gSquare[1].z );
		glVertex3f( gSquare[2].x, gSquare[2].y, gSquare[2].z );
		glVertex3f( gSquare[3].x, gSquare[3].y, gSquare[3].z );
    glEnd();

	glBegin( TYPE );
		glVertex3f( gSquare[0].x, gSquare[0].y, gSquare[0].z );
		glVertex3f( gSquare[3].x, gSquare[3].y, gSquare[3].z );
		glVertex3f( gSquare[7].x, gSquare[7].y, gSquare[7].z );
		glVertex3f( gSquare[4].x, gSquare[4].y, gSquare[4].z );
    glEnd();

	glBegin( TYPE );
		glVertex3f( gSquare[0].x, gSquare[0].y, gSquare[0].z );
		glVertex3f( gSquare[1].x, gSquare[1].y, gSquare[1].z );
		glVertex3f( gSquare[5].x, gSquare[5].y, gSquare[5].z );
		glVertex3f( gSquare[4].x, gSquare[4].y, gSquare[4].z );
    glEnd();

	glBegin( TYPE );
		glVertex3f( gSquare[4].x, gSquare[4].y, gSquare[4].z );
		glVertex3f( gSquare[5].x, gSquare[5].y, gSquare[5].z );
		glVertex3f( gSquare[6].x, gSquare[6].y, gSquare[6].z );
		glVertex3f( gSquare[7].x, gSquare[7].y, gSquare[7].z );
    glEnd();

	glBegin( TYPE );
		glVertex3f( gSquare[1].x, gSquare[1].y, gSquare[1].z );
		glVertex3f( gSquare[2].x, gSquare[2].y, gSquare[2].z );
		glVertex3f( gSquare[6].x, gSquare[6].y, gSquare[6].z );
		glVertex3f( gSquare[5].x, gSquare[5].y, gSquare[5].z );
    glEnd();

	glBegin( TYPE );
		glVertex3f( gSquare[2].x, gSquare[2].y, gSquare[2].z );
		glVertex3f( gSquare[6].x, gSquare[6].y, gSquare[6].z );
		glVertex3f( gSquare[7].x, gSquare[7].y, gSquare[7].z );
		glVertex3f( gSquare[3].x, gSquare[3].y, gSquare[3].z );
    glEnd();

    glFlush();
	SwapBuffers( ::GetDC( hwnd ));
}


long WndProc( HWND window, int msgid, WPARAM wparam, LPARAM lparam )
{
	if ( msgid == WM_CREATE )
	{
	}
	else if ( msgid == WM_PAINT )
	{
		//PAINTSTRUCT ps;
		//HDC hdc = BeginPaint( window, &ps);
		//TextOut(hdc, 0, 0, L"ssssssssssssssssssss", 15);
		//EndPaint(window, &ps);
	}
	else if ( msgid == WM_SIZE )
	{
		//_long w = (_short) Dword( lparam ).LoWord( ), h = (_short) Dword( lparam ).HiWord( );
		HBRUSH brush;
		brush = CreateSolidBrush( RGB ( 0, 0, 0 ) );
		//SetClassLong( window, GCL_HBRBACKGROUND, (long) brush );
	}
	else if ( msgid == WM_CLOSE )
	{
		::PostQuitMessage( 0 );
	}

	return ::DefWindowProc( window, msgid, wparam, lparam );
}

int main(int argc, char** argv)
{
     glutInit(&argc, argv);
     //glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
     //glutInitWindowPosition(100, 100);
     //glutInitWindowSize(gWidth, gHeight);
     //glutCreateWindow("Fancy 3D");
     //glutDisplayFunc(display);

     //glutMainLoop();

	WNDCLASS wc		= { sizeof( WNDCLASS ) };
	wc.hbrBackground	= CreateSolidBrush( RGB ( 0, 0, 0 ) );
	wc.style			= CS_HREDRAW | CS_VREDRAW | CS_DBLCLKS;
	wc.lpfnWndProc		= (WNDPROC) WndProc;
	wc.hInstance		= ::GetModuleHandle( NULL );
	wc.hIcon			= ::LoadIcon( NULL, IDI_WINLOGO );
	wc.hCursor			= ::LoadCursor( NULL, IDC_ARROW );
	wc.lpszClassName	= L"Fancy Main Window";

	::RegisterClass( &wc );
	 HWND hwnd = ::CreateWindow( wc.lpszClassName, L"fancy", WS_OVERLAPPEDWINDOW, 100, 100, 400, 400, NULL, NULL, NULL,  NULL );

	 if ( hwnd == NULL )
		 return 0;

	::ShowWindow( hwnd, SW_SHOW );
	::UpdateWindow( hwnd );

	init( );

	PIXELFORMATDESCRIPTOR pfd = { 0 };
	pfd.nSize			= sizeof( PIXELFORMATDESCRIPTOR );
	pfd.nVersion		= 1;
	pfd.dwFlags			= PFD_DRAW_TO_WINDOW | PFD_SUPPORT_OPENGL | PFD_DOUBLEBUFFER;
	pfd.iPixelType		= PFD_TYPE_RGBA;
	pfd.cColorBits		= 24;
	pfd.cAlphaBits		= 8;
	pfd.cDepthBits		= 24;
	pfd.cStencilBits	= 8;
	pfd.iLayerType		= PFD_MAIN_PLANE;

	long format = ::ChoosePixelFormat( ::GetDC( hwnd ), &pfd );
	if ( ::SetPixelFormat( ::GetDC( hwnd ), format, &pfd ) == false )
		return -1;

	HGLRC hglrc = wglCreateContext( ::GetDC( hwnd ) );
	wglMakeCurrent( ::GetDC( hwnd ), hglrc );

	MSG message = { 0 };
	double tick = ::GetTickCount( );
	while ( message.message != WM_QUIT )
	{
		if ( ::PeekMessage( &message, NULL, 0, 0, PM_REMOVE ) )
		{
			::TranslateMessage( &message );
			::DispatchMessage( &message );
		}
		else
		{
			double now = ::GetTickCount( );
			if ( now - tick > 100 )
			{
				tick = now;
				display( hwnd );
			}
		}
	}
	wglMakeCurrent( NULL, NULL );
	wglDeleteContext( hglrc );
     return 0;
}