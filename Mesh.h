/*
Materia: Gr�ficas Computacionales
Fecha: 18 de agosto del 2017
Autor: A01019861 Alumno Iv�n E. Acosta
*/
#pragma once
#include <GL/glew.h>
#include <GL/freeglut.h>
#include <glm/glm.hpp>
#include <vector>

class Mesh
{
public:
	Mesh();
	~Mesh();

	void CreateMesh(GLint vertexCount);
	void Draw(GLenum primitive);
	void SetPositionAttribute(
		std::vector<glm::vec2> positions,
		GLenum usage,
		GLuint locationIndex);
	void SetPositionAttribute(
		std::vector<glm::vec3> positions,
		GLenum usage,
		GLuint locationIndex);
	void SetColorAttribute(
		std::vector<glm::vec3> colors,
		GLenum usage,
		GLuint locationIndex);
	void SetColorAttribute(
		std::vector<glm::vec4> colors,
		GLenum usage,
		GLuint locationIndex);
private:
	GLuint _vertexArrayObject;
	GLuint _positionsVertexBufferObject;
	GLuint _colorsVertexBufferObject;
	GLint _vertexCount;

	void SetAttributeData(
		GLuint& buffer,
		const GLsizeiptr size,
		const void* data,
		GLenum usage,
		GLuint locationIndex,
		const GLint components);
};


