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
class ShaderProgram
{
public:
	ShaderProgram();
	~ShaderProgram();
	void CreateProgram();
	void AttachShader(std::string path, GLenum type);
	void LinkProgram();
	void Activate();
	void Deactivate();
	void SetAttribute(GLuint locationIndex, std::string name);

private:
	void DeleteAndDetachShaders();
	void DeleteProgram();
};
