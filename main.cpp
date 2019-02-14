
/*

    UFPB - Universidade Federal da Paraíba
    CI - Centro de Informática

    Disciplina: Introdução a Computação Grafica - ICG

    Algoritmos de Rasterização Utilizados em Computação Gráfica

    Professor: Christian Azambuja Pagot

    Aluno(s): Carlos Magno da Silva                 - Matrícula: 20160143331
              Emmanuella Faustino Albuquerque Silva - Matrícula: 20170002239

    Cursos: Ciênca da Computação

    Semestre: 2018.2

    Data: 13/02/2019

*/

#include "main.h"
#include <iostream>
//#include <conio.h>
#include <stdio.h>

//-----------------------------------------------------------------------------
void MyGlDraw(void)
{
	//*************************************************************************
	// Chame aqui as funções do mygl.h
	//*************************************************************************
    //DesenhaPixels(200, 100, 255, 0, 0, 0);
    //DesenhaPixels(350, 100, 0, 255, 0, 0);
    //DesenhaPixels(200, 200, 0, 0, 255, 0);
    //DesenhaPixels(350, 200, 255, 0, 255, 0);

    DesenhaLinha(0,1,2,3,255,0,255,255);

}

//-----------------------------------------------------------------------------
int main(int argc, char **argv)
{
	// Inicializações.
	InitOpenGL(&argc, argv);
	InitCallBacks();
	InitDataStructures();

	// Ajusta a função que chama as funções do mygl.h
	DrawFunc = MyGlDraw;

	// Framebuffer scan loop.
	glutMainLoop();

	return 0;
}

