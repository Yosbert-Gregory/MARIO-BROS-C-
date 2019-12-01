#include <Windows.h>
#include <C:\GLUT\include\GL\glut.h>
#include <stdio.h>
#include <stdarg.h>
#include <math.h>
#define GL_GLEXT_PROTOTYPES

void display();
void specialKeys();
double rotate_y=0;
double rotate_x=0;
double rotate_yy=0;
double rotate_xx=0;

GLfloat X = 0.0f;
GLfloat Y = 0.0f;
GLfloat Z = 0.0f;
float scale = 1.0f;

bool bx = false;
bool by = false;
bool bz = false;

double rx = 0, ry = 0, rz = 0, px = 0, py = 0, pz = 0;


void init(void) {
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glShadeModel(GL_MODELVIEW);
	glLoadIdentity();
}

void cubo(){
//LADO FRONTAL: lado amarillo
  glBegin(GL_POLYGON);
  glColor3f( 1.0, 1.0, 0.0 );
  glVertex3f(  69, -2, -1 );
  glVertex3f(  69,  0, -1 );
  glVertex3f( 0,  0, -1 );
  glVertex3f( 0, -2, -1 );
  glEnd();

  // LADO TRASERO: lado cian
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0, 1.0 );
  glVertex3f(  69, -2, 1 );
  glVertex3f(  69,  0, 1 );
  glVertex3f( 0,  0, 1 );
  glVertex3f( 0, -2, 1 );
  glEnd();

  // LADO DERECHO: lado morado
  glBegin(GL_POLYGON);
  glColor3f(  1.0,  0.0,  1.0 );
  glVertex3f( 69, -2, -1 );
  glVertex3f( 69,  0, -1 );
  glVertex3f( 69,  0,  1 );
  glVertex3f( 69, -2,  1 );
  glEnd();

  // LADO IZQUIERDO: lado verde
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0,  0.0 );
  glVertex3f( 0, -2,  1 );
  glVertex3f( 0,  0,  1 );
  glVertex3f( 0,  0, -1 );
  glVertex3f( 0, -2, -1 );
  glEnd();

  // LADO SUPERIOR: lado azul
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  0.0,  1.0 );
  glVertex3f(  69,  -2,  1 );
  glVertex3f(  69,  -2, -1 );
  glVertex3f( 0,  -2, -1 );
  glVertex3f( 0,  -2,  1 );
  glEnd();

  // LADO INFERIOR: lado rojo
  glBegin(GL_POLYGON);
  glColor3f(   1.0,  0.0,  0.0 );
  glVertex3f(  69, 0, -1 );
  glVertex3f(  69, 0,  1 );
  glVertex3f( 0, 0,  1 );
  glVertex3f( 0, 0, -1 );
  glEnd();

  //RECTANGULO DE ABAJO
  glBegin(GL_POLYGON);
  glColor3f( 1.0, 1.0, 0.0 );
  glVertex3f(  69, -4, -1 );
  glVertex3f(  69,  -2, -1 );
  glVertex3f( 0,  -2, -1 );
  glVertex3f( 0, -4, -1 );
  glEnd();

  // LADO TRASERO: lado cian
  glBegin(GL_POLYGON);
  glColor3f(   1.0,  0.0, 1.0 );
  glVertex3f(  69, -4, 1 );
  glVertex3f(  69,  -2, 1 );
  glVertex3f( 0,  -2, 1 );
  glVertex3f( 0, -4, 1 );
  glEnd();

  // LADO DERECHO: lado morado
  glBegin(GL_POLYGON);
  glColor3f(  1.0,  0.0,  1.0 );
  glVertex3f( 69, -4, -1 );
  glVertex3f( 69,  -2, -1 );
  glVertex3f( 69,  -2,  1 );
  glVertex3f( 69, -4,  1 );
  glEnd();

  // LADO IZQUIERDO: lado verde
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0,  0.0 );
  glVertex3f( 0, -4,  1 );
  glVertex3f( 0,  -2,  1 );
  glVertex3f( 0,  -2, -1 );
  glVertex3f( 0, -4, -1 );
  glEnd();

  // LADO SUPERIOR: lado azul
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  0.0,  1.0 );
  glVertex3f(  69,  -4,  1 );
  glVertex3f(  69,  -4, -1 );
  glVertex3f( 0,  -4, -1 );
  glVertex3f( 0,  -4,  1 );
  glEnd();

  // LADO INFERIOR: lado rojo
  glBegin(GL_POLYGON);
  glColor3f(   1.0,  0.0,  0.0 );
  glVertex3f(  69, -2, -1 );
  glVertex3f(  69, -2,  1 );
  glVertex3f( 0, -2,  1 );
  glVertex3f( 0, -2, -1 );
  glEnd();

  //PRIMER CAJA MISTERIO POICIÍON 17------------------------------------------------------------
  glBegin(GL_POLYGON);
  glColor3f( 1.0, 1.0, 0.0 );
  glVertex3f(  17, 6, -1 );
  glVertex3f(  17,  8, -1 );
  glVertex3f( 15,  8, -1 );
  glVertex3f( 15, 6, -1 );
  glEnd();

  // LADO TRASERO: lado cian
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0, 1.0 );
  glVertex3f(  17, 6, 1 );
  glVertex3f(  17,  8, 1 );
  glVertex3f( 15,  8, 1 );
  glVertex3f( 15, 6, 1 );
  glEnd();

  // LADO DERECHO: lado morado
  glBegin(GL_POLYGON);
  glColor3f(  1.0,  0.0,  1.0 );
  glVertex3f( 17, 6, -1 );
  glVertex3f( 17,  8, -1 );
  glVertex3f( 17,  8,  1 );
  glVertex3f( 17, 6,  1 );
  glEnd();

  // LADO IZQUIERDO: lado verde
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0,  0.0 );
  glVertex3f( 15, 6,  1 );
  glVertex3f( 15,  8,  1 );
  glVertex3f( 15,  8, -1 );
  glVertex3f( 15, 6, -1 );
  glEnd();

  // LADO SUPERIOR: lado azul
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  0.0,  1.0 );
  glVertex3f(  17,  6,  1 );
  glVertex3f(  17,  6, -1 );
  glVertex3f( 15,  6, -1 );
  glVertex3f( 15,  6,  1 );
  glEnd();

  // LADO INFERIOR: lado rojo
  glBegin(GL_POLYGON);
  glColor3f(   1.0,  0.0,  0.0 );
  glVertex3f(  17, 8, -1 );
  glVertex3f(  17, 8,  1 );
  glVertex3f( 15, 8,  1 );
  glVertex3f( 15, 8, -1 );
  glEnd();

  //PRIMER CAJA NORMAL POICIÍON 21------------------------------------------------------------
  glBegin(GL_POLYGON);
  glColor3f( 1.0, 1.0, 0.0 );
  glVertex3f(  22, 6, -1 );
  glVertex3f(  22,  8, -1 );
  glVertex3f( 20,  8, -1 );
  glVertex3f( 20, 6, -1 );
  glEnd();

  // LADO TRASERO: lado cian
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0, 1.0 );
  glVertex3f(  22, 6, 1 );
  glVertex3f(  22,  8, 1 );
  glVertex3f( 20,  8, 1 );
  glVertex3f( 20, 6, 1 );
  glEnd();

  // LADO DERECHO: lado morado
  glBegin(GL_POLYGON);
  glColor3f(  1.0,  0.0,  1.0 );
  glVertex3f( 22, 6, -1 );
  glVertex3f( 22,  8, -1 );
  glVertex3f( 22,  8,  1 );
  glVertex3f( 22, 6,  1 );
  glEnd();

  // LADO IZQUIERDO: lado verde
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0,  0.0 );
  glVertex3f( 20, 6,  1 );
  glVertex3f( 20,  8,  1 );
  glVertex3f( 20,  8, -1 );
  glVertex3f( 20, 6, -1 );
  glEnd();

  // LADO SUPERIOR: lado azul
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  0.0,  1.0 );
  glVertex3f(  22,  6,  1 );
  glVertex3f(  22,  6, -1 );
  glVertex3f( 20,  6, -1 );
  glVertex3f( 20,  6,  1 );
  glEnd();

  // LADO INFERIOR: lado rojo
  glBegin(GL_POLYGON);
  glColor3f(   1.0,  0.0,  0.0 );
  glVertex3f(  22, 8, -1 );
  glVertex3f(  22, 8,  1 );
  glVertex3f( 20, 8,  1 );
  glVertex3f( 20, 8, -1 );
  glEnd();

  //caja misterio N2 posición 23
  //-----------------------------------------------------------------------------------------------------
   glBegin(GL_POLYGON);
  glColor3f( 0.0, 1.0, 0.0 );
  glVertex3f(  24, 6, -1 );
  glVertex3f(  24,  8, -1 );
  glVertex3f( 22,  8, -1 );
  glVertex3f( 22, 6, -1 );
  glEnd();

  // LADO TRASERO: lado cian
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0, 1.0 );
  glVertex3f(  24, 6, 1 );
  glVertex3f(  24,  8, 1 );
  glVertex3f( 22,  8, 1 );
  glVertex3f( 22, 6, 1 );
  glEnd();

  // LADO DERECHO: lado morado
  glBegin(GL_POLYGON);
  glColor3f(  1.0,  0.0,  1.0 );
  glVertex3f( 24, 6, -1 );
  glVertex3f( 24,  8, -1 );
  glVertex3f( 24,  8,  1 );
  glVertex3f( 24, 6,  1 );
  glEnd();

  // LADO IZQUIERDO: lado verde
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0,  0.0 );
  glVertex3f( 22, 6,  1 );
  glVertex3f( 22,  8,  1 );
  glVertex3f( 22,  8, -1 );
  glVertex3f( 22, 6, -1 );
  glEnd();

  // LADO SUPERIOR: lado azul
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  0.0,  1.0 );
  glVertex3f(  24,  6,  1 );
  glVertex3f(  24,  6, -1 );
  glVertex3f( 22,  6, -1 );
  glVertex3f( 22,  6,  1 );
  glEnd();

  // LADO INFERIOR: lado rojo
  glBegin(GL_POLYGON);
  glColor3f(   1.0,  0.0,  0.0 );
  glVertex3f(  24, 8, -1 );
  glVertex3f(  24, 8,  1 );
  glVertex3f( 22, 8,  1 );
  glVertex3f( 22, 8, -1 );
  glEnd();

  //LADRILLO CUBO 4 POS 25---------------------------------------------
   glBegin(GL_POLYGON);
  glColor3f( 1.0, 1.0, 0.0 );
  glVertex3f(  26, 6, -1 );
  glVertex3f(  26,  8, -1 );
  glVertex3f( 24,  8, -1 );
  glVertex3f( 24, 6, -1 );
  glEnd();

  // LADO TRASERO: lado cian
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0, 1.0 );
  glVertex3f(  26, 6, 1 );
  glVertex3f(  26,  8, 1 );
  glVertex3f( 24,  8, 1 );
  glVertex3f( 24, 6, 1 );
  glEnd();

  // LADO DERECHO: lado morado
  glBegin(GL_POLYGON);
  glColor3f(  1.0,  0.0,  1.0 );
  glVertex3f( 26, 6, -1 );
  glVertex3f( 26,  8, -1 );
  glVertex3f( 26,  8,  1 );
  glVertex3f( 26, 6,  1 );
  glEnd();

  // LADO IZQUIERDO: lado verde
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0,  0.0 );
  glVertex3f( 24, 6,  1 );
  glVertex3f( 24,  8,  1 );
  glVertex3f( 24,  8, -1 );
  glVertex3f( 24, 6, -1 );
  glEnd();

  // LADO SUPERIOR: lado azul
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  0.0,  1.0 );
  glVertex3f(  26,  6,  1 );
  glVertex3f(  26,  6, -1 );
  glVertex3f( 24,  6, -1 );
  glVertex3f( 24,  6,  1 );
  glEnd();

  // LADO INFERIOR: lado rojo
  glBegin(GL_POLYGON);
  glColor3f(   1.0,  0.0,  0.0 );
  glVertex3f(  26, 8, -1 );
  glVertex3f(  26, 8,  1 );
  glVertex3f( 24, 8,  1 );
  glVertex3f( 24, 8, -1 );
  glEnd();
  //-----------------------------------
  //LADRILLO CUBO 5 POS 25 ARRIBA---------------------------------------------
   glBegin(GL_POLYGON);
  glColor3f( 1.0, 1.0, 0.0 );
  glVertex3f(  26, 14, -1 );
  glVertex3f(  26,  16, -1 );
  glVertex3f( 24,  16, -1 );
  glVertex3f( 24, 14, -1 );
  glEnd();

  // LADO TRASERO: lado cian
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0, 1.0 );
  glVertex3f(  26, 14, 1 );
  glVertex3f(  26,  16, 1 );
  glVertex3f( 24,  16, 1 );
  glVertex3f( 24, 14, 1 );
  glEnd();

  // LADO DERECHO: lado morado
  glBegin(GL_POLYGON);
  glColor3f(  1.0,  0.0,  1.0 );
  glVertex3f( 26, 14, -1 );
  glVertex3f( 26,  16, -1 );
  glVertex3f( 26,  16,  1 );
  glVertex3f( 26, 14,  1 );
  glEnd();

  // LADO IZQUIERDO: lado verde
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0,  0.0 );
  glVertex3f( 24, 14,  1 );
  glVertex3f( 24,  16,  1 );
  glVertex3f( 24,  16, -1 );
  glVertex3f( 24, 14, -1 );
  glEnd();

  // LADO SUPERIOR: lado azul
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  0.0,  1.0 );
  glVertex3f(  26,  14,  1 );
  glVertex3f(  26,  14, -1 );
  glVertex3f( 24,  14, -1 );
  glVertex3f( 24,  14,  1 );
  glEnd();

  // LADO INFERIOR: lado rojo
  glBegin(GL_POLYGON);
  glColor3f(   1.0,  0.0,  0.0 );
  glVertex3f(  26, 16, -1 );
  glVertex3f(  26, 16,  1 );
  glVertex3f( 24, 16,  1 );
  glVertex3f( 24, 16, -1 );
  glEnd();

  //----------------------
  //LADRILLO CUBO 6 POS 27---------------------------------------------
   glBegin(GL_POLYGON);
  glColor3f( 1.0, 1.0, 0.0 );
  glVertex3f(  28, 6, -1 );
  glVertex3f(  28,  8, -1 );
  glVertex3f( 26,  8, -1 );
  glVertex3f( 26, 6, -1 );
  glEnd();

  // LADO TRASERO: lado cian
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0, 1.0 );
  glVertex3f(  28, 6, 1 );
  glVertex3f(  28,  8, 1 );
  glVertex3f( 26,  8, 1 );
  glVertex3f( 26, 6, 1 );
  glEnd();

  // LADO DERECHO: lado morado
  glBegin(GL_POLYGON);
  glColor3f(  1.0,  0.0,  1.0 );
  glVertex3f( 28, 6, -1 );
  glVertex3f( 28,  8, -1 );
  glVertex3f( 28,  8,  1 );
  glVertex3f( 28, 6,  1 );
  glEnd();

  // LADO IZQUIERDO: lado verde
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0,  0.0 );
  glVertex3f( 26, 6,  1 );
  glVertex3f( 26,  8,  1 );
  glVertex3f( 26,  8, -1 );
  glVertex3f( 26, 6, -1 );
  glEnd();

  // LADO SUPERIOR: lado azul
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  0.0,  1.0 );
  glVertex3f(  28,  6,  1 );
  glVertex3f(  28,  6, -1 );
  glVertex3f( 26,  6, -1 );
  glVertex3f( 26,  6,  1 );
  glEnd();

  // LADO INFERIOR: lado rojo
  glBegin(GL_POLYGON);
  glColor3f(   1.0,  0.0,  0.0 );
  glVertex3f(  28, 8, -1 );
  glVertex3f(  28, 8,  1 );
  glVertex3f( 26, 8,  1 );
  glVertex3f( 26, 8, -1 );
  glEnd();

