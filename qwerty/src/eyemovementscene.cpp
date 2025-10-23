//#include<imgui.h>
//#include<imgui_impl_glfw.h>
//#include<imgui_impl_opengl3.h>
//#include<glad/glad.h>-
//#include<glfw3.h>
//#include<iostream>
//#include</Programming/qwerty/qwerty/src/shaders/Shader.h>
////#include</Programming/qwerty/qwerty/resources/shaders/Triangle/
//#include<glm/glm.hpp>
//#include<glm/gtc/type_ptr.hpp>
//#include<glm/gtc/matrix_transform.hpp>
//#include</Programming/qwerty/qwerty/src/maths/qmath.h>
//#include</Programming/qwerty/qwerty/libraries/stbimage/stb_image.h>
//#include<vector>
//
//
//
//struct EyeGeometry
//{
//public: 
//
//
//
//	glm::vec3 eyePosition;
//	
//	std::vector<float> eyeOutlineVertices; 
//	std::vector<float> eyeBallVertices; 
//	std::vector<float> irisVertices; 
//	std::vector<float> pupilVertices;
//	
//
//public: 
//	void GenerateEyeOutline(float eyeOutlineVertices[66])
//	{
//		for (int i = 0; i < 66; i++)
//		{
//			this->eyeOutlineVertices.push_back(eyeOutlineVertices[i]);
//		}
//	}
//	void GeneratePupilVertices()
//	{
//
//	}
//};
//
//
//float eyeOutlineVertices[] = {
//    // Upper curve (semi-ellipse)
//    -0.5f,  0.0f,0.0f,
//    -0.4f,  0.1f,0.0f,
//    -0.3f,  0.15f,0.0f,
//    -0.2f,  0.18f,0.0f,
//    -0.1f,  0.2f,0.0f,
//     0.0f,  0.2f,0.0f,
//     0.1f,  0.2f,0.0f,
//     0.2f,  0.18f,0.0f,
//     0.3f,  0.15f,0.0f,
//     0.4f,  0.1f,0.0f,
//     0.5f,  0.0f,0.0f,
//
//     // Lower curve (mirrored)
//      0.4f, -0.1f,0.0f,
//      0.3f, -0.15f,0.0f,
//      0.2f, -0.18f,0.0f,
//      0.1f, -0.2f,0.0f,
//      0.0f, -0.2f,0.0f,
//     -0.1f, -0.2f,0.0f,
//     -0.2f, -0.18f,0.0f,
//     -0.3f, -0.15f,0.0f,
//     -0.4f, -0.1f,0.0f,
//     -0.5f,  0.0f, 0.0f
//};
//
//
//	const char* vertexShaderSource =
//		"#version 330 core\n"
//
//		"layout (location = 0 ) in vec3 aPos;\n"
//	//	"uniform mat4 model;\n"
//	//	"uniform mat4 projection;\n"
//		"void main()\n"
//		"{\n"
//		//"gl_Position = projection*model*vec4(vec3(aPos,0.0f),1.0f);\n"
//		"gl_Position = vec4(aPos,1.0f);\n"
//		"}\0";
//
//
//	const char* fragmentShaderSource =
//		"#version 330 core\n"
//		"out vec4 color;\n"
//		"void main()\n"
//		"{\n"
//		"color = vec4(0.0f,0.0f,0.0f,1.0f);\n"
//		"}\0";
//
//int main()
//{
//
//	glfwInit();
//	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
//	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
//	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
//
//	GLFWwindow* window = glfwCreateWindow(800, 600, "window", NULL, NULL);
//
//	glfwMakeContextCurrent(window);
//
//
//	if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
//	{
//		std::cout << "unable to init glad" << std::endl;
//	}
//
//	//eye structure creation
//
//	EyeGeometry eye; 
//	eye.GenerateEyeOutline(eyeOutlineVertices);
//
//
//	for (int i = 0; i < 42; i++)
//	{
//		std::cout << eye.eyeOutlineVertices[i] << std::endl;
//	}
//
//
//
//
//
//    //vbo, vao
//
//    unsigned int VBO, VAO;
//    
//    glGenBuffers(1, &VBO);
//    glGenVertexArrays(1, &VAO);
//    glBindBuffer(GL_ARRAY_BUFFER, VBO);
//    glBindVertexArray(VAO);
//
//	glBufferData(GL_ARRAY_BUFFER, sizeof(eye.eyeOutlineVertices), &eye.eyeOutlineVertices, GL_STATIC_DRAW);
//	glBufferData(GL_ARRAY_BUFFER, eye.eyeOutlineVertices.size()*sizeof(float), eye.eyeOutlineVertices.data(), GL_STATIC_DRAW);
//
//
//	//std::cout << eye.eyeOutlineVertices.size(); 
//	std::cout << eye.eyeOutlineVertices.data();
//
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), (void*)0);
//	glEnableVertexAttribArray(0);
//
//
//
//    //shaders
//    
//	unsigned int vertexShader, fragmentShader, shaderProgram; 
//
//	vertexShader = glCreateShader(GL_VERTEX_SHADER);
//	fragmentShader = glCreateShader(GL_FRAGMENT_SHADER);
//
//	glShaderSource(vertexShader, 1, &vertexShaderSource, NULL);
//	glShaderSource(fragmentShader, 1, &fragmentShaderSource, NULL);
//
//	glCompileShader(vertexShader);
//	glCompileShader(fragmentShader);
//
//	shaderProgram = glCreateProgram();
//
//	glAttachShader(shaderProgram, vertexShader);
//	glAttachShader(shaderProgram, fragmentShader);
//
//	glLinkProgram(shaderProgram);
//
//
//
//
//
//
//
//
//	while (!glfwWindowShouldClose(window))
//	{
//
//		glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
//		glClear(GL_COLOR_BUFFER_BIT);
//
//		//glDrawArrays()
//	//	glBindVertexArray(VAO);
//		glUseProgram(shaderProgram);
//
//	//	glDrawArrays(0, 20, GL_POINTS);
//		glDrawArrays(GL_LINE_STRIP,0,21);
//		//glDrawArrays(GL_POINTS,0,21);
//
//
//		glfwPollEvents();
//		glfwSwapBuffers(window);
//	}
//
//
//
//
//}