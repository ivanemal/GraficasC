/*
Materia: Gráficas Computacionales
Fecha: 18 de agosto del 2017
Autor: A01019861 Alumno Iván E. Acosta
*/
#pragma once
#include <GL/glew.h>
#include <GL/freeglut.h>
#include <glm/glm.hpp>
#include <iostream>
#include <vector>

class Shader
{
public:
	Shader();
	~Shader();	void CreateShader(std::string path, GLenum type);
	GLuint GetHandle();

private:
	GLuint shaderHandle=0;
};

