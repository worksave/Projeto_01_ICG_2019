
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

#ifndef _DEFINITIONS_H_
#define _DEFINITIONS_H_

#define IMAGE_WIDTH  600 // Numero de colunas da imagem.
#define IMAGE_HEIGHT 400 // Numero de linhas da imagem.

#define SCREEN_WIDTH  1366 // Numero de colunas da tela do PC.
#define SCREEN_HEIGHT 768  // Numero de linhas da tela do PC.

#define CENTER_SCREEN_WIDTH  ((SCREEN_WIDTH - IMAGE_WIDTH)/2)   // Posicao da coluna para centralizar a tela do PC.
#define CENTER_SCREEN_HEIGHT ((SCREEN_HEIGHT - IMAGE_HEIGHT)/2) // Posicao da linha para centralizar a tela do PC.


unsigned char * FBptr;

#endif // _DEFINITIONS_H_