//  --------------------PRIMER TUBO----------- POS 34
  //LADRILLO CUBO 4 POS 25---------------------------------------------
   glBegin(GL_POLYGON);
  glColor3f( 1.0, 1.0, 0.0 );
  glVertex3f(  34.5, 0, -1 );
  glVertex3f(  34.5,  4, -1 );
  glVertex3f( 32,  4, -1 );
  glVertex3f( 32, 0, -1 );
  glEnd();

  // LADO TRASERO: lado cian
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0, 1.0 );
  glVertex3f(  34.5, 0, 1 );
  glVertex3f(  34.5,  4, 1 );
  glVertex3f( 32,  4, 1 );
  glVertex3f( 32, 0, 1 );
  glEnd();

  // LADO DERECHO: lado morado
  glBegin(GL_POLYGON);
  glColor3f(  1.0,  0.0,  1.0 );
  glVertex3f( 34.5, 0, -1 );
  glVertex3f( 34.5,  4, -1 );
  glVertex3f( 34.5,  4,  1 );
  glVertex3f( 34.5, 0,  1 );
  glEnd();

  // LADO IZQUIERDO: lado verde
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0,  0.0 );
  glVertex3f( 32, 0,  1 );
  glVertex3f( 32,  4,  1 );
  glVertex3f( 32,  4, -1 );
  glVertex3f( 32, 0, -1 );
  glEnd();

  // LADO SUPERIOR: lado azul
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  0.0,  1.0 );
  glVertex3f(  34.5,  0,  1 );
  glVertex3f(  34.5,  0, -1 );
  glVertex3f( 32,  0, -1 );
  glVertex3f( 32,  0,  1 );
  glEnd();

  // LADO INFERIOR: lado rojo
  glBegin(GL_POLYGON);
  glColor3f(   1.0,  0.0,  0.0 );
  glVertex3f(  34.5, 4, -1 );
  glVertex3f(  34.5, 4,  1 );
  glVertex3f( 32, 4,  1 );
  glVertex3f( 32, 4 , -1 );
  glEnd();

  //--------------------------------------SEGUNDO TUBO POS 42---------
    //LADRILLO CUBO 4 POS 25---------------------------------------------
   glBegin(GL_POLYGON);
  glColor3f( 1.0, 1.0, 0.0 );
  glVertex3f(  44.5, 0, -1 );
  glVertex3f(  44.5,  6, -1 );
  glVertex3f( 42,  6, -1 );
  glVertex3f( 42, 0, -1 );
  glEnd();

  // LADO TRASERO: lado cian
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0, 1.0 );
  glVertex3f(  44.5, 0, 1 );
  glVertex3f(  44.5,  6, 1 );
  glVertex3f( 42,  6, 1 );
  glVertex3f( 42, 0, 1 );
  glEnd();

  // LADO DERECHO: lado morado
  glBegin(GL_POLYGON);
  glColor3f(  1.0,  0.0,  1.0 );
  glVertex3f( 44.5, 0, -1 );
  glVertex3f( 44.5,  6, -1 );
  glVertex3f( 44.5,  6,  1 );
  glVertex3f( 44.5, 0,  1 );
  glEnd();

  // LADO IZQUIERDO: lado verde
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0,  0.0 );
  glVertex3f( 42, 0,  1 );
  glVertex3f( 42,  6,  1 );
  glVertex3f( 42,  6, -1 );
  glVertex3f( 42, 0, -1 );
  glEnd();

  // LADO SUPERIOR: lado azul
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  0.0,  1.0 );
  glVertex3f(  44.5,  0,  1 );
  glVertex3f(  44.5,  0, -1 );
  glVertex3f( 42,  0, -1 );
  glVertex3f( 42,  0,  1 );
  glEnd();

  // LADO INFERIOR: lado rojo
  glBegin(GL_POLYGON);
  glColor3f(   1.0,  0.0,  0.0 );
  glVertex3f(  44.5, 6, -1 );
  glVertex3f(  44.5, 6,  1 );
  glVertex3f( 42, 6,  1 );
  glVertex3f( 42, 6 , -1 );
  glEnd();

  //-------------------------TUBO 3-----POS 50
    //LADRILLO CUBO 4 POS 25---------------------------------------------
   glBegin(GL_POLYGON);
  glColor3f( 1.0, 1.0, 0.0 );
  glVertex3f(  52.5, 0, -1 );
  glVertex3f(  52.5,  8, -1 );
  glVertex3f( 50,  8, -1 );
  glVertex3f( 50, 0, -1 );
  glEnd();

  // LADO TRASERO: lado cian
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0, 1.0 );
  glVertex3f(  52.5, 0, 1 );
  glVertex3f(  52.5,  8, 1 );
  glVertex3f( 50,  8, 1 );
  glVertex3f( 50, 0, 1 );
  glEnd();

  // LADO DERECHO: lado morado
  glBegin(GL_POLYGON);
  glColor3f(  1.0,  0.0,  1.0 );
  glVertex3f( 52.5, 0, -1 );
  glVertex3f( 52.5,  8, -1 );
  glVertex3f( 52.5,  8,  1 );
  glVertex3f( 52.5, 0,  1 );
  glEnd();

  // LADO IZQUIERDO: lado verde
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0,  0.0 );
  glVertex3f( 50, 0,  1 );
  glVertex3f( 50,  8,  1 );
  glVertex3f( 50,  8, -1 );
  glVertex3f( 50, 0, -1 );
  glEnd();

  // LADO SUPERIOR: lado azul
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  0.0,  1.0 );
  glVertex3f(  52.5,  0,  1 );
  glVertex3f(  52.5,  0, -1 );
  glVertex3f( 50,  0, -1 );
  glVertex3f( 50,  0,  1 );
  glEnd();

  // LADO INFERIOR: lado rojo
  glBegin(GL_POLYGON);
  glColor3f(   1.0,  0.0,  0.0 );
  glVertex3f(  52.5, 8, -1 );
  glVertex3f(  52.5, 8,  1 );
  glVertex3f( 50, 8,  1 );
  glVertex3f( 50, 8 , -1 );
  glEnd();

//-------------------------TUBO 4 POS 61-----
glBegin(GL_POLYGON);
  glColor3f( 1.0, 1.0, 0.0 );
  glVertex3f(  61.5, 0, -1 );
  glVertex3f(  61.5,  8, -1 );
  glVertex3f( 59,  8, -1 );
  glVertex3f( 59, 0, -1 );
  glEnd();

  // LADO TRASERO: lado cian
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0, 1.0 );
  glVertex3f(  61.5, 0, 1 );
  glVertex3f(  61.5,  8, 1 );
  glVertex3f( 59,  8, 1 );
  glVertex3f( 59, 0, 1 );
  glEnd();

  // LADO DERECHO: lado morado
  glBegin(GL_POLYGON);
  glColor3f(  1.0,  0.0,  1.0 );
  glVertex3f( 61.5, 0, -1 );
  glVertex3f( 61.5,  8, -1 );
  glVertex3f( 61.5,  8,  1 );
  glVertex3f( 61.5, 0,  1 );
  glEnd();

  // LADO IZQUIERDO: lado verde
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0,  0.0 );
  glVertex3f( 59, 0,  1 );
  glVertex3f( 59,  8,  1 );
  glVertex3f( 59,  8, -1 );
  glVertex3f( 59, 0, -1 );
  glEnd();

  // LADO SUPERIOR: lado azul
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  0.0,  1.0 );
  glVertex3f(  61.5,  0,  1 );
  glVertex3f(  61.5,  0, -1 );
  glVertex3f( 59,  0, -1 );
  glVertex3f( 59,  0,  1 );
  glEnd();

  // LADO INFERIOR: lado rojo
  glBegin(GL_POLYGON);
  glColor3f(   1.0,  0.0,  0.0 );
  glVertex3f(  61.5, 8, -1 );
  glVertex3f(  61.5, 8,  1 );
  glVertex3f( 59, 8,  1 );
  glVertex3f( 59, 8 , -1 );
  glEnd();

//  ---------------------------CUBO DE VIDA----POS 65
   glBegin(GL_POLYGON);
  glColor3f( 0.0, 1.0, 0.0 );
  glVertex3f(  65, 8, -1 );
  glVertex3f(  65,  10, -1 );
  glVertex3f( 67,  10, -1 );
  glVertex3f( 67, 8, -1 );
  glEnd();

  // LADO TRASERO: lado cian
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0, 1.0 );
  glVertex3f(  65, 8, 1 );
  glVertex3f(  67,  10, 1 );
  glVertex3f( 65,  10, 1 );
  glVertex3f( 65, 8, 1 );
  glEnd();

  // LADO DERECHO: lado morado
  glBegin(GL_POLYGON);
  glColor3f(  1.0,  0.0,  1.0 );
  glVertex3f( 67, 8, -1 );
  glVertex3f( 67,  10, -1 );
  glVertex3f( 67,  10,  1 );
  glVertex3f( 67, 8,  1 );
  glEnd();

  // LADO IZQUIERDO: lado verde
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0,  0.0 );
  glVertex3f( 65, 8,  1 );
  glVertex3f( 65,  10,  1 );
  glVertex3f( 65,  10, -1 );
  glVertex3f( 65, 8, -1 );
  glEnd();

  // LADO SUPERIOR: lado azul
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  0.0,  1.0 );
  glVertex3f(  67,  8,  1 );
  glVertex3f(  67,  8, -1 );
  glVertex3f( 65,  8, -1 );
  glVertex3f( 65,  8,  1 );
  glEnd();

  // LADO INFERIOR: lado rojo
  glBegin(GL_POLYGON);
  glColor3f(   1.0,  0.0,  0.0 );
  glVertex3f(  67, 10, -1 );
  glVertex3f(  67, 10,  1 );
  glVertex3f( 65, 10,  1 );
  glVertex3f( 65, 10, -1 );
  glEnd();

  //salto de 4
  //-----------------------SEGUNDA PARTE---------POS 71------------------------------
   glBegin(GL_POLYGON);
  glColor3f( 1.0, 1.0, 0.0 );
  glVertex3f(  105, -2, -1 );
  glVertex3f(  105,  0, -1 );
  glVertex3f( 75,  0, -1 );
  glVertex3f( 75, -2, -1 );
  glEnd();

  // LADO TRASERO: lado cian
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0, 1.0 );
  glVertex3f(  105, -2, 1 );
  glVertex3f(  105,  0, 1 );
  glVertex3f( 75,  0, 1 );
  glVertex3f( 75, -2, 1 );
  glEnd();

  // LADO DERECHO: lado morado
  glBegin(GL_POLYGON);
  glColor3f(  1.0,  0.0,  1.0 );
  glVertex3f( 105, -2, -1 );
  glVertex3f( 105,  0, -1 );
  glVertex3f( 105,  0,  1 );
  glVertex3f( 105, -2,  1 );
  glEnd();

  // LADO IZQUIERDO: lado verde
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0,  0.0 );
  glVertex3f( 75, -2,  1 );
  glVertex3f( 75,  0,  1 );
  glVertex3f( 75,  0, -1 );
  glVertex3f( 75, -2, -1 );
  glEnd();

  // LADO SUPERIOR: lado azul
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  0.0,  1.0 );
  glVertex3f(  105,  -2,  1 );
  glVertex3f(  105,  -2, -1 );
  glVertex3f( 75,  -2, -1 );
  glVertex3f( 75,  -2,  1 );
  glEnd();

  // LADO INFERIOR: lado rojo
  glBegin(GL_POLYGON);
  glColor3f(   1.0,  0.0,  0.0 );
  glVertex3f(  105, 0, -1 );
  glVertex3f(  105, 0,  1 );
  glVertex3f( 75, 0,  1 );
  glVertex3f( 75, 0, -1 );
  glEnd();

  //RECTANGULO DE ABAJO
  glBegin(GL_POLYGON);
  glColor3f( 1.0, 1.0, 0.0 );
  glVertex3f(  105, -4, -1 );
  glVertex3f(  105,  -2, -1 );
  glVertex3f( 75,  -2, -1 );
  glVertex3f( 75, -4, -1 );
  glEnd();

  // LADO TRASERO: lado cian
  glBegin(GL_POLYGON);
  glColor3f(   1.0,  0.0, 1.0 );
  glVertex3f(  105, -4, 1 );
  glVertex3f(  105,  -2, 1 );
  glVertex3f( 75,  -2, 1 );
  glVertex3f( 75, -4, 1 );
  glEnd();

  // LADO DERECHO: lado morado
  glBegin(GL_POLYGON);
  glColor3f(  1.0,  0.0,  1.0 );
  glVertex3f( 105, -4, -1 );
  glVertex3f( 105,  -2, -1 );
  glVertex3f( 105,  -2,  1 );
  glVertex3f( 105, -4,  1 );
  glEnd();

  // LADO IZQUIERDO: lado verde
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0,  0.0 );
  glVertex3f( 75, -4,  1 );
  glVertex3f( 75,  -2,  1 );
  glVertex3f( 75,  -2, -1 );
  glVertex3f( 75, -4, -1 );
  glEnd();

  // LADO SUPERIOR: lado azul
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  0.0,  1.0 );
  glVertex3f(  105,  -4,  1 );
  glVertex3f(  105,  -4, -1 );
  glVertex3f( 75,  -4, -1 );
  glVertex3f( 75,  -4,  1 );
  glEnd();

  // LADO INFERIOR: lado rojo
  glBegin(GL_POLYGON);
  glColor3f(   1.0,  0.0,  0.0 );
  glVertex3f(  105, -2, -1 );
  glVertex3f(  105, -2,  1 );
  glVertex3f( 75, -2,  1 );
  glVertex3f( 75, -2, -1 );
  glEnd();

//---------------------------------------------PRIMER CUBO SEGUNDA SECCIÓN
glBegin(GL_POLYGON);
  glColor3f( 1.0, 1.0, 0.0 );
  glVertex3f(  89, 6, -1 );
  glVertex3f(  89,  8, -1 );
  glVertex3f( 87,  8, -1 );
  glVertex3f( 87, 6, -1 );
  glEnd();

  // LADO TRASERO: lado cian
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0, 1.0 );
  glVertex3f(  89, 6, 1 );
  glVertex3f(  89,  8, 1 );
  glVertex3f( 87,  8, 1 );
  glVertex3f( 87, 6, 1 );
  glEnd();

  // LADO DERECHO: lado morado
  glBegin(GL_POLYGON);
  glColor3f(  1.0,  0.0,  1.0 );
  glVertex3f( 89, 6, -1 );
  glVertex3f( 89,  8, -1 );
  glVertex3f( 89,  8,  1 );
  glVertex3f( 89, 6,  1 );
  glEnd();

  // LADO IZQUIERDO: lado verde
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0,  0.0 );
  glVertex3f( 87, 6,  1 );
  glVertex3f( 87,  8,  1 );
  glVertex3f( 87,  8, -1 );
  glVertex3f( 87, 6, -1 );
  glEnd();

  // LADO SUPERIOR: lado azul
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  0.0,  1.0 );
  glVertex3f(  89,  6,  1 );
  glVertex3f(  89,  6, -1 );
  glVertex3f( 87,  6, -1 );
  glVertex3f( 87,  6,  1 );
  glEnd();

  // LADO INFERIOR: lado rojo
  glBegin(GL_POLYGON);
  glColor3f(   1.0,  0.0,  0.0 );
  glVertex3f(  89, 8, -1 );
  glVertex3f(  89, 8,  1 );
  glVertex3f( 87, 8,  1 );
  glVertex3f( 87, 8, -1 );
  glEnd();

  //caja misterio N2 posición 23
  //-----------------------------------------------------------------------------------------------------
   glBegin(GL_POLYGON);
  glColor3f( 0.0, 1.0, 0.0 );
  glVertex3f(  91, 6, -1 );
  glVertex3f(  91,  8, -1 );
  glVertex3f( 89,  8, -1 );
  glVertex3f( 89, 6, -1 );
  glEnd();

  // LADO TRASERO: lado cian
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0, 1.0 );
  glVertex3f(  91, 6, 1 );
  glVertex3f(  91,  8, 1 );
  glVertex3f( 89,  8, 1 );
  glVertex3f( 89, 6, 1 );
  glEnd();

  // LADO DERECHO: lado morado
  glBegin(GL_POLYGON);
  glColor3f(  1.0,  0.0,  1.0 );
  glVertex3f( 91, 6, -1 );
  glVertex3f( 91,  8, -1 );
  glVertex3f( 91,  8,  1 );
  glVertex3f( 91, 6,  1 );
  glEnd();

  // LADO IZQUIERDO: lado verde
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0,  0.0 );
  glVertex3f( 89, 6,  1 );
  glVertex3f( 89,  8,  1 );
  glVertex3f( 89,  8, -1 );
  glVertex3f( 89, 6, -1 );
  glEnd();

  // LADO SUPERIOR: lado azul
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  0.0,  1.0 );
  glVertex3f(  91,  6,  1 );
  glVertex3f(  91,  6, -1 );
  glVertex3f( 89,  6, -1 );
  glVertex3f( 89,  6,  1 );
  glEnd();

  // LADO INFERIOR: lado rojo
  glBegin(GL_POLYGON);
  glColor3f(   1.0,  0.0,  0.0 );
  glVertex3f(  91, 8, -1 );
  glVertex3f(  91, 8,  1 );
  glVertex3f( 89, 8,  1 );
  glVertex3f( 89, 8, -1 );
  glEnd();

  //LADRILLO CUBO 3 POS 25---------------------------------------------
   glBegin(GL_POLYGON);
  glColor3f( 1.0, 1.0, 0.0 );
  glVertex3f(  93, 6, -1 );
  glVertex3f(  93,  8, -1 );
  glVertex3f( 91,  8, -1 );
  glVertex3f( 91, 6, -1 );
  glEnd();

  // LADO TRASERO: lado cian
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0, 1.0 );
  glVertex3f(  93, 6, 1 );
  glVertex3f(  93,  8, 1 );
  glVertex3f( 91,  8, 1 );
  glVertex3f( 91, 6, 1 );
  glEnd();

  // LADO DERECHO: lado morado
  glBegin(GL_POLYGON);
  glColor3f(  1.0,  0.0,  1.0 );
  glVertex3f( 93, 6, -1 );
  glVertex3f( 93,  8, -1 );
  glVertex3f( 91,  8,  1 );
  glVertex3f( 91, 6,  1 );
  glEnd();

  // LADO IZQUIERDO: lado verde
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0,  0.0 );
  glVertex3f( 93, 6,  1 );
  glVertex3f( 93,  8,  1 );
  glVertex3f( 93,  8, -1 );
  glVertex3f( 93, 6, -1 );
  glEnd();

  // LADO SUPERIOR: lado azul
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  0.0,  1.0 );
  glVertex3f(  91,  6,  1 );
  glVertex3f(  91,  6, -1 );
  glVertex3f( 91,  6, -1 );
  glVertex3f( 91,  6,  1 );
  glEnd();

  // LADO INFERIOR: lado rojo
  glBegin(GL_POLYGON);
  glColor3f(   1.0,  0.0,  0.0 );
  glVertex3f(  93, 8, -1 );
  glVertex3f(  93, 8,  1 );
  glVertex3f( 91, 8,  1 );
  glVertex3f( 91, 8, -1 );
  glEnd();

