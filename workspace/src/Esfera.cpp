// Esfera.cpp: implementation of the Esfera class.
//
//////////////////////////////////////////////////////////////////////

#include "Esfera.h"
#include "glut.h"
//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

Esfera::Esfera()
{
	radio=0.5f;
	velocidad.x=3;
	velocidad.y=3;
}

Esfera::~Esfera()
{

}



void Esfera::Dibuja()
{
	glColor3ub(255,255,0);
	glEnable(GL_LIGHTING);
	glPushMatrix();
	glTranslatef(centro.x,centro.y,0);
	glutSolidSphere(radio,15,15);
	glPopMatrix();
}

void Esfera::Mueve(float t)
{
centro.x=centro.x + velocidad.x * t;
centro.y=centro.y + velocidad.y * t;
}
