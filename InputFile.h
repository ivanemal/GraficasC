
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