//  ------------------ARRIBA SECCIÓN 2
  glBegin(GL_POLYGON);
  glColor3f( 1.0, 1.0, 0.0 );
  glVertex3f(  111, 14, -1 );
  glVertex3f(  111,  16, -1 );
  glVertex3f( 93,  16, -1 );
  glVertex3f( 93, 14, -1 );
  glEnd();

  // LADO TRASERO: lado cian
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0, 1.0 );
  glVertex3f(  111, 14, 1 );
  glVertex3f(  111,  16, 1 );
  glVertex3f( 93,  16, 1 );
  glVertex3f( 93, 14, 1 );
  glEnd();

  // LADO DERECHO: lado morado
  glBegin(GL_POLYGON);
  glColor3f(  1.0,  0.0,  1.0 );
  glVertex3f( 111, 14, -1 );
  glVertex3f( 111,  16, -1 );
  glVertex3f( 111,  16,  1 );
  glVertex3f( 111, 14,  1 );
  glEnd();

  // LADO IZQUIERDO: lado verde
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0,  0.0 );
  glVertex3f( 93, 14,  1 );
  glVertex3f( 93,  16,  1 );
  glVertex3f( 93,  16, -1 );
  glVertex3f( 93, 14, -1 );
  glEnd();

  // LADO SUPERIOR: lado azul
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  0.0,  1.0 );
  glVertex3f(  111,  14,  1 );
  glVertex3f(  111,  14, -1 );
  glVertex3f( 93,  14, -1 );
  glVertex3f( 93,  14,  1 );
  glEnd();

  // LADO INFERIOR: lado rojo
  glBegin(GL_POLYGON);
  glColor3f(   1.0,  0.0,  0.0 );
  glVertex3f(  111, 16, -1 );
  glVertex3f(  111, 16,  1 );
  glVertex3f( 93, 16,  1 );
  glVertex3f( 93, 16, -1 );
  glEnd();

//  ------------------------TERCERA PARTE-----

 glBegin(GL_POLYGON);
  glColor3f( 1.0, 1.0, 0.0 );
  glVertex3f(  241, -2, -1 );
  glVertex3f(  241,  0, -1 );
  glVertex3f( 113,  0, -1 );
  glVertex3f( 113, -2, -1 );
  glEnd();

  // LADO TRASERO: lado cian
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0, 1.0 );
  glVertex3f(  241, -2, 1 );
  glVertex3f(  241,  0, 1 );
  glVertex3f( 113,  0, 1 );
  glVertex3f( 113, -2, 1 );
  glEnd();

  // LADO DERECHO: lado morado
  glBegin(GL_POLYGON);
  glColor3f(  1.0,  0.0,  1.0 );
  glVertex3f( 241, -2, -1 );
  glVertex3f( 241,  0, -1 );
  glVertex3f( 241,  0,  1 );
  glVertex3f( 241, -2,  1 );
  glEnd();

  // LADO IZQUIERDO: lado verde
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0,  0.0 );
  glVertex3f( 113, -2,  1 );
  glVertex3f( 113,  0,  1 );
  glVertex3f( 113,  0, -1 );
  glVertex3f( 113, -2, -1 );
  glEnd();

  // LADO SUPERIOR: lado azul
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  0.0,  1.0 );
  glVertex3f(  241,  -2,  1 );
  glVertex3f(  241,  -2, -1 );
  glVertex3f( 113,  -2, -1 );
  glVertex3f( 113,  -2,  1 );
  glEnd();

  // LADO INFERIOR: lado rojo
  glBegin(GL_POLYGON);
  glColor3f(   1.0,  0.0,  0.0 );
  glVertex3f(  241, 0, -1 );
  glVertex3f(  241, 0,  1 );
  glVertex3f( 113, 0,  1 );
  glVertex3f( 113, 0, -1 );
  glEnd();

  //RECTANGULO DE ABAJO
  glBegin(GL_POLYGON);
  glColor3f( 1.0, 1.0, 0.0 );
  glVertex3f(  241, -4, -1 );
  glVertex3f(  241,  -2, -1 );
  glVertex3f( 113,  -2, -1 );
  glVertex3f( 113, -4, -1 );
  glEnd();

  // LADO TRASERO: lado cian
  glBegin(GL_POLYGON);
  glColor3f(   1.0,  0.0, 1.0 );
  glVertex3f(  241, -4, 1 );
  glVertex3f(  241,  -2, 1 );
  glVertex3f( 113,  -2, 1 );
  glVertex3f( 113, -4, 1 );
  glEnd();

  // LADO DERECHO: lado morado
  glBegin(GL_POLYGON);
  glColor3f(  1.0,  0.0,  1.0 );
  glVertex3f( 241, -4, -1 );
  glVertex3f( 241,  -2, -1 );
  glVertex3f( 241,  -2,  1 );
  glVertex3f( 241, -4,  1 );
  glEnd();

  // LADO IZQUIERDO: lado verde
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0,  0.0 );
  glVertex3f( 113, -4,  1 );
  glVertex3f( 113,  -2,  1 );
  glVertex3f( 113,  -2, -1 );
  glVertex3f( 113, -4, -1 );
  glEnd();

  // LADO SUPERIOR: lado azul
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  0.0,  1.0 );
  glVertex3f(  241,  -4,  1 );
  glVertex3f(  241,  -4, -1 );
  glVertex3f( 113,  -4, -1 );
  glVertex3f( 113,  -4,  1 );
  glEnd();

  // LADO INFERIOR: lado rojo
  glBegin(GL_POLYGON);
  glColor3f(   1.0,  0.0,  0.0 );
  glVertex3f(  241, -2, -1 );
  glVertex3f(  241, -2,  1 );
  glVertex3f( 113, -2,  1 );
  glVertex3f( 113, -2, -1 );
  glEnd();

  //--------------------PRIMER CUBO DE LA SECCIÓN 3

  glBegin(GL_POLYGON);
  glColor3f( 1.0, 1.0, 0.0 );
  glVertex3f(  122, 14, -1 );
  glVertex3f(  122,  16, -1 );
  glVertex3f( 117,  16, -1 );
  glVertex3f( 117, 14, -1 );
  glEnd();

  // LADO TRASERO: lado cian
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0, 1.0 );
  glVertex3f(  122, 14, 1 );
  glVertex3f(  122,  16, 1 );
  glVertex3f( 117,  16, 1 );
  glVertex3f( 117, 14, 1 );
  glEnd();

  // LADO DERECHO: lado morado
  glBegin(GL_POLYGON);
  glColor3f(  1.0,  0.0,  1.0 );
  glVertex3f( 122, 14, -1 );
  glVertex3f( 122,  16, -1 );
  glVertex3f( 122,  16,  1 );
  glVertex3f( 122, 14,  1 );
  glEnd();

  // LADO IZQUIERDO: lado verde
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0,  0.0 );
  glVertex3f( 117, 14,  1 );
  glVertex3f( 117,  16,  1 );
  glVertex3f( 117,  16, -1 );
  glVertex3f( 117, 14, -1 );
  glEnd();

  // LADO SUPERIOR: lado azul
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  0.0,  1.0 );
  glVertex3f(  122,  14,  1 );
  glVertex3f(  122,  14, -1 );
  glVertex3f( 117,  14, -1 );
  glVertex3f( 117,  14,  1 );
  glEnd();

  // LADO INFERIOR: lado rojo
  glBegin(GL_POLYGON);
  glColor3f(   1.0,  0.0,  0.0 );
  glVertex3f(  122, 16, -1 );
  glVertex3f(  122, 16,  1 );
  glVertex3f( 117, 16,  1 );
  glVertex3f( 117, 16, -1 );
  glEnd();

  //    -------------CUBO MISTERIO ARRIBA
  glBegin(GL_POLYGON);
  glColor3f( 1.0, 1.0, 0.0 );
  glVertex3f(  124, 14, -1 );
  glVertex3f(  124,  16, -1 );
  glVertex3f( 122,  16, -1 );
  glVertex3f( 122, 14, -1 );
  glEnd();

  // LADO TRASERO: lado cian
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0, 1.0 );
  glVertex3f(  124, 14, 1 );
  glVertex3f(  124,  16, 1 );
  glVertex3f( 122,  16, 1 );
  glVertex3f( 122, 14, 1 );
  glEnd();

  // LADO DERECHO: lado morado
  glBegin(GL_POLYGON);
  glColor3f(  1.0,  0.0,  1.0 );
  glVertex3f( 124, 14, -1 );
  glVertex3f( 124,  16, -1 );
  glVertex3f( 124,  16,  1 );
  glVertex3f( 124, 14,  1 );
  glEnd();

  // LADO IZQUIERDO: lado verde
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0,  0.0 );
  glVertex3f( 122, 14,  1 );
  glVertex3f( 122,  16,  1 );
  glVertex3f( 122,  16, -1 );
  glVertex3f( 122, 14, -1 );
  glEnd();

  // LADO SUPERIOR: lado azul
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  0.0,  1.0 );
  glVertex3f(  124,  14,  1 );
  glVertex3f(  124,  14, -1 );
  glVertex3f( 122,  14, -1 );
  glVertex3f( 122,  14,  1 );
  glEnd();

  // LADO INFERIOR: lado rojo
  glBegin(GL_POLYGON);
  glColor3f(   1.0,  0.0,  0.0 );
  glVertex3f(  124, 16, -1 );
  glVertex3f(  124, 16,  1 );
  glVertex3f( 122, 16,  1 );
  glVertex3f( 122, 16, -1 );
  glEnd();

