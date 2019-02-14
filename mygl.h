
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

#ifndef _MYGL_H_
#define _MYGL_H_

#include "definitions.h"
#include "math.h"
#include <stdio.h>
#include <vector>

//*****************************************************************************
// Defina aqui as suas funções gráficas
//*****************************************************************************
// Rasteriza um Ponto na tela - Recebe como parametros: Coordenadas do ponto e a Cor(RGBA)
void DesenhaPixels (int x, int y, int red, int green, int blue, int alpha)  {

    FBptr[(4*x + 4*IMAGE_WIDTH*y) + 0] = red;
    FBptr[(4*x + 4*IMAGE_WIDTH*y) + 1] = green;
    FBptr[(4*x + 4*IMAGE_WIDTH*y) + 2] = blue;
    FBptr[(4*x + 4*IMAGE_WIDTH*y) + 3] = alpha;

}

void DesenhaLinha (int x0, int y0, int x1, int y1, int r, int g, int b, int a) {

   for (unsigned int i=0; i<250; i+=1) {

        FBptr[4*i + 4*i*IMAGE_WIDTH + 1]  = r;
        FBptr[4*i + 4*i*IMAGE_WIDTH + 2]  = g;
        FBptr[4*i + 4*i*IMAGE_WIDTH + 3]  = b;
        FBptr[4*i + 4*i*IMAGE_WIDTH + 4]  = a;

   }

}

void DesenhaTriangulo (int x0, int y0, int x1, int y1, int r0, int g0, int b0, int a0) {

        DesenhaLinha(x0, y0, x1, y1, r0, g0, b0, a0);


}

#endif // _MYGL_H_

