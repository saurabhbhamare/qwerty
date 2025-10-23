//#include<imgui.h>
//#include<imgui_impl_glfw.h>
//#include<imgui_impl_opengl3.h>
//#include<glad/glad.h>-
//#include<glfw3.h>
//#include<iostream>
//
////#include</Programming/qwerty/qwerty/resources/shaders/Triangle/
//#include<glm/glm.hpp>
//#include<glm/gtc/type_ptr.hpp>
//#include<glm/gtc/matrix_transform.hpp>
//#include</Programming/qwerty/qwerty/src/maths/qmath.h>
//#include</Programming/qwerty/qwerty/libraries/stbimage/stb_image.h>
//#include<fstream>
//
//
//
//class LightingShader
//{
//public: 
//	unsigned int shaderID; 
//
//public: 
//	void CompileShader()
//	{
//		glCompileShader(shaderID);
//	}
//};
//
//enum  ShaderType
//{
//	VERTEX,
//	FRAGMENT
//};
//
//class qShader
//{
//public: 
//	ShaderType shaderType;
//
//	unsigned int ID;
//public: 
//	qShader(const char* vertexShaderPath, const char* fragmentShaderPath)
//	{
//
//	}
//
//};
//
//
//#define WIDTH 1200
//#define HEIGHT 800
// const char* WindowName = "qwerty";
//
////float vertices[] =
////{
////	//vertex           //color 
////	0.5f,-0.5f,0.0f,  1.0f,1.0f,0.0f,
////	-0.5f,-0.5f,0.0f, 1.0f,1.0f,0.0f,
////	0.0f,0.5f,0.0f,     1.0f,1.0f,1.0f
////};
//
//
// //camera properties
// void CameraInput(GLFWwindow* window);
// glm::vec3 cameraPos = glm::vec3(0.0f, 0.0f, -5.0f);
// glm::vec3 up = glm::vec3(0.0f, 1.0f, 0.0f);
// glm::vec3 cameraForward = glm::vec3(0.0f, 0.0f, 1.0f);
// 
//
//float vertices[] = {
//	-0.5f, -0.5f, -0.5f,  0.0f,  0.0f, -1.0f,
//	 0.5f, -0.5f, -0.5f,  0.0f,  0.0f, -1.0f,
//	 0.5f,  0.5f, -0.5f,  0.0f,  0.0f, -1.0f,
//	 0.5f,  0.5f, -0.5f,  0.0f,  0.0f, -1.0f,
//	-0.5f,  0.5f, -0.5f,  0.0f,  0.0f, -1.0f,
//	-0.5f, -0.5f, -0.5f,  0.0f,  0.0f, -1.0f,
//
//	-0.5f, -0.5f,  0.5f,  0.0f,  0.0f, 1.0f,
//	 0.5f, -0.5f,  0.5f,  0.0f,  0.0f, 1.0f,
//	 0.5f,  0.5f,  0.5f,  0.0f,  0.0f, 1.0f,
//	 0.5f,  0.5f,  0.5f,  0.0f,  0.0f, 1.0f,
//	-0.5f,  0.5f,  0.5f,  0.0f,  0.0f, 1.0f,
//	-0.5f, -0.5f,  0.5f,  0.0f,  0.0f, 1.0f,
//
//	-0.5f,  0.5f,  0.5f, -1.0f,  0.0f,  0.0f,
//	-0.5f,  0.5f, -0.5f, -1.0f,  0.0f,  0.0f,
//	-0.5f, -0.5f, -0.5f, -1.0f,  0.0f,  0.0f,
//	-0.5f, -0.5f, -0.5f, -1.0f,  0.0f,  0.0f,
//	-0.5f, -0.5f,  0.5f, -1.0f,  0.0f,  0.0f,
//	-0.5f,  0.5f,  0.5f, -1.0f,  0.0f,  0.0f,
//
//	 0.5f,  0.5f,  0.5f,  1.0f,  0.0f,  0.0f,
//	 0.5f,  0.5f, -0.5f,  1.0f,  0.0f,  0.0f,
//	 0.5f, -0.5f, -0.5f,  1.0f,  0.0f,  0.0f,
//	 0.5f, -0.5f, -0.5f,  1.0f,  0.0f,  0.0f,
//	 0.5f, -0.5f,  0.5f,  1.0f,  0.0f,  0.0f,
//	 0.5f,  0.5f,  0.5f,  1.0f,  0.0f,  0.0f,
//
//	-0.5f, -0.5f, -0.5f,  0.0f, -1.0f,  0.0f,
//	 0.5f, -0.5f, -0.5f,  0.0f, -1.0f,  0.0f,
//	 0.5f, -0.5f,  0.5f,  0.0f, -1.0f,  0.0f,
//	 0.5f, -0.5f,  0.5f,  0.0f, -1.0f,  0.0f,
//	-0.5f, -0.5f,  0.5f,  0.0f, -1.0f,  0.0f,
//	-0.5f, -0.5f, -0.5f,  0.0f, -1.0f,  0.0f,
//
//	-0.5f,  0.5f, -0.5f,  0.0f,  1.0f,  0.0f,
//	 0.5f,  0.5f, -0.5f,  0.0f,  1.0f,  0.0f,
//	 0.5f,  0.5f,  0.5f,  0.0f,  1.0f,  0.0f,
//	 0.5f,  0.5f,  0.5f,  0.0f,  1.0f,  0.0f,
//	-0.5f,  0.5f,  0.5f,  0.0f,  1.0f,  0.0f,
//	-0.5f,  0.5f, -0.5f,  0.0f,  1.0f,  0.0f
//};
//
//
//
//
//
//const char* vertexShaderSource =
//"#version 330 core\n"
//"layout (location = 0) in vec3 aPos;\n"
//"layout (location = 1) in vec3 aColor;\n"
//"out vec4 Color;\n"
//"uniform mat4 view;\n"
//"uniform mat4 model;\n"
//"uniform mat4 projection;\n"
//"void main()\n"
//"{\n"
//"Color = vec4(1.0f,0.0f,0.0f,1.0f);\n"
//"gl_Position = projection*view*model*vec4(aPos,1.0f);\n"
//"}\0";
//
//const char* fragmentShaderSource =
//"#version 330 core\n"
//"out vec4 FragColor;\n"
//"in vec4 Color;\n"
//"void main()\n"
//"{\n"
//"FragColor = Color;\n"
//"}\0";
//
//
//int main()
//{
//
//	//glfw and glad initialization 
//
//	glfwInit();
//	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
//	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
//	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
//
//	GLFWwindow* window = glfwCreateWindow(WIDTH, HEIGHT, WindowName, NULL, NULL);
//
//	glfwMakeContextCurrent(window);
//
//	if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
//	{
//		std::cout << "unable to init glad" << std::endl;
//	}
//	/*glEnable(GL_BLEND);
//	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);*/
//	//vertex and fragment shaders
//
//	unsigned int vertexShader, fragmentShader,geometryShader,shaderProgram; 
//	vertexShader  = glCreateShader(GL_VERTEX_SHADER);
//	fragmentShader  = glCreateShader(GL_FRAGMENT_SHADER);
//
//	glShaderSource(vertexShader, 1, &vertexShaderSource, NULL);
//	glShaderSource(fragmentShader, 1, &fragmentShaderSource, NULL);
//	
//
//	glCompileShader(vertexShader);
//	glCompileShader(fragmentShader);
//
//	//check errors in vertex and fragment shader
//
//
//	int success;
//	char infolog[1024];
//	glGetShaderiv(vertexShader, GL_COMPILE_STATUS, &success);
//	
//	glGetShaderInfoLog(vertexShader, 1024, NULL, infolog);
//
//	if (!success)
//	{
//		std::cout << "ERROR::VERTEX COMPILATION::" << infolog << std::endl;
//	}
//
//	shaderProgram = glCreateProgram();
//	glAttachShader(shaderProgram, vertexShader);
//	glAttachShader(shaderProgram, fragmentShader);
//
//	glLinkProgram(shaderProgram);
//	glUseProgram(shaderProgram);
//
//	//vao and vbo 
//
//	unsigned int VBO, VAO; 
//
//	glGenBuffers(1, &VBO);
//	glGenVertexArrays(1, &VAO);
//
//	glBindBuffer(GL_ARRAY_BUFFER,VBO);
//	glBindVertexArray(VAO);
//
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
//
//	glEnableVertexAttribArray(0);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(float), (void*)0);
//
//	glEnableVertexAttribArray(1);
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE,6 * sizeof(float), (void*)(3 * sizeof(float)));
//
//
//	//matrices
//	glm::mat4 view = glm::mat4(1.0f);
//	glm::mat4 model = glm::mat4(1.0f);
//	glm::mat4 projection = glm::mat4(1.0f);
//
//
//	model = glm::translate(model, glm::vec3(0.0f, 0.0f, -2.0f));
//	view = glm::lookAt(glm::vec3(0.0f, 0.0f, 0.0f), cameraPos, up);
//	projection = glm::perspective(45.0f, 1200.0f / 800.0f, 0.1f, 100.0f);
//	
//	
//	// main loop 
//
//	while (!glfwWindowShouldClose(window))
//	{
//		//keyboard inputs
//		CameraInput(window);
//
//		float time = sin(glfwGetTime()*0.00001f);
//		glfwPollEvents(); 
//		glClearColor(0.0f, 0.0f, 0.2f,1.0f);
//		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
//		
//		//glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
//	   //	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
//
//
//		//matrix modification
//		model = glm::rotate(model, time, glm::vec3(0.0f, 1.0f, 0.0f));
//		view = glm::lookAt(cameraPos, cameraPos + cameraForward, up);
//		
//		
//		//render triangle 
//		glUseProgram(shaderProgram);
//
//		int modelMatLocation = glGetUniformLocation(shaderProgram, "model");
//		glUniformMatrix4fv(modelMatLocation, 1, GL_FALSE, glm::value_ptr(model));
//
//		int viewMatLocation = glGetUniformLocation(shaderProgram, "view");
//		glUniformMatrix4fv(viewMatLocation, 1, GL_FALSE,glm::value_ptr(view));
//
//		int projectionMatLocation = glGetUniformLocation(shaderProgram, "projection");
//		glUniformMatrix4fv(projectionMatLocation, 1, GL_FALSE, glm::value_ptr(projection));
//
//		//glGetUniformfv(glGetUniformLocation(shaderProgram, "view"),view[0][0]);
//		
//		glDrawArrays(GL_TRIANGLES , 0, 36);
//		glfwSwapBuffers(window);
//	}
//	
//}
//
//void CameraInput(GLFWwindow* window)
//{
//	float cameraSpeed = 0.005f;
//	if (glfwGetKey(window, GLFW_KEY_W) == GLFW_PRESS)
//	{
//		cameraPos += glm::vec3(0.0f, 0.0f, 1.0f)*cameraSpeed;
//	}
//	if (glfwGetKey(window, GLFW_KEY_S) == GLFW_PRESS)
//	{
//		cameraPos -= glm::vec3(0.0f, 0.0f, 1.0f)*cameraSpeed;
//	}
//}