//  ----------------------------CUBO MONEDA INFINITA
  glBegin(GL_POLYGON);
  glColor3f( 1.0, 1.0, 0.0 );
  glVertex3f(  124, 6, -1 );
  glVertex3f(  124,  8, -1 );
  glVertex3f( 122,  8, -1 );
  glVertex3f( 122, 6, -1 );
  glEnd();

  // LADO TRASERO: lado cian
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0, 1.0 );
  glVertex3f(  124, 6, 1 );
  glVertex3f(  124,  8, 1 );
  glVertex3f( 122,  8, 1 );
  glVertex3f( 122, 6, 1 );
  glEnd();

  // LADO DERECHO: lado morado
  glBegin(GL_POLYGON);
  glColor3f(  1.0,  0.0,  1.0 );
  glVertex3f( 124, 6, -1 );
  glVertex3f( 124,  8, -1 );
  glVertex3f( 124,  8,  1 );
  glVertex3f( 124, 6,  1 );
  glEnd();

  // LADO IZQUIERDO: lado verde
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0,  0.0 );
  glVertex3f( 122, 6,  1 );
  glVertex3f( 122,  8,  1 );
  glVertex3f( 122,  8, -1 );
  glVertex3f( 122, 6, -1 );
  glEnd();

  // LADO SUPERIOR: lado azul
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  0.0,  1.0 );
  glVertex3f(  124,  6,  1 );
  glVertex3f(  124,  6, -1 );
  glVertex3f(  122,  6, -1 );
  glVertex3f( 122,  6,  1 );
  glEnd();

  // LADO INFERIOR: lado rojo
  glBegin(GL_POLYGON);
  glColor3f(   1.0,  0.0,  0.0 );
  glVertex3f(  124, 8, -1 );
  glVertex3f(  124, 8,  1 );
  glVertex3f( 122, 8,  1 );
  glVertex3f( 122, 8, -1 );
  glEnd();

  //--------------------------------------cubo al lado estrella
   glBegin(GL_POLYGON);
  glColor3f( 1.0, 1.0, 0.0 );
  glVertex3f(  134, 6, -1 );
  glVertex3f(  134,  8, -1 );
  glVertex3f( 132,  8, -1 );
  glVertex3f( 132, 6, -1 );
  glEnd();

  // LADO TRASERO: lado cian
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0, 1.0 );
  glVertex3f(  134, 6, 1 );
  glVertex3f(  134,  8, 1 );
  glVertex3f( 132,  8, 1 );
  glVertex3f( 132, 6, 1 );
  glEnd();

  // LADO DERECHO: lado morado
  glBegin(GL_POLYGON);
  glColor3f(  1.0,  0.0,  1.0 );
  glVertex3f( 134, 6, -1 );
  glVertex3f( 134,  8, -1 );
  glVertex3f( 134,  8,  1 );
  glVertex3f( 134, 6,  1 );
  glEnd();

  // LADO IZQUIERDO: lado verde
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0,  0.0 );
  glVertex3f( 132, 6,  1 );
  glVertex3f( 132,  8,  1 );
  glVertex3f( 132,  8, -1 );
  glVertex3f( 132, 6, -1 );
  glEnd();

  // LADO SUPERIOR: lado azul
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  0.0,  1.0 );
  glVertex3f(  134,  6,  1 );
  glVertex3f(  134,  6, -1 );
  glVertex3f(  132,  6, -1 );
  glVertex3f( 132,  6,  1 );
  glEnd();

  // LADO INFERIOR: lado rojo
  glBegin(GL_POLYGON);
  glColor3f(   1.0,  0.0,  0.0 );
  glVertex3f(  134, 8, -1 );
  glVertex3f(  134, 8,  1 );
  glVertex3f( 132, 8,  1 );
  glVertex3f( 132, 8, -1 );
  glEnd();

  //--------------------------CUBO ESTRELLA
   glBegin(GL_POLYGON);
  glColor3f( 1.0, 1.0, 0.0 );
  glVertex3f(  136, 6, -1 );
  glVertex3f(  136,  8, -1 );
  glVertex3f( 134,  8, -1 );
  glVertex3f( 134, 6, -1 );
  glEnd();

  // LADO TRASERO: lado cian
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0, 1.0 );
  glVertex3f(  136, 6, 1 );
  glVertex3f(  136,  8, 1 );
  glVertex3f( 134,  8, 1 );
  glVertex3f( 134, 6, 1 );
  glEnd();

  // LADO DERECHO: lado morado
  glBegin(GL_POLYGON);
  glColor3f(  1.0,  0.0,  1.0 );
  glVertex3f( 136, 6, -1 );
  glVertex3f( 136,  8, -1 );
  glVertex3f( 136,  8,  1 );
  glVertex3f( 136, 6,  1 );
  glEnd();

  // LADO IZQUIERDO: lado verde
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0,  0.0 );
  glVertex3f( 134, 6,  1 );
  glVertex3f( 134,  8,  1 );
  glVertex3f( 134,  8, -1 );
  glVertex3f( 134, 6, -1 );
  glEnd();

  // LADO SUPERIOR: lado azul
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  0.0,  1.0 );
  glVertex3f(  136,  6,  1 );
  glVertex3f(  136,  6, -1 );
  glVertex3f(  134,  6, -1 );
  glVertex3f( 134,  6,  1 );
  glEnd();

  // LADO INFERIOR: lado rojo
  glBegin(GL_POLYGON);
  glColor3f(   1.0,  0.0,  0.0 );
  glVertex3f(  136, 8, -1 );
  glVertex3f(  136, 8,  1 );
  glVertex3f( 134, 8,  1 );
  glVertex3f( 134, 8, -1 );
  glEnd();


  //---------------------PIMER SALTO CONTINUO
   glBegin(GL_POLYGON);
  glColor3f( 1.0, 1.0, 0.0 );
  glVertex3f(  146, 6, -1 );
  glVertex3f(  146,  8, -1 );
  glVertex3f( 144,  8, -1 );
  glVertex3f( 144, 6, -1 );
  glEnd();

  // LADO TRASERO: lado cian
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0, 1.0 );
  glVertex3f(  146, 6, 1 );
  glVertex3f(  146,  8, 1 );
  glVertex3f( 144,  8, 1 );
  glVertex3f( 144, 6, 1 );
  glEnd();

  // LADO DERECHO: lado morado
  glBegin(GL_POLYGON);
  glColor3f(  1.0,  0.0,  1.0 );
  glVertex3f( 146, 6, -1 );
  glVertex3f( 146,  8, -1 );
  glVertex3f( 146,  8,  1 );
  glVertex3f( 146, 6,  1 );
  glEnd();

  // LADO IZQUIERDO: lado verde
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0,  0.0 );
  glVertex3f( 144, 6,  1 );
  glVertex3f( 144,  8,  1 );
  glVertex3f( 144,  8, -1 );
  glVertex3f( 144, 6, -1 );
  glEnd();

  // LADO SUPERIOR: lado azul
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  0.0,  1.0 );
  glVertex3f(  146,  6,  1 );
  glVertex3f(  146,  6, -1 );
  glVertex3f(  144,  6, -1 );
  glVertex3f( 144,  6,  1 );
  glEnd();

  // LADO INFERIOR: lado rojo
  glBegin(GL_POLYGON);
  glColor3f(   1.0,  0.0,  0.0 );
  glVertex3f(  146, 8, -1 );
  glVertex3f(  146, 8,  1 );
  glVertex3f( 144, 8,  1 );
  glVertex3f( 144, 8, -1 );
  glEnd();

  //---------------------SEGUNDO SALTO CONTINUO
   glBegin(GL_POLYGON);
  glColor3f( 1.0, 1.0, 0.0 );
  glVertex3f(  152, 6, -1 );
  glVertex3f(  152,  8, -1 );
  glVertex3f( 150,  8, -1 );
  glVertex3f( 150, 6, -1 );
  glEnd();

  // LADO TRASERO: lado cian
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0, 1.0 );
  glVertex3f(  152, 6, 1 );
  glVertex3f(  152,  8, 1 );
  glVertex3f( 150,  8, 1 );
  glVertex3f( 150, 6, 1 );
  glEnd();

  // LADO DERECHO: lado morado
  glBegin(GL_POLYGON);
  glColor3f(  1.0,  0.0,  1.0 );
  glVertex3f( 152, 6, -1 );
  glVertex3f( 152,  8, -1 );
  glVertex3f( 152,  8,  1 );
  glVertex3f( 152, 6,  1 );
  glEnd();

  // LADO IZQUIERDO: lado verde
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0,  0.0 );
  glVertex3f( 150, 6,  1 );
  glVertex3f( 150,  8,  1 );
  glVertex3f( 150,  8, -1 );
  glVertex3f( 150, 6, -1 );
  glEnd();

  // LADO SUPERIOR: lado azul
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  0.0,  1.0 );
  glVertex3f(  152,  6,  1 );
  glVertex3f(  152,  6, -1 );
  glVertex3f(  150,  6, -1 );
  glVertex3f( 150,  6,  1 );
  glEnd();

  // LADO INFERIOR: lado rojo
  glBegin(GL_POLYGON);
  glColor3f(   1.0,  0.0,  0.0 );
  glVertex3f(  152, 8, -1 );
  glVertex3f(  152, 8,  1 );
  glVertex3f( 150, 8,  1 );
  glVertex3f( 150, 8, -1 );
  glEnd();

  //----------------------------SEGUNDO SALTO CONTINUO ARRIBA
 glBegin(GL_POLYGON);
  glColor3f( 1.0, 1.0, 0.0 );
  glVertex3f(  152, 14, -1 );
  glVertex3f(  152,  16, -1 );
  glVertex3f( 150,  16, -1 );
  glVertex3f( 150, 14, -1 );
  glEnd();

  // LADO TRASERO: lado cian
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0, 1.0 );
  glVertex3f(  152, 14, 1 );
  glVertex3f(  152,  16, 1 );
  glVertex3f( 150,  16, 1 );
  glVertex3f( 150, 14, 1 );
  glEnd();

  // LADO DERECHO: lado morado
  glBegin(GL_POLYGON);
  glColor3f(  1.0,  0.0,  1.0 );
  glVertex3f( 152, 14, -1 );
  glVertex3f( 152,  16, -1 );
  glVertex3f( 152,  16,  1 );
  glVertex3f( 152, 14,  1 );
  glEnd();

  // LADO IZQUIERDO: lado verde
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0,  0.0 );
  glVertex3f( 150, 14,  1 );
  glVertex3f( 150,  16,  1 );
  glVertex3f( 150,  16, -1 );
  glVertex3f( 150, 14, -1 );
  glEnd();

  // LADO SUPERIOR: lado azul
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  0.0,  1.0 );
  glVertex3f(  152, 14,  1 );
  glVertex3f(  152,  14, -1 );
  glVertex3f(  150,  14, -1 );
  glVertex3f( 150,  14,  1 );
  glEnd();

  // LADO INFERIOR: lado rojo
  glBegin(GL_POLYGON);
  glColor3f(   1.0,  0.0,  0.0 );
  glVertex3f(  152, 16, -1 );
  glVertex3f(  152, 16,  1 );
  glVertex3f( 150, 16,  1 );
  glVertex3f( 150, 16, -1 );
  glEnd();

  //--------------------------------TERCER SALTO
   glBegin(GL_POLYGON);
  glColor3f( 1.0, 1.0, 0.0 );
  glVertex3f(  158, 6, -1 );
  glVertex3f(  158,  8, -1 );
  glVertex3f( 156,  8, -1 );
  glVertex3f( 156, 6, -1 );
  glEnd();

  // LADO TRASERO: lado cian
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0, 1.0 );
  glVertex3f(  158, 6, 1 );
  glVertex3f(  158,  8, 1 );
  glVertex3f( 156,  8, 1 );
  glVertex3f( 156, 6, 1 );
  glEnd();

  // LADO DERECHO: lado morado
  glBegin(GL_POLYGON);
  glColor3f(  1.0,  0.0,  1.0 );
  glVertex3f( 158, 6, -1 );
  glVertex3f( 158,  8, -1 );
  glVertex3f( 158,  8,  1 );
  glVertex3f( 158, 6,  1 );
  glEnd();

  // LADO IZQUIERDO: lado verde
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0,  0.0 );
  glVertex3f( 156, 6,  1 );
  glVertex3f( 156,  8,  1 );
  glVertex3f( 156,  8, -1 );
  glVertex3f( 156, 6, -1 );
  glEnd();

  // LADO SUPERIOR: lado azul
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  0.0,  1.0 );
  glVertex3f(  158,  6,  1 );
  glVertex3f(  158,  6, -1 );
  glVertex3f(  156,  6, -1 );
  glVertex3f( 156,  6,  1 );
  glEnd();

  // LADO INFERIOR: lado rojo
  glBegin(GL_POLYGON);
  glColor3f(   1.0,  0.0,  0.0 );
  glVertex3f(  158, 8, -1 );
  glVertex3f(  158, 8,  1 );
  glVertex3f( 156, 8,  1 );
  glVertex3f( 156, 8, -1 );
  glEnd();

  //---------------------------CURTO SALTO
   glBegin(GL_POLYGON);
  glColor3f( 1.0, 1.0, 0.0 );
  glVertex3f(  168, 6, -1 );
  glVertex3f(  168,  8, -1 );
  glVertex3f( 166,  8, -1 );
  glVertex3f( 166, 6, -1 );
  glEnd();

  // LADO TRASERO: lado cian
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0, 1.0 );
  glVertex3f(  168, 6, 1 );
  glVertex3f(  168,  8, 1 );
  glVertex3f( 166,  8, 1 );
  glVertex3f( 166, 6, 1 );
  glEnd();

  // LADO DERECHO: lado morado
  glBegin(GL_POLYGON);
  glColor3f(  1.0,  0.0,  1.0 );
  glVertex3f( 168, 6, -1 );
  glVertex3f( 168,  8, -1 );
  glVertex3f( 168,  8,  1 );
  glVertex3f( 168, 6,  1 );
  glEnd();

  // LADO IZQUIERDO: lado verde
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0,  0.0 );
  glVertex3f( 166, 6,  1 );
  glVertex3f( 166,  8,  1 );
  glVertex3f( 166,  8, -1 );
  glVertex3f( 166, 6, -1 );
  glEnd();

  // LADO SUPERIOR: lado azul
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  0.0,  1.0 );
  glVertex3f(  168,  6,  1 );
  glVertex3f(  168,  6, -1 );
  glVertex3f(  166,  6, -1 );
  glVertex3f( 166,  6,  1 );
  glEnd();

  // LADO INFERIOR: lado rojo
  glBegin(GL_POLYGON);
  glColor3f(   1.0,  0.0,  0.0 );
  glVertex3f(  168, 8, -1 );
  glVertex3f(  168, 8,  1 );
  glVertex3f( 166, 8,  1 );
  glVertex3f( 166, 8, -1 );
  glEnd();

