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
//#include<Windows.h>
//
//
//#include <mmsystem.h>
//#pragma comment(lib, "winmm.lib")
//
//enum PaddleScreenSide
//{
//	LEFT,
//	RIGHT,
//	NONE
//};
//
//struct Paddle
//{
//
//public:
//	Paddle(glm::vec3 paddlePosition, float height, float width, PaddleScreenSide side)
//	{
//		this->paddlePosition = paddlePosition;
//		this->height = height;
//		this->width = width;
//		this->side = side;
//	}
//public:
//	glm::vec3 paddlePosition;
//	float height;
//	float width;
//	PaddleScreenSide side;
//}; 
//
//
////function decl
//
//
//void RenderCenterLine(unsigned int shaderProgram, glm::mat4& centerLineModelMat, glm::mat4& projectionMat, glm::vec3& centerLinePosition);
//void RenderBall(unsigned int shaderProgram, glm::mat4& ballModelMat, glm::mat4& projectionMat, glm::vec3& ballPosition);
//void RenderLeftPaddle(unsigned int shaderProgram, glm::mat4& leftPaddleModelMat, glm::mat4& projectionMat, glm::vec3& leftPaddlePosition);
//void RenderRightPaddle(unsigned int shaderProgram, glm::mat4& rightPaddleModelMat, glm::mat4& projectionMat, glm::vec3& rightPaddlePosition);
//
//void Render(unsigned int shaderProgram, glm::mat4& leftPaddleModelMat, glm::mat4& rightPaddleModelMat,
//	glm::mat4& ballModelMat, glm::mat4& projectionMat, glm::vec3& leftPaddlePosition, glm::vec3& rightPaddlePosition, glm::vec3& ballPosition);
//
//void ProcessInputs(GLFWwindow* window, glm::vec3& leftPaddlePosition, glm::vec3& rightPaddlePosition);
//
//
//void BallBounce(glm::vec3& leftPaddlePosition, glm::vec3& rightPaddlePosition, float bLEdge, float bREdge, float bBEdge, float bTEdge,
//	float rpLEdge, float rpREdge, float rpBEdge, float rpTEdge,
//	float lpLEdge, float lpREdge, float lpBEdge, float lpTEdge, int& ballMoveDirection, bool& isFirstCollision, glm::vec3& ballMoveDirectionVector, glm::vec3& ballPosition, PaddleScreenSide& currentSelected);
//
//void PrintSinValues();
//
//
//
//
////sound
//void PlayBackgroundMusic();
//
//float VerticesData[]
//{
//	-0.5f,0.5f,0.0f,
//	 0.5f,0.5f,0.0f,
//	-0.5f,-0.5f,0.0f,
//	-0.5f,-0.5f,0.0f,
//	0.5f,-0.5f,0.0f,
//	0.5f,0.5f,0.0f
//};
//
//struct Rect
//{
//	float left;
//	float right;
//	float top;
//	float bottom;
//};
//
//
//
//int main()
//{
//
//	const char* vertexShaderSource =
//		"#version 330 core\n"
//
//		"layout (location = 0 ) in vec3 aPos;\n"
//		"uniform mat4 model;\n"
//		"uniform mat4 projection;\n"
//		"void main()\n"
//		"{\n"
//		"gl_Position = projection*model*vec4(aPos,1.0f);\n"
//		"}\0";
//
//
//	const char* fragmentShaderSource =
//		"#version 330 core\n"
//		"out vec4 color;\n"
//		"void main()\n"
//		"{\n"
//		"color = vec4(0.0f,0.0f,1.0f,1.0f);\n"
//		"}\0";
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
//	glBindBuffer(GL_ARRAY_BUFFER, VBO);
//	
//
//	glGenVertexArrays(1, &VAO);
//	glBindVertexArray(VAO);
//
//	glBufferData(GL_ARRAY_BUFFER, sizeof(VerticesData), &VerticesData, GL_STATIC_DRAW);
//
//	glEnableVertexAttribArray(0);
//
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), (void*)0);
//
//
//	//background music 
//	//PlaySound(TEXT("C:\\Programming\\qwerty\\qwerty\\resources\\sounds\\mixkit-vampires-in-the-city-892.wav"), NULL, 0,NULL);
//	PlayBackgroundMusic();
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
//	// game management
//	bool isRunning = true;
//	float paddleMoveSpeed = 0.5f;
//	float ballMoveSpeed = 1.5f;
//	int ballMoveDirection = 1;
//	glm::vec3 ballMoveDirectionVector = glm::vec3(1.0f, 0.0f, 0.0f);
//
//	bool isFirstCollision = true;
//
//	// game data
//
//
//	glm::vec3 initialLeftPaddlePosition = glm::vec3(-0.9f, 0.5f, 0.5f);
//	glm::vec3 initialRightPaddlePosition = glm::vec3(0.9f, 0.5f, 0.5f);
//	float paddleHeight = 0.2f;
//	float paddleWidth = 0.03f;
//
//	PaddleScreenSide currentSide;
//	currentSide = PaddleScreenSide::NONE;
//
//
//	Paddle leftPaddle(initialLeftPaddlePosition, paddleHeight, paddleWidth, PaddleScreenSide(LEFT));
//	Paddle rightPaddle(initialRightPaddlePosition, paddleHeight, paddleWidth, PaddleScreenSide(RIGHT));
//
//
//
//
//
//
//	glm::vec3 paddleScale = glm::vec3(0.06f, 0.4f, 0.0f);
//
//	glm::vec3 ballPosition = glm::vec3(0.0f, 0.0f, 0.0f);
//	glm::vec3 leftPaddlePosition = glm::vec3(-0.9f, 0.0f, 0.0f);
//	glm::vec3 rightPaddlePosition = glm::vec3(0.9f, 0.0f, 0.0f);
//
//	//glm::vec3 leftPaddlePosition = glm::vec3(50.0f, 250.0f, 0.0f);
//	//glm::vec3 rightPaddlePosition = glm::vec3(730.0f, 250.0f, 0.0f);
//
//
//
//	//
//	glm::vec3 centerLinePosition = glm::vec3(0.5f, 0.5f, 0.0f);
//	glm::mat4 centerLineModelMat = glm::mat4(1.0f);
//
//	centerLineModelMat = glm::translate(glm::mat4(1.0f), centerLinePosition);
//	centerLineModelMat = glm::scale(centerLineModelMat, glm::vec3(0.0025, 1.0f, 0.0f));
//
//
//	//matrices for paddle
////	glm::mat4 projectionMat = glm::ortho(0.0f, 600.0f, 600.0f, 0.0f, -0.1f, 1.0f);
//	glm::mat4 projectionMat = glm::ortho(-1.0f, 1.0f, -1.0f, 1.0f);
//
//
//	glm::mat4 leftPaddleModelMat = glm::mat4(1.0f);
//	glm::mat4 rightPaddleModelMat = glm::mat4(1.0f);
//	glm::mat4 ballModelMat = glm::mat4(1.0f);
//
//	//translation and scaling 
//	leftPaddleModelMat = glm::translate(glm::mat4(1.0f), leftPaddlePosition);
//	leftPaddleModelMat = glm::scale(leftPaddleModelMat, paddleScale);
//
//	//ballModelMat = glm::scale(glm::mat4(1.0f), glm::vec3(0.5f, 0.5f, 0.0f));
//
//
//
//	ballModelMat = glm::translate(glm::mat4(1.0f), ballPosition);
//
//	ballModelMat = glm::scale(glm::mat4(1.0f), glm::vec3(0.25f, 0.25f, 0.0f));
//	//ballModelMat = glm::scale(ballModelMat, glm::vec3(0.5f, 0.5f, 0.0f));
//
//	while (isRunning)
//	{
//
//
//		//test functions
//		PrintSinValues();
//
//		glfwPollEvents();
//		glClear(GL_COLOR_BUFFER_BIT);
//
//		ProcessInputs(window, leftPaddlePosition, rightPaddlePosition);
//
//
//		glUseProgram(shaderProgram);
//
//
//		//Update
//
//		float moveSpeed = 0.0005f;
//		//ballPosition += glm::vec3(ballMoveDirection*moveSpeed, 0.0f, 0.0f)*ballMoveDirectionVector;
//		//ballPosition += glm::vec3(ballMoveDirection*moveSpeed, 1.0f, 0.0f)*ballMoveDirectionVector;
//		ballPosition += ballMoveDirectionVector * moveSpeed;
//		
//
//		//render
//
//		Render(shaderProgram, leftPaddleModelMat, rightPaddleModelMat, ballModelMat, projectionMat, leftPaddlePosition, rightPaddlePosition, ballPosition);
//
//		BallBounce(leftPaddlePosition, rightPaddlePosition, ballPosition.x - 0.025f, ballPosition.x + 0.025f, ballPosition.y + 0.025f, ballPosition.y - 0.025f
//			, rightPaddlePosition.x - 0.03f, rightPaddlePosition.x + 0.03f, rightPaddlePosition.y + 0.2f, rightPaddlePosition.y - 0.2f,
//			leftPaddlePosition.x - 0.03f, leftPaddlePosition.x + 0.03f, leftPaddlePosition.y + 0.2f, leftPaddlePosition.y - 0.2f, ballMoveDirection, isFirstCollision, ballMoveDirectionVector, ballPosition, currentSide);
//
//
//
//		glfwSwapBuffers(window);
//	}
//
//}
//
//void Update()
//{
//	//	ProcessInputs(GLFWwindow* window, glm::vec3& leftPaddlePosition,glm::vec3& rightPaddlePosition);
//		//update ball position 
//
//		//update bar position 
//
//}
//
//void Render(unsigned int shaderProgram, glm::mat4& leftPaddleModelMat, glm::mat4& rightPaddleModelMat,
//	glm::mat4& ballModelMat, glm::mat4& projectionMat, glm::vec3& leftPaddlePosition, glm::vec3& rightPaddlePosition, glm::vec3& ballPosition)
//{
//	//RenderCenterLine(shaderProgram,
//	RenderBall(shaderProgram, ballModelMat, projectionMat, ballPosition);
//	RenderLeftPaddle(shaderProgram, leftPaddleModelMat, projectionMat, leftPaddlePosition);
//	RenderRightPaddle(shaderProgram, rightPaddleModelMat, projectionMat, rightPaddlePosition);
//	//RenderRightPaddle(shaderProgram, rightPaddleModelMat, projectionMat);
//	//RenderBall()
//}
//void ProcessInputs(GLFWwindow* window, glm::vec3& leftPaddlePosition, glm::vec3& rightPaddlePosition)
//{
//	glm::vec3 movement = glm::vec3(0.0f, 0.001f, 0.0f);
//
//	if (glfwGetKey(window, GLFW_KEY_W) && GLFW_PRESS)
//	{
//		if (leftPaddlePosition.y + 0.2f > 1.0f) return;
//		leftPaddlePosition += movement;
//	}
//
//	if (glfwGetKey(window, GLFW_KEY_S) == GLFW_PRESS)
//	{
//		if (leftPaddlePosition.y - 0.2f < -1.0f) return;
//		leftPaddlePosition -= movement;
//	}
//	if (glfwGetKey(window, GLFW_KEY_UP) && GLFW_PRESS)
//	{
//		if (rightPaddlePosition.y + 0.2f > 1.0f) return;
//		rightPaddlePosition += movement;
//	}
//	if (glfwGetKey(window, GLFW_KEY_DOWN) == GLFW_PRESS)
//	{
//		if (rightPaddlePosition.y - 0.2f < -1.0f) return;
//		rightPaddlePosition -= movement;
//	}
//}
//
//void RenderCenterLine(unsigned int shaderProgram, glm::mat4& centerLineModelMat, glm::mat4& projectionMat, glm::vec3& centerLinePosition)
//{
//	glUniformMatrix4fv(glGetUniformLocation(shaderProgram, "model"), 1, false, glm::value_ptr(centerLineModelMat));
//	glUniformMatrix4fv(glGetUniformLocation(shaderProgram, "projection"), 1, false, glm::value_ptr(projectionMat));
//	glDrawArrays(GL_TRIANGLES, 0, 6);
//
//
//}
//
//void RenderLeftPaddle(unsigned int shaderProgram, glm::mat4& leftPaddleModelMat, glm::mat4& projectionMat, glm::vec3& leftPaddlePosition)
//{
//	leftPaddleModelMat = glm::translate(glm::mat4(1.0f), leftPaddlePosition);
//	leftPaddleModelMat = glm::scale(leftPaddleModelMat, glm::vec3(0.06f, 0.4f, 0.0f));
//
//	glUniformMatrix4fv(glGetUniformLocation(shaderProgram, "model"), 1, false, glm::value_ptr(leftPaddleModelMat));
//	glUniformMatrix4fv(glGetUniformLocation(shaderProgram, "projection"), 1, false, glm::value_ptr(projectionMat));
//	glDrawArrays(GL_TRIANGLES, 0, 6);
//}
//
//void RenderRightPaddle(unsigned int shaderProgram, glm::mat4& rightPaddleModelMat, glm::mat4& projectionMat, glm::vec3& rightPaddlePosition)
//{
//	rightPaddleModelMat = glm::translate(glm::mat4(1.0f), rightPaddlePosition);
//	rightPaddleModelMat = glm::scale(rightPaddleModelMat, glm::vec3(0.06f, 0.4f, 0.0f));
//
//	glUniformMatrix4fv(glGetUniformLocation(shaderProgram, "model"), 1, false, glm::value_ptr(rightPaddleModelMat));
//	glUniformMatrix4fv(glGetUniformLocation(shaderProgram, "projection"), 1, false, glm::value_ptr(projectionMat));
//	glDrawArrays(GL_TRIANGLES, 0, 6);
//}
//void RenderBall(unsigned int shaderProgram, glm::mat4& ballModelMat, glm::mat4& projectionMat, glm::vec3& ballPosition)
//{
//
//	glm::mat4 model = glm::translate(glm::mat4(1.0f), ballPosition);
//	model = glm::scale(model, glm::vec3(0.05f, 0.05f, 0.0f));
//
//	glUniformMatrix4fv(glGetUniformLocation(shaderProgram, "model"), 1, false, glm::value_ptr(model));
//	glUniformMatrix4fv(glGetUniformLocation(shaderProgram, "projection"), 1, false, glm::value_ptr(projectionMat));
//	glDrawArrays(GL_TRIANGLES, 0, 6);
//}
////collision detection logic 
//
//void BallBounce(glm::vec3& leftPaddlePosition, glm::vec3& rightPaddlePosition, float bLEdge, float bREdge, float bBEdge, float bTEdge,
//	float rpLEdge, float rpREdge, float rpBEdge, float rpTEdge,
//	float lpLEdge, float lpREdge, float lpBEdge, float lpTEdge, int& ballMoveDirection, bool& isFirstCollision, glm::vec3& ballMoveDirectionVector, glm::vec3& ballPosition, PaddleScreenSide& currentSelectedPaddle)
//{
//	if (bBEdge > 1 || bTEdge < -1)
//	{
//		ballMoveDirectionVector.y = -ballMoveDirectionVector.y;
//	}
//	//if (bREdge > 1 || bLEdge < -1)
//	//{
//	//	ballPosition = glm::vec3(0.0f, 0.0f, 0.0f);
//	//	ballMoveDirectionVector.y = -ballMoveDirectionVector.y;
//	//}
//
//	if (bREdge > 1)
//	{
//		ballPosition = glm::vec3(0.0f, 0.0f, 0.0f);
//		ballMoveDirectionVector = glm::vec3(-1.0f, 0.0f, 0.0f);
//	}
//
//	if (bLEdge < -1)
//	{
//		ballPosition = glm::vec3(0.0f, 0.0f, 0.0f);
//		ballMoveDirectionVector = glm::vec3(1.0f, 0.0f, 0.0f);
//	}
//	if ((bREdge > rpLEdge && bLEdge < rpREdge && bTEdge < rpBEdge && bBEdge > rpTEdge))
//	{
//
//
//		if (bBEdge == rpTEdge || bTEdge == rpBEdge)
//		{
//
//			std::cout << "top edge collision occured" << std::endl;
//			ballMoveDirectionVector.x = 1.0f; 
//			return;
//		}
//
//
//		float relativeIntersectY = ballPosition.y - rightPaddlePosition.y;
//		float normalizedY = relativeIntersectY / (0.2);
//
//	/*	if (normalizedY > 1.0f)
//		{
//			normalizedY = 0.75f;
//		}*/
//
//		glm::vec3 newDirection = glm::normalize(glm::vec3(-ballMoveDirectionVector.x, normalizedY, 0.0f));
//
//
//		std::cout << normalizedY << std::endl;
//
//
//		currentSelectedPaddle = PaddleScreenSide::RIGHT;
//
//		ballMoveDirectionVector = newDirection;
//		PlaySound(TEXT("C:\\Programming\\qwerty\\qwerty\\resources\\sounds\\tennis-smash-100733.wav"), NULL, SND_FILENAME | SND_ASYNC);
//	}
//	if ((bREdge > lpLEdge && bLEdge < lpREdge && bTEdge < lpBEdge && bBEdge > lpTEdge))
//	{
//		if (bBEdge == lpTEdge || bTEdge == lpBEdge)
//		{
//			std::cout << "top edge collision occured" << std::endl;
//			ballMoveDirectionVector.x = 1.0f;
//			return;
//		}
//
//		if (bBEdge == lpTEdge || bTEdge == lpBEdge)
//		{
//			std::cout << "top edge collision occured" << std::endl;
//			ballMoveDirectionVector.x = 1.0f;
//			return;
//		}
//
//
//
//		float relativeIntersectY = ballPosition.y - leftPaddlePosition.y;
//		float normalizedY = relativeIntersectY / (0.2);
//
//	/*	if (normalizedY > 1.0f)
//		{
//			normalizedY = 0.75f; 
//		}*/
//
//		glm::vec3 newDirection = glm::normalize(glm::vec3(-ballMoveDirectionVector.x, normalizedY, 0.0f));
//
//
//		currentSelectedPaddle = PaddleScreenSide::LEFT;
//
//		ballMoveDirectionVector = newDirection;
//		PlaySound(TEXT("C:\\Programming\\qwerty\\qwerty\\resources\\sounds\\tennis-smash-100733.wav"), NULL, SND_FILENAME | SND_ASYNC);
//	}
//
//}
//
//void CheckGameOver()
//{
//
//}
//
//
//void PrintSinValues()
//{
//	float value = glm::sin(glfwGetTime());
//}
//void OnFirstCollisionWithPaddle()
//{
//}
//
//void PlayBackgroundMusic()
//{
//	
//		// Close any previous instance of "bgm"
//		mciSendString(TEXT("close bgm"), NULL, 0, NULL);
//
//		// Now open and play
//		mciSendString(TEXT("open \"C:\\Programming\\qwerty\\qwerty\\resources\\sounds\\mixkit-vampires-in-the-city-892.wav\" type waveaudio alias bgm"), NULL, 0, NULL);
//		mciSendString(TEXT("play bgm "), NULL, 0, NULL);
//	
//
//
//
//	/*TCHAR errorMsg[256];
//	MCIERROR err = mciSendString(TEXT("open \"C:\\Programming\\qwerty\\qwerty\\resources\\sounds\\mixkit-vampires-in-the-city-892.wav\" type waveaudio alias bgm"), NULL, 0, NULL);
//	if (err != 0)
//	{
//		mciGetErrorString(err, errorMsg, 256);
//		MessageBox(NULL, errorMsg, TEXT("MCI Error"), MB_OK);
//	}*/
//
//}