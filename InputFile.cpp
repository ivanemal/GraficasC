/*
   Materia: Gráficas Computacionales
   Fecha: 6 de septiembre del 2017
   Autor: A01019861 Alumno Iván E. Acosta
 */
#include <string>
#include <iostream>
#include <fstream>
#include "InputFile.h"
#include <vector>

bool InputFile::Read(std::string Filename) {
    std::ifstream _FileName ;
    _FileName.open("/Users/ivanacosta/CLionProjects/GraficasC/"+ Filename);
    std::string output, temp;
    if (_FileName.is_open()) {
        while(!_FileName.eof()) {
            getline(_FileName, output);
            output += temp;
            output += "\n";
            contents += output;
        }
        return true;
        }
    else
        return false;
    }

std::string InputFile::GetContents(){
    return contents;
}