//-------------------------------------------CUBO SALTO ARRIBA
glBegin(GL_POLYGON);
  glColor3f( 1.0, 1.0, 0.0 );
  glVertex3f(  178, 14, -1 );
  glVertex3f(  178,  16, -1 );
  glVertex3f( 172,  16, -1 );
  glVertex3f( 172, 14, -1 );
  glEnd();

  // LADO TRASERO: lado cian
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0, 1.0 );
  glVertex3f(  178, 14, 1 );
  glVertex3f(  178,  16, 1 );
  glVertex3f( 172,  16, 1 );
  glVertex3f( 172, 14, 1 );
  glEnd();

  // LADO DERECHO: lado morado
  glBegin(GL_POLYGON);
  glColor3f(  1.0,  0.0,  1.0 );
  glVertex3f( 178, 14, -1 );
  glVertex3f( 178,  16, -1 );
  glVertex3f( 178,  16,  1 );
  glVertex3f( 178, 14,  1 );
  glEnd();

  // LADO IZQUIERDO: lado verde
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0,  0.0 );
  glVertex3f( 172, 14,  1 );
  glVertex3f( 172,  16,  1 );
  glVertex3f( 172,  16, -1 );
  glVertex3f( 172, 14, -1 );
  glEnd();

  // LADO SUPERIOR: lado azul
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  0.0,  1.0 );
  glVertex3f(  178, 14,  1 );
  glVertex3f(  178,  14, -1 );
  glVertex3f(  172,  14, -1 );
  glVertex3f( 172,  14,  1 );
  glEnd();

  // LADO INFERIOR: lado rojo
  glBegin(GL_POLYGON);
  glColor3f(   1.0,  0.0,  0.0 );
  glVertex3f(  178, 16, -1 );
  glVertex3f(  178, 16,  1 );
  glVertex3f( 172, 16,  1 );
  glVertex3f( 172, 16, -1 );
  glEnd();

  //---------------------ESPACIO CON 8 ESPACIO
  glBegin(GL_POLYGON);
  glColor3f( 1.0, 1.0, 0.0 );
  glVertex3f(  188, 14, -1 );
  glVertex3f(  188,  16, -1 );
  glVertex3f( 186,  16, -1 );
  glVertex3f( 186, 14, -1 );
  glEnd();

  // LADO TRASERO: lado cian
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0, 1.0 );
  glVertex3f(  188, 14, 1 );
  glVertex3f(  188,  16, 1 );
  glVertex3f( 186,  16, 1 );
  glVertex3f( 186, 14, 1 );
  glEnd();

  // LADO DERECHO: lado morado
  glBegin(GL_POLYGON);
  glColor3f(  1.0,  0.0,  1.0 );
  glVertex3f( 188, 14, -1 );
  glVertex3f( 188,  16, -1 );
  glVertex3f( 188,  16,  1 );
  glVertex3f( 188, 14,  1 );
  glEnd();

  // LADO IZQUIERDO: lado verde
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0,  0.0 );
  glVertex3f( 186, 14,  1 );
  glVertex3f( 186,  16,  1 );
  glVertex3f( 186,  16, -1 );
  glVertex3f( 186, 14, -1 );
  glEnd();

  // LADO SUPERIOR: lado azul
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  0.0,  1.0 );
  glVertex3f(  188, 14,  1 );
  glVertex3f(  188,  14, -1 );
  glVertex3f(  186,  14, -1 );
  glVertex3f( 186,  14,  1 );
  glEnd();

  // LADO INFERIOR: lado rojo
  glBegin(GL_POLYGON);
  glColor3f(   1.0,  0.0,  0.0 );
  glVertex3f(  188, 16, -1 );
  glVertex3f(  188, 16,  1 );
  glVertex3f( 186, 16,  1 );
  glVertex3f( 186, 16, -1 );
  glEnd();

  //-------------------SUBO SORPRESA
   glBegin(GL_POLYGON);
  glColor3f( 1.0, 1.0, 0.0 );
  glVertex3f(  190, 14, -1 );
  glVertex3f(  190,  16, -1 );
  glVertex3f( 188,  16, -1 );
  glVertex3f( 188, 14, -1 );
  glEnd();

  // LADO TRASERO: lado cian
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0, 1.0 );
  glVertex3f(  190, 14, 1 );
  glVertex3f(  190,  16, 1 );
  glVertex3f( 188,  16, 1 );
  glVertex3f( 188, 14, 1 );
  glEnd();

  // LADO DERECHO: lado morado
  glBegin(GL_POLYGON);
  glColor3f(  1.0,  0.0,  1.0 );
  glVertex3f( 190, 14, -1 );
  glVertex3f( 190,  16, -1 );
  glVertex3f( 190,  16,  1 );
  glVertex3f( 190, 14,  1 );
  glEnd();

  // LADO IZQUIERDO: lado verde
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0,  0.0 );
  glVertex3f( 188, 14,  1 );
  glVertex3f( 188,  16,  1 );
  glVertex3f( 188,  16, -1 );
  glVertex3f( 188, 14, -1 );
  glEnd();

  // LADO SUPERIOR: lado azul
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  0.0,  1.0 );
  glVertex3f(  190, 14,  1 );
  glVertex3f(  190,  14, -1 );
  glVertex3f(  188,  14, -1 );
  glVertex3f( 188,  14,  1 );
  glEnd();

  // LADO INFERIOR: lado rojo
  glBegin(GL_POLYGON);
  glColor3f(   1.0,  0.0,  0.0 );
  glVertex3f(  190, 16, -1 );
  glVertex3f(  190, 16,  1 );
  glVertex3f( 188, 16,  1 );
  glVertex3f( 188, 16, -1 );
  glEnd();

  //--------------------CUBO SORPRESA 2
  glBegin(GL_POLYGON);
  glColor3f( 1.0, 1.0, 0.0 );
  glVertex3f(  192, 14, -1 );
  glVertex3f(  192,  16, -1 );
  glVertex3f( 190,  16, -1 );
  glVertex3f( 190, 14, -1 );
  glEnd();

  // LADO TRASERO: lado cian
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0, 1.0 );
  glVertex3f(  192, 14, 1 );
  glVertex3f(  192,  16, 1 );
  glVertex3f( 190,  16, 1 );
  glVertex3f( 190, 14, 1 );
  glEnd();

  // LADO DERECHO: lado morado
  glBegin(GL_POLYGON);
  glColor3f(  1.0,  0.0,  1.0 );
  glVertex3f( 192, 14, -1 );
  glVertex3f( 192,  16, -1 );
  glVertex3f( 192,  16,  1 );
  glVertex3f( 192, 14,  1 );
  glEnd();

  // LADO IZQUIERDO: lado verde
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0,  0.0 );
  glVertex3f( 190, 14,  1 );
  glVertex3f( 190,  16,  1 );
  glVertex3f( 190,  16, -1 );
  glVertex3f( 190, 14, -1 );
  glEnd();

  // LADO SUPERIOR: lado azul
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  0.0,  1.0 );
  glVertex3f(  192, 14,  1 );
  glVertex3f(  192,  14, -1 );
  glVertex3f(  190,  14, -1 );
  glVertex3f( 190,  14,  1 );
  glEnd();

  // LADO INFERIOR: lado rojo
  glBegin(GL_POLYGON);
  glColor3f(   1.0,  0.0,  0.0 );
  glVertex3f(  192, 16, -1 );
  glVertex3f(  192, 16,  1 );
  glVertex3f( 190, 16,  1 );
  glVertex3f( 190, 16, -1 );
  glEnd();


  //----------------------------CUBO DESPUPES DE LA SORPRESA
  glBegin(GL_POLYGON);
  glColor3f( 1.0, 1.0, 0.0 );
  glVertex3f(  194, 14, -1 );
  glVertex3f(  194,  16, -1 );
  glVertex3f( 192,  16, -1 );
  glVertex3f( 192, 14, -1 );
  glEnd();

  // LADO TRASERO: lado cian
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0, 1.0 );
  glVertex3f(  194, 14, 1 );
  glVertex3f(  194,  16, 1 );
  glVertex3f( 192,  16, 1 );
  glVertex3f( 192, 14, 1 );
  glEnd();

  // LADO DERECHO: lado morado
  glBegin(GL_POLYGON);
  glColor3f(  1.0,  0.0,  1.0 );
  glVertex3f( 194, 14, -1 );
  glVertex3f( 194,  16, -1 );
  glVertex3f( 194,  16,  1 );
  glVertex3f( 194, 14,  1 );
  glEnd();

  // LADO IZQUIERDO: lado verde
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0,  0.0 );
  glVertex3f( 192, 14,  1 );
  glVertex3f( 192,  16,  1 );
  glVertex3f( 192,  16, -1 );
  glVertex3f( 192, 14, -1 );
  glEnd();

  // LADO SUPERIOR: lado azul
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  0.0,  1.0 );
  glVertex3f(  194, 14,  1 );
  glVertex3f(  194,  14, -1 );
  glVertex3f(  192,  14, -1 );
  glVertex3f( 192,  14,  1 );
  glEnd();

  // LADO INFERIOR: lado rojo
  glBegin(GL_POLYGON);
  glColor3f(   1.0,  0.0,  0.0 );
  glVertex3f(  194, 16, -1 );
  glVertex3f(  194, 16,  1 );
  glVertex3f( 192, 16,  1 );
  glVertex3f( 192, 16, -1 );
  glEnd();

  //------------------CUBOS ABAJO DE LOS SALTOS
  glBegin(GL_POLYGON);
  glColor3f( 1.0, 1.0, 0.0 );
  glVertex3f(  192, 6, -1 );
  glVertex3f(  192,  8, -1 );
  glVertex3f( 188,  8, -1 );
  glVertex3f( 188, 6, -1 );
  glEnd();

  // LADO TRASERO: lado cian
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0, 1.0 );
  glVertex3f(  192, 6, 1 );
  glVertex3f(  192,  8, 1 );
  glVertex3f( 188,  8, 1 );
  glVertex3f( 188, 6, 1 );
  glEnd();

  // LADO DERECHO: lado morado
  glBegin(GL_POLYGON);
  glColor3f(  1.0,  0.0,  1.0 );
  glVertex3f( 192, 6, -1 );
  glVertex3f( 192,  8, -1 );
  glVertex3f( 188,  8,  1 );
  glVertex3f( 188, 6,  1 );
  glEnd();

  // LADO IZQUIERDO: lado verde
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0,  0.0 );
  glVertex3f( 192, 6,  1 );
  glVertex3f( 192,  8,  1 );
  glVertex3f( 188,  8, -1 );
  glVertex3f( 188, 6, -1 );
  glEnd();

  // LADO SUPERIOR: lado azul
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  0.0,  1.0 );
  glVertex3f(  192,  6,  1 );
  glVertex3f(  192,  6, -1 );
  glVertex3f(  188,  6, -1 );
  glVertex3f( 188,  6,  1 );
  glEnd();

  // LADO INFERIOR: lado rojo
  glBegin(GL_POLYGON);
  glColor3f(   1.0,  0.0,  0.0 );
  glVertex3f(  192, 8, -1 );
  glVertex3f(  192, 8,  1 );
  glVertex3f( 188, 8,  1 );
  glVertex3f( 188, 8, -1 );
  glEnd();

  //----------------PRIMER ESCALON PRIMER PIRÁMIDE
   glBegin(GL_POLYGON);
  glColor3f( 1.0, 1.0, 0.0 );
  glVertex3f(  206, 0, -1 );
  glVertex3f(  206,  2, -1 );
  glVertex3f( 198,  2, -1 );
  glVertex3f( 198, 0, -1 );
  glEnd();

  // LADO TRASERO: lado cian
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0, 1.0 );
  glVertex3f(  206, 0, 1 );
  glVertex3f(  206,  2, 1 );
  glVertex3f( 198,  2, 1 );
  glVertex3f( 198, 0, 1 );
  glEnd();

  // LADO DERECHO: lado morado
  glBegin(GL_POLYGON);
  glColor3f(  1.0,  0.0,  1.0 );
  glVertex3f( 206, 0, -1 );
  glVertex3f( 206,  2, -1 );
  glVertex3f( 206,  2,  1 );
  glVertex3f( 206, 0,  1 );
  glEnd();

  // LADO IZQUIERDO: lado verde
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0,  0.0 );
  glVertex3f( 198, 0,  1 );
  glVertex3f( 198,  2,  1 );
  glVertex3f( 198,  2, -1 );
  glVertex3f( 198, 0, -1 );
  glEnd();

  // LADO SUPERIOR: lado azul
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  0.0,  1.0 );
  glVertex3f(  206,  0,  1 );
  glVertex3f(  206,  0, -1 );
  glVertex3f(  198,  0, -1 );
  glVertex3f( 198,  0,  1 );
  glEnd();

  // LADO INFERIOR: lado rojo
  glBegin(GL_POLYGON);
  glColor3f(   1.0,  0.0,  0.0 );
  glVertex3f(  206, 2, -1 );
  glVertex3f(  206, 2,  1 );
  glVertex3f( 198, 2,  1 );
  glVertex3f( 198, 2, -1 );
  glEnd();

  //-----------------------SEGUNDO ESCALÓN PIRÁMIDE 1
  glBegin(GL_POLYGON);
  glColor3f( 1.0, 1.0, 0.0 );
  glVertex3f(  206, 2, -1 );
  glVertex3f(  206,  4, -1 );
  glVertex3f( 200,  4, -1 );
  glVertex3f( 200, 2, -1 );
  glEnd();

  // LADO TRASERO: lado cian
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0, 1.0 );
  glVertex3f(  206, 2, 1 );
  glVertex3f(  206,  4, 1 );
  glVertex3f( 200,  4, 1 );
  glVertex3f( 200, 2, 1 );
  glEnd();

  // LADO DERECHO: lado morado
  glBegin(GL_POLYGON);
  glColor3f(  1.0,  0.0,  1.0 );
  glVertex3f( 206, 2, -1 );
  glVertex3f( 206,  4, -1 );
  glVertex3f( 206,  4,  1 );
  glVertex3f( 206, 2,  1 );
  glEnd();

  // LADO IZQUIERDO: lado verde
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0,  0.0 );
  glVertex3f( 200, 2,  1 );
  glVertex3f( 200,  4,  1 );
  glVertex3f( 200,  4, -1 );
  glVertex3f( 200, 2, -1 );
  glEnd();

  // LADO SUPERIOR: lado azul
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  0.0,  1.0 );
  glVertex3f(  206,  2,  1 );
  glVertex3f(  206,  2, -1 );
  glVertex3f(  200,  2, -1 );
  glVertex3f( 200,  2,  1 );
  glEnd();

  // LADO INFERIOR: lado rojo
  glBegin(GL_POLYGON);
  glColor3f(   1.0,  0.0,  0.0 );
  glVertex3f(  206, 4, -1 );
  glVertex3f(  206, 4,  1 );
  glVertex3f( 200, 4,  1 );
  glVertex3f( 200, 4, -1 );
  glEnd();

 // ---------------------TERCER ESCALÓN ESCALERA 1
   glBegin(GL_POLYGON);
  glColor3f( 1.0, 1.0, 0.0 );
  glVertex3f(  206, 4, -1 );
  glVertex3f(  206,  6, -1 );
  glVertex3f( 202,  6, -1 );
  glVertex3f( 202, 4, -1 );
  glEnd();

  // LADO TRASERO: lado cian
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0, 1.0 );
  glVertex3f(  206, 4, 1 );
  glVertex3f(  206,  6, 1 );
  glVertex3f( 202,  6, 1 );
  glVertex3f( 202,4, 1 );
  glEnd();

  // LADO DERECHO: lado morado
  glBegin(GL_POLYGON);
  glColor3f(  1.0,  0.0,  1.0 );
  glVertex3f( 206, 4, -1 );
  glVertex3f( 206,  6, -1 );
  glVertex3f( 206,  6,  1 );
  glVertex3f( 206, 4,  1 );
  glEnd();

  // LADO IZQUIERDO: lado verde
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0,  0.0 );
  glVertex3f( 202, 4,  1 );
  glVertex3f( 202,  6,  1 );
  glVertex3f( 202,  6, -1 );
  glVertex3f( 202, 4, -1 );
  glEnd();

  // LADO SUPERIOR: lado azul
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  0.0,  1.0 );
  glVertex3f(  206,  4,  1 );
  glVertex3f(  206,  4, -1 );
  glVertex3f(  202,  4, -1 );
  glVertex3f( 202,  4,  1 );
  glEnd();

  // LADO INFERIOR: lado rojo
  glBegin(GL_POLYGON);
  glColor3f(   1.0,  0.0,  0.0 );
  glVertex3f(  206, 6, -1 );
  glVertex3f(  206, 6,  1 );
  glVertex3f( 202, 6,  1 );
  glVertex3f( 202, 6, -1 );
  glEnd();

  //-----------------ULTIMO ESCALON PRIMER PIRÁMIDE
   glBegin(GL_POLYGON);
  glColor3f( 1.0, 1.0, 0.0 );
  glVertex3f(  206, 6, -1 );
  glVertex3f(  206,  8, -1 );
  glVertex3f( 204,  8, -1 );
  glVertex3f( 204, 6, -1 );
  glEnd();

  // LADO TRASERO: lado cian
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0, 1.0 );
  glVertex3f(  206, 6, 1 );
  glVertex3f(  206,  8, 1 );
  glVertex3f( 204,  8, 1 );
  glVertex3f( 204, 6, 1 );
  glEnd();

  // LADO DERECHO: lado morado
  glBegin(GL_POLYGON);
  glColor3f(  1.0,  0.0,  1.0 );
  glVertex3f( 206, 6, -1 );
  glVertex3f( 206,  8, -1 );
  glVertex3f( 204,  8,  1 );
  glVertex3f( 204, 6,  1 );
  glEnd();

  // LADO IZQUIERDO: lado verde
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0,  0.0 );
  glVertex3f( 206, 6,  1 );
  glVertex3f( 206,  8,  1 );
  glVertex3f( 204,  8, -1 );
  glVertex3f( 204, 6, -1 );
  glEnd();

  // LADO SUPERIOR: lado azul
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  0.0,  1.0 );
  glVertex3f(  206,  6,  1 );
  glVertex3f(  206,  6, -1 );
  glVertex3f(  204,  6, -1 );
  glVertex3f( 204,  6,  1 );
  glEnd();

  // LADO INFERIOR: lado rojo
  glBegin(GL_POLYGON);
  glColor3f(   1.0,  0.0,  0.0 );
  glVertex3f(  206, 8, -1 );
  glVertex3f(  206, 8,  1 );
  glVertex3f( 204, 8,  1 );
  glVertex3f( 204, 8, -1 );
  glEnd();

  //-------------------------SEGUNDA ESCALERA
   glBegin(GL_POLYGON);
  glColor3f( 1.0, 1.0, 0.0 );
  glVertex3f(  218, 0, -1 );
  glVertex3f(  218,  2, -1 );
  glVertex3f( 210,  2, -1 );
  glVertex3f( 210, 0, -1 );
  glEnd();

  // LADO TRASERO: lado cian
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0, 1.0 );
  glVertex3f(  218, 0, 1 );
  glVertex3f(  218,  2, 1 );
  glVertex3f( 210,  2, 1 );
  glVertex3f( 210, 0, 1 );
  glEnd();

  // LADO DERECHO: lado morado
  glBegin(GL_POLYGON);
  glColor3f(  1.0,  0.0,  1.0 );
  glVertex3f( 218, 0, -1 );
  glVertex3f( 218,  2, -1 );
  glVertex3f( 218,  2,  1 );
  glVertex3f( 218, 0,  1 );
  glEnd();

  // LADO IZQUIERDO: lado verde
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0,  0.0 );
  glVertex3f( 210, 0,  1 );
  glVertex3f( 210,  2,  1 );
  glVertex3f( 210,  2, -1 );
  glVertex3f( 210, 0, -1 );
  glEnd();

  // LADO SUPERIOR: lado azul
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  0.0,  1.0 );
  glVertex3f(  218,  0,  1 );
  glVertex3f(  218,  0, -1 );
  glVertex3f(  210,  0, -1 );
  glVertex3f( 210,  0,  1 );
  glEnd();

  // LADO INFERIOR: lado rojo
  glBegin(GL_POLYGON);
  glColor3f(   1.0,  0.0,  0.0 );
  glVertex3f(  218, 2, -1 );
  glVertex3f(  218, 2,  1 );
  glVertex3f( 210, 2,  1 );
  glVertex3f( 210, 2, -1 );
  glEnd();

  //-----------------------SEGUNDO ESCALÓN PIRÁMIDE 1
  glBegin(GL_POLYGON);
  glColor3f( 1.0, 1.0, 0.0 );
  glVertex3f(  216, 2, -1 );
  glVertex3f(  216,  4, -1 );
  glVertex3f( 210,  4, -1 );
  glVertex3f( 210, 2, -1 );
  glEnd();

  // LADO TRASERO: lado cian
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0, 1.0 );
  glVertex3f(  216, 2, 1 );
  glVertex3f(  216,  4, 1 );
  glVertex3f( 210,  4, 1 );
  glVertex3f( 210, 2, 1 );
  glEnd();

  // LADO DERECHO: lado morado
  glBegin(GL_POLYGON);
  glColor3f(  1.0,  0.0,  1.0 );
  glVertex3f( 216, 2, -1 );
  glVertex3f( 216,  4, -1 );
  glVertex3f( 216,  4,  1 );
  glVertex3f( 216, 2,  1 );
  glEnd();

  // LADO IZQUIERDO: lado verde
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0,  0.0 );
  glVertex3f( 210, 2,  1 );
  glVertex3f( 210,  4,  1 );
  glVertex3f( 210,  4, -1 );
  glVertex3f( 210, 2, -1 );
  glEnd();

  // LADO SUPERIOR: lado azul
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  0.0,  1.0 );
  glVertex3f(  216,  2,  1 );
  glVertex3f(  216,  2, -1 );
  glVertex3f(  210,  2, -1 );
  glVertex3f( 210,  2,  1 );
  glEnd();

  // LADO INFERIOR: lado rojo
  glBegin(GL_POLYGON);
  glColor3f(   1.0,  0.0,  0.0 );
  glVertex3f(  216, 4, -1 );
  glVertex3f(  216, 4,  1 );
  glVertex3f( 210, 4,  1 );
  glVertex3f( 210, 4, -1 );
  glEnd();

 // ---------------------TERCER ESCALÓN ESCALERA 1
   glBegin(GL_POLYGON);
  glColor3f( 1.0, 1.0, 0.0 );
  glVertex3f(  214, 4, -1 );
  glVertex3f(  214,  6, -1 );
  glVertex3f( 210,  6, -1 );
  glVertex3f( 210, 4, -1 );
  glEnd();

  // LADO TRASERO: lado cian
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0, 1.0 );
  glVertex3f(  214, 4, 1 );
  glVertex3f(  214,  6, 1 );
  glVertex3f( 210,  6, 1 );
  glVertex3f( 210,4, 1 );
  glEnd();

  // LADO DERECHO: lado morado
  glBegin(GL_POLYGON);
  glColor3f(  1.0,  0.0,  1.0 );
  glVertex3f( 214, 4, -1 );
  glVertex3f( 214,  6, -1 );
  glVertex3f( 214,  6,  1 );
  glVertex3f( 214, 4,  1 );
  glEnd();

  // LADO IZQUIERDO: lado verde
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0,  0.0 );
  glVertex3f( 210, 4,  1 );
  glVertex3f( 210,  6,  1 );
  glVertex3f( 210,  6, -1 );
  glVertex3f( 210, 4, -1 );
  glEnd();

  // LADO SUPERIOR: lado azul
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  0.0,  1.0 );
  glVertex3f(  214,  4,  1 );
  glVertex3f(  214,  4, -1 );
  glVertex3f(  210,  4, -1 );
  glVertex3f( 210,  4,  1 );
  glEnd();

  // LADO INFERIOR: lado rojo
  glBegin(GL_POLYGON);
  glColor3f(   1.0,  0.0,  0.0 );
  glVertex3f(  214, 6, -1 );
  glVertex3f(  214, 6,  1 );
  glVertex3f( 210, 6,  1 );
  glVertex3f( 210, 6, -1 );
  glEnd();

  //-----------------ULTIMO ESCALON PRIMER PIRÁMIDE
   glBegin(GL_POLYGON);
  glColor3f( 1.0, 1.0, 0.0 );
  glVertex3f(  212, 6, -1 );
  glVertex3f(  212,  8, -1 );
  glVertex3f( 210,  8, -1 );
  glVertex3f( 210, 6, -1 );
  glEnd();

  // LADO TRASERO: lado cian
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0, 1.0 );
  glVertex3f(  212, 6, 1 );
  glVertex3f(  212,  8, 1 );
  glVertex3f( 210,  8, 1 );
  glVertex3f( 210, 6, 1 );
  glEnd();

  // LADO DERECHO: lado morado
  glBegin(GL_POLYGON);
  glColor3f(  1.0,  0.0,  1.0 );
  glVertex3f( 212, 6, -1 );
  glVertex3f( 212,  8, -1 );
  glVertex3f( 210,  8,  1 );
  glVertex3f( 210, 6,  1 );
  glEnd();

  // LADO IZQUIERDO: lado verde
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0,  0.0 );
  glVertex3f( 212, 6,  1 );
  glVertex3f( 212,  8,  1 );
  glVertex3f( 210,  8, -1 );
  glVertex3f( 210, 6, -1 );
  glEnd();

  // LADO SUPERIOR: lado azul
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  0.0,  1.0 );
  glVertex3f(  212,  6,  1 );
  glVertex3f(  212,  6, -1 );
  glVertex3f(  210,  6, -1 );
  glVertex3f( 210,  6,  1 );
  glEnd();

  // LADO INFERIOR: lado rojo
  glBegin(GL_POLYGON);
  glColor3f(   1.0,  0.0,  0.0 );
  glVertex3f(  212, 8, -1 );
  glVertex3f(  212, 8,  1 );
  glVertex3f( 210, 8,  1 );
  glVertex3f( 210, 8, -1 );
  glEnd();

