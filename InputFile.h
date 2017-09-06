/*
   Materia: Gráficas Computacionales
   Fecha: 6 de septiembre del 2017
   Autor: A01019861 Alumno Iván E. Acosta
 */
#ifndef GRAFICASC_INPUTFILE_H
#define GRAFICASC_INPUTFILE_H
#include <iostream>
#include <fstream>

class InputFile {

public:
    bool Read(std::string Filename);
    std::string GetContents();

private:
    std::string contents;
};


#endif
