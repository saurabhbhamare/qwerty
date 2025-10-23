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
#include</Programming/qwerty/qwerty/libraries/stbimage/stb_image.h>





int main()
{

	glfwInit();
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

	GLFWwindow* window = glfwCreateWindow(600, 600, "window", NULL, NULL);

	glfwMakeContextCurrent(window);


	if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
	{
		std::cout << "unable to init glad" << std::endl;
	}

	glm::vec3 screenColor = glm::vec3(0.0f, 0.0f, 0.0f);


	while (!glfwWindowShouldClose(window))
	{



		float x = glm::sin(glfwGetTime());
		float y = glm::cos(glfwGetTime());
		float z = glm::tan(glfwGetTime());

		screenColor = glm::vec3(x, y, z);




		glClearColor(screenColor.x,screenColor.y,screenColor.z, 1.0f);
		glClear(GL_COLOR_BUFFER_BIT);
		glfwPollEvents();
		glfwSwapBuffers(window);
	}




}