//  --------------TERCER ESCALERA
  glBegin(GL_POLYGON);
  glColor3f( 1.0, 1.0, 0.0 );
  glVertex3f(  241, 0, -1 );
  glVertex3f(  241,  2, -1 );
  glVertex3f( 231,  2, -1 );
  glVertex3f( 231, 0, -1 );
  glEnd();

  // LADO TRASERO: lado cian
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0, 1.0 );
  glVertex3f(  241, 0, 1 );
  glVertex3f(  241,  2, 1 );
  glVertex3f( 231,  2, 1 );
  glVertex3f( 231, 0, 1 );
  glEnd();

  // LADO DERECHO: lado morado
  glBegin(GL_POLYGON);
  glColor3f(  1.0,  0.0,  1.0 );
  glVertex3f( 241, 0, -1 );
  glVertex3f( 241,  2, -1 );
  glVertex3f( 241,  2,  1 );
  glVertex3f( 241, 0,  1 );
  glEnd();

  // LADO IZQUIERDO: lado verde
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0,  0.0 );
  glVertex3f( 131, 0,  1 );
  glVertex3f( 131,  2,  1 );
  glVertex3f( 131,  2, -1 );
  glVertex3f( 131, 0, -1 );
  glEnd();

  // LADO SUPERIOR: lado azul
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  0.0,  1.0 );
  glVertex3f(  241,  0,  1 );
  glVertex3f(  241,  0, -1 );
  glVertex3f(  231,  0, -1 );
  glVertex3f(  231,  0,  1 );
  glEnd();

  // LADO INFERIOR: lado rojo
  glBegin(GL_POLYGON);
  glColor3f(   1.0,  0.0,  0.0 );
  glVertex3f(  241, 2, -1 );
  glVertex3f(  241, 2,  1 );
  glVertex3f( 231, 2,  1 );
  glVertex3f( 231, 2, -1 );
  glEnd();

  //-----------------------SEGUNDO ESCALÓN PIRÁMIDE 1
  glBegin(GL_POLYGON);
  glColor3f( 1.0, 1.0, 0.0 );
  glVertex3f(  241, 2, -1 );
  glVertex3f(  241,  4, -1 );
  glVertex3f( 233,  4, -1 );
  glVertex3f( 233, 2, -1 );
  glEnd();

  // LADO TRASERO: lado cian
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0, 1.0 );
  glVertex3f(  241, 2, 1 );
  glVertex3f(  241,  4, 1 );
  glVertex3f( 233,  4, 1 );
  glVertex3f( 233, 2, 1 );
  glEnd();

  // LADO DERECHO: lado morado
  glBegin(GL_POLYGON);
  glColor3f(  1.0,  0.0,  1.0 );
  glVertex3f( 241, 2, -1 );
  glVertex3f( 241,  4, -1 );
  glVertex3f( 241,  4,  1 );
  glVertex3f( 241, 2,  1 );
  glEnd();

  // LADO IZQUIERDO: lado verde
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0,  0.0 );
  glVertex3f( 233, 2,  1 );
  glVertex3f( 233,  4,  1 );
  glVertex3f( 233,  4, -1 );
  glVertex3f( 233, 2, -1 );
  glEnd();

  // LADO SUPERIOR: lado azul
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  0.0,  1.0 );
  glVertex3f(  241,  2,  1 );
  glVertex3f(  241,  2, -1 );
  glVertex3f(  233,  2, -1 );
  glVertex3f( 233,  2,  1 );
  glEnd();

  // LADO INFERIOR: lado rojo
  glBegin(GL_POLYGON);
  glColor3f(   1.0,  0.0,  0.0 );
  glVertex3f(  241, 4, -1 );
  glVertex3f(  241, 4,  1 );
  glVertex3f( 233, 4,  1 );
  glVertex3f( 233, 4, -1 );
  glEnd();

 // ---------------------TERCER ESCALÓN ESCALERA 1
   glBegin(GL_POLYGON);
  glColor3f( 1.0, 1.0, 0.0 );
  glVertex3f(  241, 4, -1 );
  glVertex3f(  241,  6, -1 );
  glVertex3f( 235,  6, -1 );
  glVertex3f( 235, 4, -1 );
  glEnd();

  // LADO TRASERO: lado cian
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0, 1.0 );
  glVertex3f(  241, 4, 1 );
  glVertex3f(  241,  6, 1 );
  glVertex3f( 235,  6, 1 );
  glVertex3f( 235,4, 1 );
  glEnd();

  // LADO DERECHO: lado morado
  glBegin(GL_POLYGON);
  glColor3f(  1.0,  0.0,  1.0 );
  glVertex3f( 241, 4, -1 );
  glVertex3f( 241,  6, -1 );
  glVertex3f( 241,  6,  1 );
  glVertex3f( 241, 4,  1 );
  glEnd();

  // LADO IZQUIERDO: lado verde
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0,  0.0 );
  glVertex3f( 235, 4,  1 );
  glVertex3f( 235,  6,  1 );
  glVertex3f( 235,  6, -1 );
  glVertex3f( 235, 4, -1 );
  glEnd();

  // LADO SUPERIOR: lado azul
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  0.0,  1.0 );
  glVertex3f(  241,  4,  1 );
  glVertex3f(  241,  4, -1 );
  glVertex3f(  235,  4, -1 );
  glVertex3f( 235,  4,  1 );
  glEnd();

  // LADO INFERIOR: lado rojo
  glBegin(GL_POLYGON);
  glColor3f(   1.0,  0.0,  0.0 );
  glVertex3f(  241, 6, -1 );
  glVertex3f(  241, 6,  1 );
  glVertex3f( 235, 6,  1 );
  glVertex3f( 235, 6, -1 );
  glEnd();

  //-----------------ULTIMO ESCALON PRIMER PIRÁMIDE
   glBegin(GL_POLYGON);
  glColor3f( 1.0, 1.0, 0.0 );
  glVertex3f(  241, 6, -1 );
  glVertex3f(  241,  8, -1 );
  glVertex3f( 237,  8, -1 );
  glVertex3f( 237, 6, -1 );
  glEnd();

  // LADO TRASERO: lado cian
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0, 1.0 );
  glVertex3f(  241, 6, 1 );
  glVertex3f(  241,  8, 1 );
  glVertex3f( 237,  8, 1 );
  glVertex3f( 237, 6, 1 );
  glEnd();

  // LADO DERECHO: lado morado
  glBegin(GL_POLYGON);
  glColor3f(  1.0,  0.0,  1.0 );
  glVertex3f( 241, 6, -1 );
  glVertex3f( 241,  8, -1 );
  glVertex3f( 241,  8,  1 );
  glVertex3f( 241, 6,  1 );
  glEnd();

  // LADO IZQUIERDO: lado verde
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0,  0.0 );
  glVertex3f( 237, 6,  1 );
  glVertex3f( 237,  8,  1 );
  glVertex3f( 237,  8, -1 );
  glVertex3f( 237, 6, -1 );
  glEnd();

  // LADO SUPERIOR: lado azul
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  0.0,  1.0 );
  glVertex3f(  241,  6,  1 );
  glVertex3f(  241,  6, -1 );
  glVertex3f(  237,  6, -1 );
  glVertex3f( 237,  6,  1 );
  glEnd();

  // LADO INFERIOR: lado rojo
  glBegin(GL_POLYGON);
  glColor3f(   1.0,  0.0,  0.0 );
  glVertex3f(  241, 8, -1 );
  glVertex3f(  241, 8,  1 );
  glVertex3f( 237, 8,  1 );
  glVertex3f( 237, 8, -1 );
  glEnd();
//----------------------------CUARTA PARTE
  glBegin(GL_POLYGON);
  glColor3f( 1.0, 1.0, 0.0 );
  glVertex3f(  385, -2, -1 );
  glVertex3f(  385,  0, -1 );
  glVertex3f( 245,  0, -1 );
  glVertex3f( 245, -2, -1 );
  glEnd();

  // LADO TRASERO: lado cian
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0, 1.0 );
  glVertex3f(  385, -2, 1 );
  glVertex3f(  385,  0, 1 );
  glVertex3f( 245,  0, 1 );
  glVertex3f( 245, -2, 1 );
  glEnd();

  // LADO DERECHO: lado morado
  glBegin(GL_POLYGON);
  glColor3f(  1.0,  0.0,  1.0 );
  glVertex3f( 385, -2, -1 );
  glVertex3f( 385,  0, -1 );
  glVertex3f( 385,  0,  1 );
  glVertex3f( 385, -2,  1 );
  glEnd();

  // LADO IZQUIERDO: lado verde
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0,  0.0 );
  glVertex3f( 245, -2,  1 );
  glVertex3f( 245,  0,  1 );
  glVertex3f( 245,  0, -1 );
  glVertex3f( 245, -2, -1 );
  glEnd();

  // LADO SUPERIOR: lado azul
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  0.0,  1.0 );
  glVertex3f(  385,  -2,  1 );
  glVertex3f(  385,  -2, -1 );
  glVertex3f( 245,  -2, -1 );
  glVertex3f( 245,  -2,  1 );
  glEnd();

  // LADO INFERIOR: lado rojo
  glBegin(GL_POLYGON);
  glColor3f(   1.0,  0.0,  0.0 );
  glVertex3f(  385, 0, -1 );
  glVertex3f(  385, 0,  1 );
  glVertex3f( 245, 0,  1 );
  glVertex3f( 245, 0, -1 );
  glEnd();

  //RECTANGULO DE ABAJO
  glBegin(GL_POLYGON);
  glColor3f( 1.0, 1.0, 0.0 );
  glVertex3f(  385, -4, -1 );
  glVertex3f(  385,  -2, -1 );
  glVertex3f( 245,  -2, -1 );
  glVertex3f( 245, -4, -1 );
  glEnd();

  // LADO TRASERO: lado cian
  glBegin(GL_POLYGON);
  glColor3f(   1.0,  0.0, 1.0 );
  glVertex3f(  385, -4, 1 );
  glVertex3f(  385,  -2, 1 );
  glVertex3f( 245,  -2, 1 );
  glVertex3f( 245, -4, 1 );
  glEnd();

  // LADO DERECHO: lado morado
  glBegin(GL_POLYGON);
  glColor3f(  1.0,  0.0,  1.0 );
  glVertex3f( 385, -4, -1 );
  glVertex3f( 385,  -2, -1 );
  glVertex3f( 385,  -2,  1 );
  glVertex3f( 385, -4,  1 );
  glEnd();

  // LADO IZQUIERDO: lado verde
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0,  0.0 );
  glVertex3f( 245, -4,  1 );
  glVertex3f( 245,  -2,  1 );
  glVertex3f( 245,  -2, -1 );
  glVertex3f( 245, -4, -1 );
  glEnd();

  // LADO SUPERIOR: lado azul
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  0.0,  1.0 );
  glVertex3f(  385,  -4,  1 );
  glVertex3f(  385,  -4, -1 );
  glVertex3f( 245,  -4, -1 );
  glVertex3f( 245,  -4,  1 );
  glEnd();

  // LADO INFERIOR: lado rojo
  glBegin(GL_POLYGON);
  glColor3f(   1.0,  0.0,  0.0 );
  glVertex3f(  385, -2, -1 );
  glVertex3f(  385, -2,  1 );
  glVertex3f( 245, -2,  1 );
  glVertex3f( 245, -2, -1 );
  glEnd();

//  -----------------CUARTA ESCALERA
   glBegin(GL_POLYGON);
  glColor3f( 1.0, 1.0, 0.0 );
  glVertex3f(  253, 0, -1 );
  glVertex3f(  253,  2, -1 );
  glVertex3f( 245,  2, -1 );
  glVertex3f( 245, 0, -1 );
  glEnd();

  // LADO TRASERO: lado cian
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0, 1.0 );
  glVertex3f(  253, 0, 1 );
  glVertex3f(  253,  2, 1 );
  glVertex3f( 245,  2, 1 );
  glVertex3f( 245, 0, 1 );
  glEnd();

  // LADO DERECHO: lado morado
  glBegin(GL_POLYGON);
  glColor3f(  1.0,  0.0,  1.0 );
  glVertex3f( 253, 0, -1 );
  glVertex3f( 253,  2, -1 );
  glVertex3f( 245,  2,  1 );
  glVertex3f( 245, 0,  1 );
  glEnd();

  // LADO IZQUIERDO: lado verde
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0,  0.0 );
  glVertex3f( 253, 0,  1 );
  glVertex3f( 253,  2,  1 );
  glVertex3f( 253,  2, -1 );
  glVertex3f( 253, 0, -1 );
  glEnd();

  // LADO SUPERIOR: lado azul
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  0.0,  1.0 );
  glVertex3f(  245,  0,  1 );
  glVertex3f(  245,  0, -1 );
  glVertex3f(  245,  0, -1 );
  glVertex3f( 245,  0,  1 );
  glEnd();

  // LADO INFERIOR: lado rojo
  glBegin(GL_POLYGON);
  glColor3f(   1.0,  0.0,  0.0 );
  glVertex3f(  253, 2, -1 );
  glVertex3f(  253, 2,  1 );
  glVertex3f( 245, 2,  1 );
  glVertex3f( 245, 2, -1 );
  glEnd();

  //-----------------------SEGUNDO ESCALÓN PIRÁMIDE 1
  glBegin(GL_POLYGON);
  glColor3f( 1.0, 1.0, 0.0 );
  glVertex3f(  251, 2, -1 );
  glVertex3f(  251,  4, -1 );
  glVertex3f( 245,  4, -1 );
  glVertex3f( 245, 2, -1 );
  glEnd();

  // LADO TRASERO: lado cian
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0, 1.0 );
  glVertex3f(  251, 2, 1 );
  glVertex3f(  251,  4, 1 );
  glVertex3f( 245,  4, 1 );
  glVertex3f( 245, 2, 1 );
  glEnd();

  // LADO DERECHO: lado morado
  glBegin(GL_POLYGON);
  glColor3f(  1.0,  0.0,  1.0 );
  glVertex3f( 251, 2, -1 );
  glVertex3f( 251,  4, -1 );
  glVertex3f( 251,  4,  1 );
  glVertex3f( 251, 2,  1 );
  glEnd();

  // LADO IZQUIERDO: lado verde
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0,  0.0 );
  glVertex3f( 245, 2,  1 );
  glVertex3f( 245,  4,  1 );
  glVertex3f( 245,  4, -1 );
  glVertex3f( 245, 2, -1 );
  glEnd();

  // LADO SUPERIOR: lado azul
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  0.0,  1.0 );
  glVertex3f(  251,  2,  1 );
  glVertex3f(  251,  2, -1 );
  glVertex3f(  245,  2, -1 );
  glVertex3f( 245,  2,  1 );
  glEnd();

  // LADO INFERIOR: lado rojo
  glBegin(GL_POLYGON);
  glColor3f(   1.0,  0.0,  0.0 );
  glVertex3f(  251, 4, -1 );
  glVertex3f(  251, 4,  1 );
  glVertex3f( 245, 4,  1 );
  glVertex3f( 245, 4, -1 );
  glEnd();

 // ---------------------TERCER ESCALÓN ESCALERA 1
   glBegin(GL_POLYGON);
  glColor3f( 1.0, 1.0, 0.0 );
  glVertex3f(  249, 4, -1 );
  glVertex3f(  249,  6, -1 );
  glVertex3f( 245,  6, -1 );
  glVertex3f( 245, 4, -1 );
  glEnd();

  // LADO TRASERO: lado cian
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0, 1.0 );
  glVertex3f(  249, 4, 1 );
  glVertex3f(  249,  6, 1 );
  glVertex3f( 245,  6, 1 );
  glVertex3f( 245,4, 1 );
  glEnd();

  // LADO DERECHO: lado morado
  glBegin(GL_POLYGON);
  glColor3f(  1.0,  0.0,  1.0 );
  glVertex3f( 249, 4, -1 );
  glVertex3f( 249,  6, -1 );
  glVertex3f( 249,  6,  1 );
  glVertex3f( 249, 4,  1 );
  glEnd();

  // LADO IZQUIERDO: lado verde
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0,  0.0 );
  glVertex3f( 245, 4,  1 );
  glVertex3f( 245,  6,  1 );
  glVertex3f( 245,  6, -1 );
  glVertex3f( 245, 4, -1 );
  glEnd();

  // LADO SUPERIOR: lado azul
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  0.0,  1.0 );
  glVertex3f(  249,  4,  1 );
  glVertex3f(  249,  4, -1 );
  glVertex3f(  245,  4, -1 );
  glVertex3f( 245,  4,  1 );
  glEnd();

  // LADO INFERIOR: lado rojo
  glBegin(GL_POLYGON);
  glColor3f(   1.0,  0.0,  0.0 );
  glVertex3f(  249, 6, -1 );
  glVertex3f(  249, 6,  1 );
  glVertex3f( 245, 6,  1 );
  glVertex3f( 245, 6, -1 );
  glEnd();

  //-----------------ULTIMO ESCALON PRIMER PIRÁMIDE
   glBegin(GL_POLYGON);
  glColor3f( 1.0, 1.0, 0.0 );
  glVertex3f(  247, 6, -1 );
  glVertex3f(  247,  8, -1 );
  glVertex3f( 245,  8, -1 );
  glVertex3f( 245, 6, -1 );
  glEnd();

  // LADO TRASERO: lado cian
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0, 1.0 );
  glVertex3f(  247, 6, 1 );
  glVertex3f(  247,  8, 1 );
  glVertex3f( 245,  8, 1 );
  glVertex3f( 245, 6, 1 );
  glEnd();

  // LADO DERECHO: lado morado
  glBegin(GL_POLYGON);
  glColor3f(  1.0,  0.0,  1.0 );
  glVertex3f( 247, 6, -1 );
  glVertex3f( 247,  8, -1 );
  glVertex3f( 245,  8,  1 );
  glVertex3f( 245, 6,  1 );
  glEnd();

  // LADO IZQUIERDO: lado verde
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0,  0.0 );
  glVertex3f( 247, 6,  1 );
  glVertex3f( 247,  8,  1 );
  glVertex3f( 245,  8, -1 );
  glVertex3f( 245, 6, -1 );
  glEnd();

  // LADO SUPERIOR: lado azul
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  0.0,  1.0 );
  glVertex3f(  247,  6,  1 );
  glVertex3f(  247,  6, -1 );
  glVertex3f(  245,  6, -1 );
  glVertex3f( 245,  6,  1 );
  glEnd();

  // LADO INFERIOR: lado rojo
  glBegin(GL_POLYGON);
  glColor3f(   1.0,  0.0,  0.0 );
  glVertex3f(  247, 8, -1 );
  glVertex3f(  247, 8,  1 );
  glVertex3f( 245, 8,  1 );
  glVertex3f( 245, 8, -1 );
  glEnd();



  //---------------------------------------------TUBO CUARTA PARTE
  glBegin(GL_POLYGON);
  glColor3f( 1.0, 1.0, 0.0 );
  glVertex3f(  263.5, 0, -1 );
  glVertex3f(  263.5,  4, -1 );
  glVertex3f( 261,  4, -1 );
  glVertex3f( 261, 0, -1 );
  glEnd();

  // LADO TRASERO: lado cian
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0, 1.0 );
  glVertex3f(  263.5, 0, 1 );
  glVertex3f(  263.5,  4, 1 );
  glVertex3f( 261,  4, 1 );
  glVertex3f( 261, 0, 1 );
  glEnd();

  // LADO DERECHO: lado morado
  glBegin(GL_POLYGON);
  glColor3f(  1.0,  0.0,  1.0 );
  glVertex3f( 263.5, 0, -1 );
  glVertex3f( 263.5,  4, -1 );
  glVertex3f( 263.5,  4,  1 );
  glVertex3f( 263.5, 0,  1 );
  glEnd();

  // LADO IZQUIERDO: lado verde
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0,  0.0 );
  glVertex3f( 261, 0,  1 );
  glVertex3f( 261,  4,  1 );
  glVertex3f( 261,  4, -1 );
  glVertex3f( 261, 0, -1 );
  glEnd();

  // LADO SUPERIOR: lado azul
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  0.0,  1.0 );
  glVertex3f(  263.5,  0,  1 );
  glVertex3f(  263.5,  0, -1 );
  glVertex3f( 261,  0, -1 );
  glVertex3f( 261,  0,  1 );
  glEnd();

  // LADO INFERIOR: lado rojo
  glBegin(GL_POLYGON);
  glColor3f(   1.0,  0.0,  0.0 );
  glVertex3f(  263.5, 4, -1 );
  glVertex3f(  263.5, 4,  1 );
  glVertex3f( 261, 4,  1 );
  glVertex3f( 261, 4 , -1 );
  glEnd();

  //-------------------------------------CUBO 4 PARTE
