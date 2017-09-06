/*
   Materia: Gráficas Computacionales
   Fecha: 6 de septiembre del 2017
   Autor: A01019861 Alumno Iván E. Acosta
 */

#include "InputFile.h"
#include <iostream>

int main(int argc, char* argv[])
{
    std::string filename = "Prueba.txt";
    InputFile myFile;
    myFile.Read(filename);
    std::string contents = myFile.GetContents();
    std::cout << "contents:" << contents << std::endl;
}