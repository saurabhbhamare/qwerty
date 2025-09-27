#pragma once

//old implementation 


#include<iostream>
#include<glad/glad.h>
#include<fstream>
#include<sstream>
#include<string>
#include<glm/glm.hpp>
#include</Programming/qwerty/qwerty/src/maths/qmath.h>
class Shader
{

public: 
	unsigned int ID;
public: 
	Shader(const char* vertexShaderSource, const char* fragmentShaderSource );
	void Use(); 
	void CheckCompileErrors(unsigned int shader, std::string type);
	void SetBool(const std::string& name, bool value);
	void SetFloat(const std::string& name, float value);
	void SetInt(const std::string& name, int value);
	void SetVec3(const std::string& name, const glm::vec3& value);
	//void SetVec3(const std::string& name, qmath::vec3& value);
	void SetMat4(const std::string& name, glm::mat4& value);
};



// new implementation

//class Shader
//{
//	unsigned int shaderID;
//
//public: 
//	Shader(const char* vertexShaderPath, const char* fragmentShaderPath);
//public: 
//	void Use();
//	void CompileShader();
//	void CheckCompilationErrors();
//};