glBegin(GL_POLYGON);
  glColor3f( 1.0, 1.0, 0.0 );
  glVertex3f(  273, 6, -1 );
  glVertex3f(  273,  8, -1 );
  glVertex3f( 269,  8, -1 );
  glVertex3f( 269, 6, -1 );
  glEnd();

  // LADO TRASERO: lado cian
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0, 1.0 );
  glVertex3f(  273, 6, 1 );
  glVertex3f(  273,  8, 1 );
  glVertex3f( 269,  8, 1 );
  glVertex3f( 269, 6, 1 );
  glEnd();

  // LADO DERECHO: lado morado
  glBegin(GL_POLYGON);
  glColor3f(  1.0,  0.0,  1.0 );
  glVertex3f( 273, 6, -1 );
  glVertex3f( 273,  8, -1 );
  glVertex3f( 273,  8,  1 );
  glVertex3f( 273, 6,  1 );
  glEnd();

  // LADO IZQUIERDO: lado verde
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0,  0.0 );
  glVertex3f( 269, 6,  1 );
  glVertex3f( 269,  8,  1 );
  glVertex3f( 269,  8, -1 );
  glVertex3f( 269, 6, -1 );
  glEnd();

  // LADO SUPERIOR: lado azul
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  0.0,  1.0 );
  glVertex3f(  273,  6,  1 );
  glVertex3f(  273,  6, -1 );
  glVertex3f(  269,  6, -1 );
  glVertex3f( 269,  6,  1 );
  glEnd();

  // LADO INFERIOR: lado rojo
  glBegin(GL_POLYGON);
  glColor3f(   1.0,  0.0,  0.0 );
  glVertex3f(  273, 8, -1 );
  glVertex3f(  273, 8,  1 );
  glVertex3f( 269, 8,  1 );
  glVertex3f( 269, 8, -1 );
  glEnd();

  //-------------------------------------CUBO MISTERIO CUARTA PARTE
  glBegin(GL_POLYGON);
  glColor3f( 1.0, 1.0, 0.0 );
  glVertex3f(  275, 6, -1 );
  glVertex3f(  275,  8, -1 );
  glVertex3f( 273,  8, -1 );
  glVertex3f( 273, 6, -1 );
  glEnd();

  // LADO TRASERO: lado cian
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0, 1.0 );
  glVertex3f(  275, 6, 1 );
  glVertex3f(  275,  8, 1 );
  glVertex3f( 273,  8, 1 );
  glVertex3f( 273, 6, 1 );
  glEnd();

  // LADO DERECHO: lado morado
  glBegin(GL_POLYGON);
  glColor3f(  1.0,  0.0,  1.0 );
  glVertex3f( 275, 6, -1 );
  glVertex3f( 275,  8, -1 );
  glVertex3f( 275,  8,  1 );
  glVertex3f( 275, 6,  1 );
  glEnd();

  // LADO IZQUIERDO: lado verde
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0,  0.0 );
  glVertex3f( 273, 6,  1 );
  glVertex3f( 273,  8,  1 );
  glVertex3f( 273,  8, -1 );
  glVertex3f( 273, 6, -1 );
  glEnd();

  // LADO SUPERIOR: lado azul
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  0.0,  1.0 );
  glVertex3f(  275,  6,  1 );
  glVertex3f(  275,  6, -1 );
  glVertex3f(  273,  6, -1 );
  glVertex3f( 273,  6,  1 );
  glEnd();

  // LADO INFERIOR: lado rojo
  glBegin(GL_POLYGON);
  glColor3f(   1.0,  0.0,  0.0 );
  glVertex3f(  275, 8, -1 );
  glVertex3f(  275, 8,  1 );
  glVertex3f( 273, 8,  1 );
  glVertex3f( 273, 8, -1 );
  glEnd();

  //------------------------CUBO DESPUÉS DEL MISTERIO
  glBegin(GL_POLYGON);
  glColor3f( 1.0, 1.0, 0.0 );
  glVertex3f(  277, 6, -1 );
  glVertex3f(  277,  8, -1 );
  glVertex3f( 275,  8, -1 );
  glVertex3f( 275, 6, -1 );
  glEnd();

  // LADO TRASERO: lado cian
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0, 1.0 );
  glVertex3f(  277, 6, 1 );
  glVertex3f(  277,  8, 1 );
  glVertex3f( 275,  8, 1 );
  glVertex3f( 275, 6, 1 );
  glEnd();

  // LADO DERECHO: lado morado
  glBegin(GL_POLYGON);
  glColor3f(  1.0,  0.0,  1.0 );
  glVertex3f( 277, 6, -1 );
  glVertex3f( 277,  8, -1 );
  glVertex3f( 277,  8,  1 );
  glVertex3f( 277, 6,  1 );
  glEnd();

  // LADO IZQUIERDO: lado verde
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0,  0.0 );
  glVertex3f( 275, 6,  1 );
  glVertex3f( 275,  8,  1 );
  glVertex3f( 275,  8, -1 );
  glVertex3f( 275, 6, -1 );
  glEnd();

  // LADO SUPERIOR: lado azul
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  0.0,  1.0 );
  glVertex3f(  277,  6,  1 );
  glVertex3f(  277,  6, -1 );
  glVertex3f(  275,  6, -1 );
  glVertex3f( 275,  6,  1 );
  glEnd();

  // LADO INFERIOR: lado rojo
  glBegin(GL_POLYGON);
  glColor3f(   1.0,  0.0,  0.0 );
  glVertex3f(  277, 8, -1 );
  glVertex3f(  277, 8,  1 );
  glVertex3f( 275, 8,  1 );
  glVertex3f( 275, 8, -1 );
  glEnd();
//-----------------------------------SEGUNDO TUBO CUARTA PARTE
   glBegin(GL_POLYGON);
  glColor3f( 1.0, 1.0, 0.0 );
  glVertex3f(  294, 0, -1 );
  glVertex3f(  294,  4, -1 );
  glVertex3f( 291.5,  4, -1 );
  glVertex3f( 291.5, 0, -1 );
  glEnd();

  // LADO TRASERO: lado cian
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0, 1.0 );
  glVertex3f(  294, 0, 1 );
  glVertex3f(  294,  4, 1 );
  glVertex3f( 291.5,  4, 1 );
  glVertex3f( 291.5, 0, 1 );
  glEnd();

  // LADO DERECHO: lado morado
  glBegin(GL_POLYGON);
  glColor3f(  1.0,  0.0,  1.0 );
  glVertex3f( 294, 0, -1 );
  glVertex3f( 294,  4, -1 );
  glVertex3f( 294,  4,  1 );
  glVertex3f( 294, 0,  1 );
  glEnd();

  // LADO IZQUIERDO: lado verde
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0,  0.0 );
  glVertex3f( 291.5, 0,  1 );
  glVertex3f( 291.5,  4,  1 );
  glVertex3f( 291.5,  4, -1 );
  glVertex3f( 291.5, 0, -1 );
  glEnd();

  // LADO SUPERIOR: lado azul
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  0.0,  1.0 );
  glVertex3f(  294,  0,  1 );
  glVertex3f(  294,  0, -1 );
  glVertex3f( 291.5,  0, -1 );
  glVertex3f( 291.5,  0,  1 );
  glEnd();

  // LADO INFERIOR: lado rojo
  glBegin(GL_POLYGON);
  glColor3f(   1.0,  0.0,  0.0 );
  glVertex3f(  294, 4, -1 );
  glVertex3f(  294, 4,  1 );
  glVertex3f( 291.5, 4,  1 );
  glVertex3f( 291.5, 4 , -1 );
  glEnd();

  //  ---------------------------------ULTIMA ESCALERA
   glBegin(GL_POLYGON);
  glColor3f( 1.0, 1.0, 0.0 );
  glVertex3f(  312, 0, -1 );
  glVertex3f(  312,  2, -1 );
  glVertex3f( 294,  2, -1 );
  glVertex3f( 294, 0, -1 );
  glEnd();

  // LADO TRASERO: lado cian
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0, 1.0 );
  glVertex3f(  312, 0, 1 );
  glVertex3f(  312,  2, 1 );
  glVertex3f( 294,  2, 1 );
  glVertex3f( 294, 0, 1 );
  glEnd();

  // LADO DERECHO: lado morado
  glBegin(GL_POLYGON);
  glColor3f(  1.0,  0.0,  1.0 );
  glVertex3f( 312, 0, -1 );
  glVertex3f( 312,  2, -1 );
  glVertex3f( 312,  2,  1 );
  glVertex3f( 312, 0,  1 );
  glEnd();

  // LADO IZQUIERDO: lado verde
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0,  0.0 );
  glVertex3f( 294, 0,  1 );
  glVertex3f( 294,  2,  1 );
  glVertex3f( 294,  2, -1 );
  glVertex3f( 294, 0, -1 );
  glEnd();

  // LADO SUPERIOR: lado azul
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  0.0,  1.0 );
  glVertex3f(  312,  0,  1 );
  glVertex3f(  312,  0, -1 );
  glVertex3f(  294,  0, -1 );
  glVertex3f( 294,  0,  1 );
  glEnd();

  // LADO INFERIOR: lado rojo
  glBegin(GL_POLYGON);
  glColor3f(   1.0,  0.0,  0.0 );
  glVertex3f(  312, 2, -1 );
  glVertex3f(  312, 2,  1 );
  glVertex3f( 294, 2,  1 );
  glVertex3f( 294, 2, -1 );
  glEnd();

//  --------------segunda parte escalera
  glBegin(GL_POLYGON);
  glColor3f( 1.0, 1.0, 0.0 );
  glVertex3f(  312, 2, -1 );
  glVertex3f(  312,  4, -1 );
  glVertex3f( 296,  4, -1 );
  glVertex3f( 296, 2, -1 );
  glEnd();

  // LADO TRASERO: lado cian
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0, 1.0 );
  glVertex3f(  312, 2, 1 );
  glVertex3f(  312,  4, 1 );
  glVertex3f( 296,  4, 1 );
  glVertex3f( 296, 2, 1 );
  glEnd();

  // LADO DERECHO: lado morado
  glBegin(GL_POLYGON);
  glColor3f(  1.0,  0.0,  1.0 );
  glVertex3f( 312, 2, -1 );
  glVertex3f( 312,  4, -1 );
  glVertex3f( 312,  4,  1 );
  glVertex3f( 312, 2,  1 );
  glEnd();

  // LADO IZQUIERDO: lado verde
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0,  0.0 );
  glVertex3f( 296, 2,  1 );
  glVertex3f( 296, 4,  1 );
  glVertex3f( 296,  4, -1 );
  glVertex3f( 296, 2, -1 );
  glEnd();

  // LADO SUPERIOR: lado azul
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  0.0,  1.0 );
  glVertex3f(  312, 2,  1 );
  glVertex3f(  312,  2, -1 );
  glVertex3f(  296,  2, -1 );
  glVertex3f( 296,  2,  1 );
  glEnd();

  // LADO INFERIOR: lado rojo
  glBegin(GL_POLYGON);
  glColor3f(   1.0,  0.0,  0.0 );
  glVertex3f(  312, 4, -1 );
  glVertex3f(  312, 4,  1 );
  glVertex3f( 296, 4,  1 );
  glVertex3f( 296, 4, -1 );
  glEnd();


//  ---------------TERCERO
  glBegin(GL_POLYGON);
  glColor3f( 1.0, 1.0, 0.0 );
  glVertex3f(  312, 4, -1 );
  glVertex3f(  312,  6, -1 );
  glVertex3f( 298,  6, -1 );
  glVertex3f( 298, 4, -1 );
  glEnd();

  // LADO TRASERO: lado cian
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0, 1.0 );
  glVertex3f(  312, 4, 1 );
  glVertex3f(  312,  6, 1 );
  glVertex3f( 298,  6, 1 );
  glVertex3f( 298, 4, 1 );
  glEnd();

  // LADO DERECHO: lado morado
  glBegin(GL_POLYGON);
  glColor3f(  1.0,  0.0,  1.0 );
  glVertex3f( 312, 4, -1 );
  glVertex3f( 312,  6, -1 );
  glVertex3f( 312,  6,  1 );
  glVertex3f( 312, 4,  1 );
  glEnd();

  // LADO IZQUIERDO: lado verde
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0,  0.0 );
  glVertex3f( 298, 4,  1 );
  glVertex3f( 298,  6,  1 );
  glVertex3f( 298,  6, -1 );
  glVertex3f( 298, 4, -1 );
  glEnd();

  // LADO SUPERIOR: lado azul
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  0.0,  1.0 );
  glVertex3f(  312,  4,  1 );
  glVertex3f(  312,  4, -1 );
  glVertex3f(  298,  4, -1 );
  glVertex3f( 298,  4,  1 );
  glEnd();

  // LADO INFERIOR: lado rojo
  glBegin(GL_POLYGON);
  glColor3f(   1.0,  0.0,  0.0 );
  glVertex3f(  312, 6, -1 );
  glVertex3f(  312, 6,  1 );
  glVertex3f( 298, 6,  1 );
  glVertex3f( 298, 6, -1 );
  glEnd();

//  ----------------------------------CUARTO
  glBegin(GL_POLYGON);
  glColor3f( 1.0, 1.0, 0.0 );
  glVertex3f(  312, 6, -1 );
  glVertex3f(  312,  8, -1 );
  glVertex3f( 300,  8, -1 );
  glVertex3f( 300, 6, -1 );
  glEnd();

  // LADO TRASERO: lado cian
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0, 1.0 );
  glVertex3f(  312, 6, 1 );
  glVertex3f(  312,  8, 1 );
  glVertex3f( 300,  8, 1 );
  glVertex3f( 300, 6, 1 );
  glEnd();

  // LADO DERECHO: lado morado
  glBegin(GL_POLYGON);
  glColor3f(  1.0,  0.0,  1.0 );
  glVertex3f( 312, 6, -1 );
  glVertex3f( 312,  8, -1 );
  glVertex3f( 312,  8,  1 );
  glVertex3f( 312, 6,  1 );
  glEnd();

  // LADO IZQUIERDO: lado verde
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0,  0.0 );
  glVertex3f( 300, 6,  1 );
  glVertex3f( 300,  8,  1 );
  glVertex3f( 300,  8, -1 );
  glVertex3f( 300, 6, -1 );
  glEnd();

  // LADO SUPERIOR: lado azul
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  0.0,  1.0 );
  glVertex3f(  312,  6,  1 );
  glVertex3f(  312,  6, -1 );
  glVertex3f(  300,  6, -1 );
  glVertex3f(  300,  6,  1 );
  glEnd();

  // LADO INFERIOR: lado rojo
  glBegin(GL_POLYGON);
  glColor3f(   1.0,  0.0,  0.0 );
  glVertex3f(  312, 8, -1 );
  glVertex3f(  312, 8,  1 );
  glVertex3f(  300, 8,  1 );
  glVertex3f(  300, 8, -1 );
  glEnd();

