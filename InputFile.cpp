//
// Created by Ivan Acosta on 06/09/17.
//
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
