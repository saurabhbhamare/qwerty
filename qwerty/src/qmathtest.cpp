#include<imgui.h>
#include<imgui_impl_glfw.h>
#include<imgui_impl_opengl3.h>
#include<glad/glad.h>-
#include<glfw3.h>
#include<iostream>
#include</Programming/qwerty/qwerty/src/shaders/Shader.h>
//#include</Programming/qwerty/qwerty/resources/shaders/Triangle/
#include<glm/glm.hpp>
#include<glm/gtc/type_ptr.hpp>
#include<glm/gtc/matrix_transform.hpp>
#include</Programming/qwerty/qwerty/src/maths/qmath.h>


int main()
{
	qmath::vec3 pos(2.35f, 1.0f, 1.0f);
	glm::vec3 pos1(1.0f);
	glm::mat4 view = glm::mat4(1.0f);
	view = glm::translate(view, pos1);

	std::cout << pos1.x << std::endl;
	std::cout << pos1.y << std::endl;
	std::cout << pos1.z << std::endl;
	
	//qmath::Translate(pos);


	//std::cout << "hi" << std::endl;
}