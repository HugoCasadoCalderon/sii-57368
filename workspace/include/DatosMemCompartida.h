#pragma once
#include "Esfera.h"
#include "Raqueta.h"
class DatosMemCompartida
{
public:
Esfera esfera;
Raqueta raqueta1;
int accion; // 1 arriba, 0 nada, -1 abajo
};