//  ----------------------------------QUINTO
  glBegin(GL_POLYGON);
  glColor3f( 1.0, 1.0, 0.0 );
  glVertex3f(  312, 8, -1 );
  glVertex3f(  312,  10, -1 );
  glVertex3f( 302,  10, -1 );
  glVertex3f( 302, 8, -1 );
  glEnd();

  // LADO TRASERO: lado cian
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0, 1.0 );
  glVertex3f(  312, 8, 1 );
  glVertex3f(  312,  10, 1 );
  glVertex3f( 302, 10, 1 );
  glVertex3f( 302, 8, 1 );
  glEnd();

  // LADO DERECHO: lado morado
  glBegin(GL_POLYGON);
  glColor3f(  1.0,  0.0,  1.0 );
  glVertex3f( 312, 8, -1 );
  glVertex3f( 312,  10, -1 );
  glVertex3f( 312,  10,  1 );
  glVertex3f( 312, 8,  1 );
  glEnd();

  // LADO IZQUIERDO: lado verde
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0,  0.0 );
  glVertex3f( 302, 8,  1 );
  glVertex3f( 302,  10,  1 );
  glVertex3f( 302, 10, -1 );
  glVertex3f( 302, 8, -1 );
  glEnd();

  // LADO SUPERIOR: lado azul
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  0.0,  1.0 );
  glVertex3f(  312,  8,  1 );
  glVertex3f(  312,  8, -1 );
  glVertex3f(  302,  8, -1 );
  glVertex3f( 302,  8,  1 );
  glEnd();

  // LADO INFERIOR: lado rojo
  glBegin(GL_POLYGON);
  glColor3f(   1.0,  0.0,  0.0 );
  glVertex3f(  312, 10, -1 );
  glVertex3f(  312, 10,  1 );
  glVertex3f( 302, 10,  1 );
  glVertex3f( 302, 10, -1 );
  glEnd();

//  ----------------------------SEXTO
  glBegin(GL_POLYGON);
  glColor3f( 1.0, 1.0, 0.0 );
  glVertex3f(  312, 10, -1 );
  glVertex3f(  312,  12, -1 );
  glVertex3f( 304,  12, -1 );
  glVertex3f( 304, 10, -1 );
  glEnd();

  // LADO TRASERO: lado cian
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0, 1.0 );
  glVertex3f(  312, 10, 1 );
  glVertex3f(  312,  12, 1 );
  glVertex3f( 304,  12, 1 );
  glVertex3f( 304, 10, 1 );
  glEnd();

  // LADO DERECHO: lado morado
  glBegin(GL_POLYGON);
  glColor3f(  1.0,  0.0,  1.0 );
  glVertex3f( 312, 10, -1 );
  glVertex3f( 312,  12, -1 );
  glVertex3f( 312,  12,  1 );
  glVertex3f( 312, 10,  1 );
  glEnd();

  // LADO IZQUIERDO: lado verde
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0,  0.0 );
  glVertex3f( 304, 10,  1 );
  glVertex3f( 304,  12,  1 );
  glVertex3f( 304,  12, -1 );
  glVertex3f( 304, 10, -1 );
  glEnd();

  // LADO SUPERIOR: lado azul
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  0.0,  1.0 );
  glVertex3f(  312,  10,  1 );
  glVertex3f(  312,  10, -1 );
  glVertex3f(  304,  10, -1 );
  glVertex3f( 304,  10,  1 );
  glEnd();

  // LADO INFERIOR: lado rojo
  glBegin(GL_POLYGON);
  glColor3f(   1.0,  0.0,  0.0 );
  glVertex3f(  312, 12, -1 );
  glVertex3f(  312, 12,  1 );
  glVertex3f( 304, 12,  1 );
  glVertex3f( 304, 12, -1 );
  glEnd();

//  ----------------------------------SÉPTIMO
  glBegin(GL_POLYGON);
  glColor3f( 1.0, 1.0, 0.0 );
  glVertex3f(  312, 12, -1 );
  glVertex3f(  312,  14, -1 );
  glVertex3f( 306,  14, -1 );
  glVertex3f( 306, 12, -1 );
  glEnd();

  // LADO TRASERO: lado cian
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0, 1.0 );
  glVertex3f(  312, 12, 1 );
  glVertex3f(  312,  14, 1 );
  glVertex3f( 306,  14, 1 );
  glVertex3f( 306, 12, 1 );
  glEnd();

  // LADO DERECHO: lado morado
  glBegin(GL_POLYGON);
  glColor3f(  1.0,  0.0,  1.0 );
  glVertex3f( 312, 12, -1 );
  glVertex3f( 312,  14, -1 );
  glVertex3f( 312,  14,  1 );
  glVertex3f( 312, 12,  1 );
  glEnd();

  // LADO IZQUIERDO: lado verde
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0,  0.0 );
  glVertex3f( 306, 12,  1 );
  glVertex3f( 306,  14,  1 );
  glVertex3f( 306,  14, -1 );
  glVertex3f( 306, 12, -1 );
  glEnd();

  // LADO SUPERIOR: lado azul
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  0.0,  1.0 );
  glVertex3f(  312,  12,  1 );
  glVertex3f(  312,  12, -1 );
  glVertex3f(  306, 12, -1 );
  glVertex3f( 306,  12,  1 );
  glEnd();

  // LADO INFERIOR: lado rojo
  glBegin(GL_POLYGON);
  glColor3f(   1.0,  0.0,  0.0 );
  glVertex3f(  312, 14, -1 );
  glVertex3f(  312, 14,  1 );
  glVertex3f( 306, 14,  1 );
  glVertex3f( 306, 14, -1 );
  glEnd();

//  ----------------------OCTAVO
  glBegin(GL_POLYGON);
  glColor3f( 1.0, 1.0, 0.0 );
  glVertex3f(  312, 14, -1 );
  glVertex3f(  312,  16, -1 );
  glVertex3f( 308,  16, -1 );
  glVertex3f( 308, 14, -1 );
  glEnd();

  // LADO TRASERO: lado cian
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0, 1.0 );
  glVertex3f(  312, 14, 1 );
  glVertex3f(  312,  16, 1 );
  glVertex3f( 308,  16, 1 );
  glVertex3f( 308, 14, 1 );
  glEnd();

  // LADO DERECHO: lado morado
  glBegin(GL_POLYGON);
  glColor3f(  1.0,  0.0,  1.0 );
  glVertex3f( 312, 14, -1 );
  glVertex3f( 312,  16, -1 );
  glVertex3f( 312,  16,  1 );
  glVertex3f( 312, 14,  1 );
  glEnd();

  // LADO IZQUIERDO: lado verde
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0,  0.0 );
  glVertex3f( 308, 14,  1 );
  glVertex3f( 308,  16,  1 );
  glVertex3f( 308,  16, -1 );
  glVertex3f( 308, 14, -1 );
  glEnd();

  // LADO SUPERIOR: lado azul
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  0.0,  1.0 );
  glVertex3f(  312,  14,  1 );
  glVertex3f(  312,  14, -1 );
  glVertex3f(  308,  14, -1 );
  glVertex3f( 308,  14,  1 );
  glEnd();

  // LADO INFERIOR: lado rojo
  glBegin(GL_POLYGON);
  glColor3f(   1.0,  0.0,  0.0 );
  glVertex3f(  312, 16, -1 );
  glVertex3f(  312, 16,  1 );
  glVertex3f( 308, 16,  1 );
  glVertex3f( 308, 16, -1 );
  glEnd();

//  ------------------bandera
  glBegin(GL_POLYGON);
  glColor3f( 1.0, 1.0, 0.0 );
  glVertex3f(  323, 0, -1 );
  glVertex3f(  323,  2, -1 );
  glVertex3f( 321,  2, -1 );
  glVertex3f( 321, 0, -1 );
  glEnd();

  // LADO TRASERO: lado cian
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0, 1.0 );
  glVertex3f(  323, 0, 1 );
  glVertex3f(  323,  2, 1 );
  glVertex3f( 321,  2, 1 );
  glVertex3f( 321, 0, 1 );
  glEnd();

  // LADO DERECHO: lado morado
  glBegin(GL_POLYGON);
  glColor3f(  1.0,  0.0,  1.0 );
  glVertex3f( 323, 0, -1 );
  glVertex3f( 323,  2, -1 );
  glVertex3f( 323,  2,  1 );
  glVertex3f( 323, 0,  1 );
  glEnd();

  // LADO IZQUIERDO: lado verde
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0,  0.0 );
  glVertex3f( 321, 0,  1 );
  glVertex3f( 321,  2,  1 );
  glVertex3f( 321,  2, -1 );
  glVertex3f( 321, 0, -1 );
  glEnd();

  // LADO SUPERIOR: lado azul
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  0.0,  1.0 );
  glVertex3f(  323,  0,  1 );
  glVertex3f(  323,  0, -1 );
  glVertex3f(  321,  0, -1 );
  glVertex3f(  321,  0,  1 );
  glEnd();

  // LADO INFERIOR: lado rojo
  glBegin(GL_POLYGON);
  glColor3f(   1.0,  0.0,  0.0 );
  glVertex3f(  323, 2, -1 );
  glVertex3f(  323, 2,  1 );
  glVertex3f( 321, 2,  1 );
  glVertex3f( 321, 2, -1 );
  glEnd();

//  --------------------hasta bandera
  glBegin(GL_POLYGON);
  glColor3f( 1.0, 1.0, 0.0 );
  glVertex3f(  323, 2, -1 );
  glVertex3f(  323,  20, -1 );
  glVertex3f( 321,  20, -1 );
  glVertex3f( 321, 2, -1 );
  glEnd();

  // LADO TRASERO: lado cian
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0, 1.0 );
  glVertex3f(  323, 2, 1 );
  glVertex3f(  323,  20, 1 );
  glVertex3f( 321,  20, 1 );
  glVertex3f( 321, 2, 1 );
  glEnd();

  // LADO DERECHO: lado morado
  glBegin(GL_POLYGON);
  glColor3f(  1.0,  0.0,  1.0 );
  glVertex3f( 323, 2, -1 );
  glVertex3f( 323,  20, -1 );
  glVertex3f( 323,  20,  1 );
  glVertex3f( 323, 2,  1 );
  glEnd();

  // LADO IZQUIERDO: lado verde
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0,  0.0 );
  glVertex3f( 321, 2,  1 );
  glVertex3f( 321,  20,  1 );
  glVertex3f( 321,  20, -1 );
  glVertex3f( 321, 2, -1 );
  glEnd();

  // LADO SUPERIOR: lado azul
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  0.0,  1.0 );
  glVertex3f(  323,  2,  1 );
  glVertex3f(  323,  2, -1 );
  glVertex3f(  321,  2, -1 );
  glVertex3f(  321,  2,  1 );
  glEnd();

  // LADO INFERIOR: lado rojo
  glBegin(GL_POLYGON);
  glColor3f(   1.0,  0.0,  0.0 );
  glVertex3f(  323, 20, -1 );
  glVertex3f(  323, 20,  1 );
  glVertex3f( 321, 20,  1 );
  glVertex3f( 321, 20, -1 );
  glEnd();

//  ------------------CASTILLO-----------
  glBegin(GL_POLYGON);
  glColor3f( 1.0, 1.0, 0.0 );
  glVertex3f(  339, 0, -1 );
  glVertex3f(  339,  15, -1 );
  glVertex3f( 329,  15, -1 );
  glVertex3f( 329, 0, -1 );
  glEnd();

  // LADO TRASERO: lado cian
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0, 1.0 );
  glVertex3f(  339, 0, 1 );
  glVertex3f(  339,  15, 1 );
  glVertex3f( 329,  15, 1 );
  glVertex3f( 329, 0, 1 );
  glEnd();

  // LADO DERECHO: lado morado
  glBegin(GL_POLYGON);
  glColor3f(  1.0,  0.0,  1.0 );
  glVertex3f( 339, 0, -1 );
  glVertex3f( 339,  15, -1 );
  glVertex3f( 339,  15,  1 );
  glVertex3f( 339, 0,  1 );
  glEnd();

  // LADO IZQUIERDO: lado verde
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  1.0,  0.0 );
  glVertex3f( 329, 0,  1 );
  glVertex3f( 329,  15,  1 );
  glVertex3f( 329,  15, -1 );
  glVertex3f( 329, 0, -1 );
  glEnd();

  // LADO SUPERIOR: lado azul
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  0.0,  1.0 );
  glVertex3f(  339,  0,  1 );
  glVertex3f(  339,  0, -1 );
  glVertex3f(  329,  0, -1 );
  glVertex3f(  329,  0,  1 );
  glEnd();

  // LADO INFERIOR: lado rojo
  glBegin(GL_POLYGON);
  glColor3f(   1.0,  0.0,  0.0 );
  glVertex3f(  339, 15, -1 );
  glVertex3f(  339, 15,  1 );
  glVertex3f( 329, 15,  1 );
  glVertex3f( 329, 15, -1 );
  glEnd();
}


void display(void){

glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	gluLookAt(-10+rx,9+ry,-10+rz,px,py,pz,0,1,0);
	//gluLookAt(0.0 - X, 0.0 - Y, 4.5 - Z, 0.0 - X, 0.0 - Y, 0.0 - Z, 0.0, 1.0, 0.0);//(0.0,0.0,0.5,0.0,0.0,0.0,0.0,1.0,0.0);
	glPushMatrix();
	/*if (bx == true) {
		rotate_x += .2;
	}
	if (by == true) {
		rotate_y += .2;
	}

	glRotatef(rotate_x, 1.0, 0.0, 0.0);
	glRotatef(rotate_y, 0.0, 1.0, 0.0);


	glScalef(scale, scale, scale);*/
	/*for(float i=-100; i<100; i+=1.1){
        glColor3f(1.0f,1.0f,1.0f);
        glBegin(GL_LINE_STRIP);
        glVertex3f(i,0,-100);
        glVertex3f(i,0,100);
        glEnd();
	}
	for(float i=-100; i<100; i+=1.1){
        glColor3f(1.0f,1.0f,1.0f);
        glBegin(GL_LINE_STRIP);
        glVertex3f(-100,0,i);
        glVertex3f(100,0,i);
        glEnd();
	}*/
	cubo();

	glPopMatrix();



	glFlush();
	glutSwapBuffers();



}


void reshape(int w, int h) {
	glViewport(0, 0, (GLsizei)w, (GLsizei)h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-10.0, 10.0, -10.00, 10.0, 0.1, 20.0);
	glMatrixMode(GL_MODELVIEW);
	gluPerspective(60, (GLfloat)h/(GLfloat)w, 1,300);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

}

void teclado(unsigned char key, int x, int y){
switch(key){
case 27: //esc
exit(0);
break;
//eje x
case 'd':
rx = rx + 0.2;
break;
case 'a':
rx = rx + 0.2;
break;
case 'l':
px = px + 0.8;
break;
case 'j':
px = px + 0.2;
break;
//eje y
case 'q':
ry = ry + 0.2;
break;
case 'e':
ry = ry + 0.2;
break;
case 'u':
py = py + 0.2;
break;
case 'o':
py = py + 0.2;
break;
case 49://1
ry = ry + 0.2;
py = py + 0.2;
break;
case 50://2
ry = ry + 0.2;
py = py + 0.2;
break;
case 'w':
rz = rz + 0.2;
break;
case 's':
rz = rz - 0.2;
break;
case 'i':
pz = pz - 0.8;
break;
}
glutPostRedisplay();
}

void flechas(int key, int x, int y){
switch (key){
case GLUT_KEY_RIGHT:
rx = rx + 0.2;
px = px + 0.2;
break;
case GLUT_KEY_LEFT:
rx = rx - 0.2;
px = px - 0.2;
break;
case GLUT_KEY_UP:
rz = rz + 0.2;
pz = pz - 0.2;
break;
}
glutPostRedisplay();
}

// ----------------------------------------------------------
// Función de retrollamada “specialKeys()”
// ----------------------------------------------------------
/*void specialKeys( int key, int x, int y ) {

  //  Flecha derecha: aumentar rotación 5 grados
  if (key == GLUT_KEY_RIGHT)
    rotate_y += 5;

  //  Flecha izquierda: disminuir rotación 5 grados
  else if (key == GLUT_KEY_LEFT)
    rotate_y -= 5;

  else if (key == GLUT_KEY_UP)
    rotate_x += 5;

  else if (key == GLUT_KEY_DOWN)
    rotate_x -= 5;




  glutPostRedisplay();//  Solicitar actualización de visualización

}*/


int main(int argc, char* argv[]){


  glutInit(&argc,argv);//  Inicializar los parámetros GLUT y de usuario proceso
  glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);//  Solicitar ventana con color real y doble buffer con Z-buffer
  glutInitWindowSize(1300, 720);
  glutInitWindowPosition(100, 50);
  glutCreateWindow("Mario Bros 3D");// Crear ventana
  glEnable(GL_DEPTH_TEST);//  Habilitar la prueba de profundidad de Z-buffer
  init();
  glutDisplayFunc(display);// Funciones de retrollamada
  glutKeyboardFunc(teclado);
  glutSpecialFunc(flechas);
  glutReshapeFunc(reshape);
  //glutIdleFunc(display);
  //glutSpecialFunc(specialKeys);

  glutMainLoop();//  Pasar el control de eventos a GLUT
  return 0;//  Regresar al sistema operativo
}
