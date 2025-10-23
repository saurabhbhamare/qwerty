//#include<imgui.h>
//#include<imgui_impl_glfw.h>
//#include<imgui_impl_opengl3.h>
//#include<glad/glad.h>
//#include<glfw3.h>
//#include<iostream>
//#include</Programming/qwerty/qwerty/src/shaders/Shader.h>
////#include</Programming/qwerty/qwerty/resources/shaders/Triangle/
//#include<glm/glm.hpp>
//#include<glm/gtc/type_ptr.hpp>
//#include<glm/gtc/matrix_transform.hpp>
//#include</Programming/qwerty/qwerty/src/maths/qmath.h>
//#include</Programming/qwerty/qwerty/libraries/stbimage/stb_image.h>
//
////#define  PLAYERSIZE  0.05f; 
//
//
//float WIDTH = 800.0f;
//
//float PLAYERSIZE = 0.05f;
////float MOVESPEED = 0.001f;
//float MOVESPEED = 1.2f;
//float BARMOVESPEED = 0.01f;
//int ballMoveDirection = -1;
//
//
////time related
//float previous = 0;
//
////left and right bar positions
//
//
//glm::vec3 boxPosition = glm::vec3(0.0f, 0.0f, 0.0f);
//glm::vec3 leftPaddlePosition = glm::vec3(-0.9f, 0.0f, 0.0f);
//glm::vec3 rightPaddlePosition = glm::vec3(0.9f, 0.0f, 0.0f);
//
////matrices
//glm::mat4 modelBox = glm::mat4(1.0f);
//glm::mat4 modelLeftBar = glm::mat4(1.0f);
//glm::mat4 modelRightBar = glm::mat4(1.0f);
//glm::mat4 projection = glm::mat4(1.0f);
//
//void RenderGame(GLFWwindow* window,unsigned int shaderProgram);
//void RenderRightBar(unsigned int shaderProgram); 
//void RenderLeftBar(unsigned int shaderProgram); 
//void ProcessInputs(GLFWwindow* window);
//void CheckCollisionDetectionforBall();
//
//
//float playerData[]
//{
//	-0.5f,0.5f,0.0f,
//	 0.5f,0.5f,0.0f,
//	-0.5f,-0.5f,0.0f,
//	-0.5f,-0.5f,0.0f,
//	0.5f,-0.5f,0.0f,
//	0.5f,0.5f,0.0f
//};
//
//float indices[]
//{
//	0,1,2,
//	1,2,3
//};
//
//
////shader strings
//
//const char* vertexShaderSource =
//"#version 330 core\n"
//
//"layout (location = 0 ) in vec3 aPos;\n"
//"uniform mat4 model;\n"
//"uniform mat4 projection;\n"
//"void main()\n"
//"{\n"
//"gl_Position = projection*model*vec4(aPos,1.0f);\n"
//"}\0";
//
//
//const char* fragmentShaderSource =
//"#version 330 core\n"
//"out vec4 color;\n"
//"void main()\n"
//"{\n"
//"color = vec4(1.0f,0.0f,0.0f,1.0f);\n"
//"}\0";
//
//
//
//int main()
//{
//	//box
//	
//
//
//
//	//paddle
//	float paddleWidth = 0.06f;
//	float paddleHeight = 0.8f; 
//
//	glfwInit(); 
//	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
//	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
//	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
//
//	GLFWwindow* window = glfwCreateWindow(600, 600, "window", NULL, NULL);
//
//	glfwMakeContextCurrent(window);
//
//	if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
//	{
//		//std::cout << "unable to init glad" << std::endl;
//	}
//
//	//vbo and vao data
//	unsigned int VBO, VAO; 
//	glGenBuffers(1, &VBO);
//	glBindBuffer(GL_ARRAY_BUFFER,VBO);
//
//	glGenVertexArrays(1, &VAO);
//	glBindVertexArray(VAO);
//
//	glBufferData(GL_ARRAY_BUFFER, sizeof(playerData), &playerData, GL_STATIC_DRAW);
//
//	glEnableVertexAttribArray(0);
//
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), (void*)0);
//
//
//	//vertex and fragment shader 
//	unsigned int vertexShader, fragmentShader, shaderProgram; 
//
//	vertexShader = glCreateShader(GL_VERTEX_SHADER);
//	glShaderSource(vertexShader, 1, &vertexShaderSource, NULL);
//	fragmentShader = glCreateShader(GL_FRAGMENT_SHADER);
//	glShaderSource(fragmentShader, 1, &fragmentShaderSource, NULL);
//	shaderProgram = glCreateProgram();
//
//	glCompileShader(vertexShader);
//	glCompileShader(fragmentShader);
//	glAttachShader(shaderProgram, vertexShader);
//	glAttachShader(shaderProgram, fragmentShader);
//	glLinkProgram(shaderProgram);
//	glUseProgram(shaderProgram);
//
//
//	//matrix properties
//	//model = glm::rotate(model, glm::radians(45.0f), glm::vec3(0.0f, 0.0f, 1.0f));
//
//
//	//model = glm::scale(model,glm::vec3(0.1f,0.1f,0.1f));
//	modelBox = glm::scale(modelBox, glm::vec3(PLAYERSIZE , PLAYERSIZE, PLAYERSIZE));
//
//	modelLeftBar = glm::translate(modelLeftBar, glm::vec3(leftPaddlePosition));
//
//	modelLeftBar = glm::scale(modelLeftBar, glm::vec3(paddleWidth, paddleHeight, 0.0f));
//
//
//
//	modelRightBar = glm::translate(modelRightBar, glm::vec3(rightPaddlePosition));;
//	modelRightBar = glm::scale(modelRightBar, glm::vec3(paddleWidth , paddleHeight, 0.0f));
//
//	//time 
//
//
//	modelBox = glm::translate(modelBox, glm::vec3(0.0f, 0.0f, 0.0f));
//	//projection = glm::ortho(0.0f, 800.0f, 600.0f, 0.0f,-0.1f, 1.0f);
//	
//
//	if (glfwGetKey(window, GLFW_KEY_W) == GLFW_PRESS)
//	{
//		glm::vec3 movement = glm::vec3(0.0f, 1.0f, 0.0f) * BARMOVESPEED;
//		leftPaddlePosition += movement;
//		modelLeftBar = glm::translate(modelLeftBar, glm::vec3(leftPaddlePosition));
//		/*std::cout << leftBarPosition.x << std::endl;
//		std::cout << leftBarPosition.y << std::endl;
//		std::cout << leftBarPosition.z << std::endl;
//
//		std::cout << std::endl;
//		std::cout << std::endl;
//		std::cout << std::endl;*/
//	}
//
//	if (glfwGetKey(window, GLFW_KEY_S) == GLFW_PRESS)
//	{
//		leftPaddlePosition -= glm::vec3(0.0f, 1.0f, 0.0f) * BARMOVESPEED;
//	}
//	
//	
//	RenderGame(window,shaderProgram); 
//	
//}
//
//void CheckGameOver()
//{
//
//}
//void RenderGame(GLFWwindow* window,unsigned int shaderProgram)
//{
//	while (!glfwWindowShouldClose(window))
//	{
//		//deltatime calculations
//
//		
//		float currentTime = glfwGetTime();
//		float deltatime = currentTime - previous;
//		previous = currentTime; 
//
//		//std::cout << deltatime << std::endl;
//
//		glfwPollEvents();
//		ProcessInputs(window);
//		CheckCollisionDetectionforBall();
//
//	/*	std::cout << boxPosition.x << std::endl;
//		std::cout << boxPosition.y << std::endl;*/
//
//
//		/*std::cout << leftPaddlePosition.x << std::endl;
//		std::cout << leftPaddlePosition.y << std::endl;*/
//
//		//std::cout << std::endl;
//		//std::cout << boxPosition.x << std::endl;
//
//		glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
//		glClear(GL_COLOR_BUFFER_BIT);
//		glUseProgram(shaderProgram);
//
//
//	
//		modelBox = glm::scale(modelBox, glm::vec3(PLAYERSIZE, PLAYERSIZE, PLAYERSIZE));
//		glUniformMatrix4fv((glGetUniformLocation(shaderProgram, "model")), 1,false,glm::value_ptr(modelBox));
//		glUniformMatrix4fv((glGetUniformLocation(shaderProgram, "projection")), 1,false,glm::value_ptr(projection));
//
//		//game logic
//
//
//		//box movement
//
//
//		boxPosition += glm::vec3(1.0f *  ballMoveDirection * MOVESPEED*deltatime, 0.0f, 0.0f);
//	//	modelBox = glm::translate(modelBox, glm::vec3(-1.0f * MOVESPEED, 0.0f, 0.0f));
//		modelBox = glm::translate(glm::mat4(1.0f),boxPosition);
//		//modelBox = glm::translate(modelBox, glm::vec3(boxPosition.x, 0.0f, 0.0f));
//		glDrawArrays(GL_TRIANGLES, 0, 6);
//
//		//bar movement
//
//		RenderLeftBar(shaderProgram);
//		RenderRightBar(shaderProgram);
//
//		//glGetUniformLocation(shaderProgram, "model");
//		
//
//
//
//
//	//	glDrawArrays(GL_TRIANGLES, 3, 6);
//		
//		glfwSwapBuffers(window);
//
//	}
//}
//void RenderLeftBar(unsigned int shaderProgram)
//{
//	modelLeftBar = glm::scale(modelLeftBar, glm::vec3(0.06f, 0.6f, 0.0f));
//	//modelLeftBar = glm::translate(modelLeftBar, glm::vec3(leftBarPosition));
//	
//	glUniformMatrix4fv(glGetUniformLocation(shaderProgram, "model"), 1, false, glm::value_ptr(modelLeftBar));
//	glUniformMatrix4fv(glGetUniformLocation(shaderProgram, "projection"), 1, false, glm::value_ptr(projection));
//	glDrawArrays(GL_TRIANGLES, 0, 6);
//}
//void RenderRightBar(unsigned int shaderProgram)
//{
//	modelRightBar = glm::scale(modelRightBar, glm::vec3(0.06f, 0.6f, 0.0f));
//
//	glUniformMatrix4fv(glGetUniformLocation(shaderProgram, "model"), 1, false, glm::value_ptr(modelRightBar));
//	glUniformMatrix4fv(glGetUniformLocation(shaderProgram, "projection"), 1, false, glm::value_ptr(projection));
//	glDrawArrays(GL_TRIANGLES, 0, 6);
//	//glDrawArrays(GL_POINTS, 0, 6);
//}
//
//void RenderPlayer()
//{
//	//glDrawArrays()
//}
//
//void ProcessInputs(GLFWwindow * window)
//{
//	if (glfwGetKey(window, GLFW_KEY_W) && GLFW_PRESS)
//	{
//		glm::vec3 movement = glm::vec3(0.0f, 0.001f, 0.0f);
//		leftPaddlePosition += movement;
//		
//
//	}
//
//	if (glfwGetKey(window, GLFW_KEY_S) == GLFW_PRESS)
//	{
//		//glm::vec3 movement = glm::vec3(0.0f, 1.0f, 0.0f) * BARMOVESPEED;
//		glm::vec3 movement = glm::vec3(0.0f, 0.001f, 0.0f);
//		leftPaddlePosition -= movement;
//	}
//
//	if (glfwGetKey(window, GLFW_KEY_UP) && GLFW_PRESS)
//	{
//		glm::vec3 movement = glm::vec3(0.0f, 0.001f, 0.0f);
//		rightPaddlePosition += movement;
//	}
//
//	if (glfwGetKey(window, GLFW_KEY_DOWN) == GLFW_PRESS)
//	{
//		//glm::vec3 movement = glm::vec3(0.0f, 1.0f, 0.0f) * BARMOVESPEED;
//		glm::vec3 movement = glm::vec3(0.0f, 0.001f, 0.0f);
//		rightPaddlePosition -= movement;
//	}
//	
//	modelLeftBar = glm::translate(glm::mat4(1.0f), glm::vec3(leftPaddlePosition));
//	modelRightBar = glm::translate(glm::mat4(1.0f), glm::vec3(rightPaddlePosition));
//}
//void CheckCollisionDetectionforBall()
//{
//	if ((boxPosition.x < leftPaddlePosition.x + 0.06f) && (boxPosition.x + PLAYERSIZE > leftPaddlePosition.x)
//		&& (boxPosition.y < leftPaddlePosition.y + 0.8f) && (boxPosition.y + PLAYERSIZE > leftPaddlePosition.y ))
//	{
//	//	std::cout << " Box Collision with Paddle" << std::endl;
//		if (ballMoveDirection == 1)
//		{
//			ballMoveDirection = -1; 
//		}
//		else
//		{ 
//			ballMoveDirection = 1;
//		}
//
//	}
//	if ((boxPosition.x <rightPaddlePosition.x + 0.06f) && (boxPosition.x + PLAYERSIZE > rightPaddlePosition.x)
//		&& (boxPosition.y < rightPaddlePosition.y + 0.4f) && (boxPosition.y + PLAYERSIZE> rightPaddlePosition.y - 0.2f))
//	{
//		//std::cout << " Box Collision with Paddle" << std::endl;
//		if (ballMoveDirection == 1)
//		{
//			ballMoveDirection = -1;
//		}
//		else
//		{
//			ballMoveDirection = 1;
//		}
//
//	}
//}
//
