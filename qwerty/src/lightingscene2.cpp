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

//cube data 

//color data

float vertices[] = {
	-0.5f, -0.5f, -0.5f,  0.0f,  0.0f, -1.0f,
	 0.5f, -0.5f, -0.5f,  0.0f,  0.0f, -1.0f,
	 0.5f,  0.5f, -0.5f,  0.0f,  0.0f, -1.0f,
	 0.5f,  0.5f, -0.5f,  0.0f,  0.0f, -1.0f,
	-0.5f,  0.5f, -0.5f,  0.0f,  0.0f, -1.0f,
	-0.5f, -0.5f, -0.5f,  0.0f,  0.0f, -1.0f,

	-0.5f, -0.5f,  0.5f,  0.0f,  0.0f, 1.0f,
	 0.5f, -0.5f,  0.5f,  0.0f,  0.0f, 1.0f,
	 0.5f,  0.5f,  0.5f,  0.0f,  0.0f, 1.0f,
	 0.5f,  0.5f,  0.5f,  0.0f,  0.0f, 1.0f,
	-0.5f,  0.5f,  0.5f,  0.0f,  0.0f, 1.0f,
	-0.5f, -0.5f,  0.5f,  0.0f,  0.0f, 1.0f,

	-0.5f,  0.5f,  0.5f, -1.0f,  0.0f,  0.0f,
	-0.5f,  0.5f, -0.5f, -1.0f,  0.0f,  0.0f,
	-0.5f, -0.5f, -0.5f, -1.0f,  0.0f,  0.0f,
	-0.5f, -0.5f, -0.5f, -1.0f,  0.0f,  0.0f,
	-0.5f, -0.5f,  0.5f, -1.0f,  0.0f,  0.0f,
	-0.5f,  0.5f,  0.5f, -1.0f,  0.0f,  0.0f,

	 0.5f,  0.5f,  0.5f,  1.0f,  0.0f,  0.0f,
	 0.5f,  0.5f, -0.5f,  1.0f,  0.0f,  0.0f,
	 0.5f, -0.5f, -0.5f,  1.0f,  0.0f,  0.0f,
	 0.5f, -0.5f, -0.5f,  1.0f,  0.0f,  0.0f,
	 0.5f, -0.5f,  0.5f,  1.0f,  0.0f,  0.0f,
	 0.5f,  0.5f,  0.5f,  1.0f,  0.0f,  0.0f,

	-0.5f, -0.5f, -0.5f,  0.0f, -1.0f,  0.0f,
	 0.5f, -0.5f, -0.5f,  0.0f, -1.0f,  0.0f,
	 0.5f, -0.5f,  0.5f,  0.0f, -1.0f,  0.0f,
	 0.5f, -0.5f,  0.5f,  0.0f, -1.0f,  0.0f,
	-0.5f, -0.5f,  0.5f,  0.0f, -1.0f,  0.0f,
	-0.5f, -0.5f, -0.5f,  0.0f, -1.0f,  0.0f,

	-0.5f,  0.5f, -0.5f,  0.0f,  1.0f,  0.0f,
	 0.5f,  0.5f, -0.5f,  0.0f,  1.0f,  0.0f,
	 0.5f,  0.5f,  0.5f,  0.0f,  1.0f,  0.0f,
	 0.5f,  0.5f,  0.5f,  0.0f,  1.0f,  0.0f,
	-0.5f,  0.5f,  0.5f,  0.0f,  1.0f,  0.0f,
	-0.5f,  0.5f, -0.5f,  0.0f,  1.0f,  0.0f
};

//camera properties
glm::vec3 cameraPos = glm::vec3(0.0f, 0.0f, 3.0f);
glm::vec3 shakingCamera = glm::vec3(0.0f, 0.0f, 3.0f);
glm::vec3 cameraTarget = glm::vec3(0.0f, 0.0f, 0.0f);
glm::vec3 up = glm::vec3(0.0f, 1.0f, 0.0f);
glm::vec3 cameraFront = glm::vec3(0.0f,0.0f,-3.0f);


bool firstMouse = true;
float yaw = -90.0f;	// yaw is initialized to -90.0 degrees since a yaw of 0.0 results in a direction vector pointing to the right so we initially rotate a bit to the left.
float pitch = 0.0f;
float lastX = 800.0f / 2.0;
float lastY = 600.0 / 2.0;
float fov = 45.0f;

void KeyboardInputHandling(GLFWwindow* window);
void mouse_callback(GLFWwindow* window, double xposIn, double yposIn);

//light properties
glm::vec3 lightSourcePosition= glm::vec3(-1.0f, 1.0f, 2.0f);
glm::vec3 lightColor = glm::vec3(1.0f, 1.0f, 1.0f);

//lighting cube properties
glm::vec3 lightingCubePosition = glm::vec3(1.5f, 1.5f, 0.0f);
glm::vec3 lightingCubeColor = glm::vec3(1.0f, 0.0f, 0.0f);



int main()
{
	glfwInit();
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

	GLFWwindow* window = glfwCreateWindow(800, 600, "window", NULL, NULL);
	glfwMakeContextCurrent(window);
	glfwSetCursorPosCallback(window, mouse_callback);
	glfwSetInputMode(window, GLFW_CURSOR, GLFW_CURSOR_DISABLED);


	if (!gladLoadGLLoader(GLADloadproc(glfwGetProcAddress)))
	{
		std::cout << "unable to init glad" << std::endl;
	}
	glEnable(GL_DEPTH_TEST);
	//necessary matrices



	glm::mat4 model = glm::mat4(1.0f);
	
	//model = glm::rotate(model, 45.0f, glm::vec3(0.0f, 1.0f, 1.0f));
	//model = glm::translate(glm::mat4(1.0f), glm::vec3(0.0f, 0.0f, 0.4f));

	glm::mat4 view = glm::mat4(1.0f);
	view = glm::translate(glm::mat4(1.0f), glm::vec3(0.0f, 0.0f, -3.0f));

	glm::mat4 projection = glm::mat4(1.0f);
	projection = glm::perspective(glm::radians(45.0f), 800.0f / 600.0f, 0.1f, 100.0f);
	//vbo,vao 
	unsigned int VBO, VAO; 

	glGenBuffers(1, &VBO);
	glBindBuffer(GL_ARRAY_BUFFER, VBO);
	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), &vertices, GL_STATIC_DRAW);
	//glBufferData(GL_ARRAY_BUFFER, sizeof(catVertices), &catVertices, GL_STATIC_DRAW);

	glGenVertexArrays(1, &VAO);
	glBindVertexArray(VAO);

	glEnableVertexAttribArray(0);
	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 6* sizeof(float), (void*)0);
	//glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), (void*)0);

	glEnableVertexAttribArray(1);
	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(float), (void*)(3*sizeof(float)));
	

	//textures
	int width, height, nrChannels;
	//unsigned char* data = stbi_load("C:/Programming/qwerty/qwerty/resources/textures/video starting door only.png", &width, &height, &nrChannels, 0);
	unsigned char* data = stbi_load("C:/Programming/qwerty/qwerty/resources/textures/preview.bmp", &width, &height, &nrChannels, 0);


	//glBindTexture(GL_TEXTURE_2D, texture);
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGB, GL_UNSIGNED_BYTE, data);
	glGenerateMipmap(GL_TEXTURE_2D);

	unsigned int texture; 
	glGenTextures(1, &texture);
	glBindTexture(GL_TEXTURE_2D, texture);
	
	
	//glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);	// set texture wrapping to GL_REPEAT (default wrapping method)
	//glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);

	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);


	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR_MIPMAP_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);

	//shaders
	//Shader triangleShader("C:/Programming/qwerty/qwerty/resources/shaders/Triangle/Triangle.vert", "C:/Programming/qwerty/qwerty/resources/shaders/Triangle/Triangle.frag");

	Shader lightingCubeShader("C:/Programming/qwerty/qwerty/resources/shaders/Lighting/lightingcubeshader.vert", "C:/Programming/qwerty/qwerty/resources/shaders/Lighting/lightingcubeshader.frag");
	Shader lightSourceShader("C:/Programming/qwerty/qwerty/resources/shaders/Lighting/lightsourceshader.vert", "C:/Programming/qwerty/qwerty/resources/shaders/Lighting/lightsourceshader.frag");

	float time; 

	float shakeDuration = 5.5f; 
	float shakeTime = 0.0f;

	float deltatime = 0.0f;
	float lastFrametime = 0.0f;

	while (!glfwWindowShouldClose(window))
	{
		time = glfwGetTime();
		float angle = time * glm::radians(45.0f)*0.0001f;

		float currentTime = glfwGetTime(); 
		deltatime = currentTime - lastFrametime; 
		lastFrametime = currentTime;	

		//change light position 
		lightSourcePosition.x = 1.0f + sin(glfwGetTime()) * 4.0f;
		lightSourcePosition.y = sin(glfwGetTime() / 2.0f) * 4.0f;
		lightSourcePosition.z = sin(glfwGetTime() / 2.0f) * 4.0f;
		//keyboard input handling 
		KeyboardInputHandling(window);
		glfwPollEvents();
		//glClearColor(1.0f, 1.0f, 1.0f,1.0f);
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
		view = glm::lookAt(cameraPos, cameraPos + cameraFront, up);

		//triangle shader 
		glBindTexture(GL_TEXTURE_2D, texture);
		//render cube shader

		lightSourceShader.Use();

		lightSourceShader.SetMat4("view", view);
		lightSourceShader.SetMat4("projection", projection);
		lightSourceShader.SetMat4("model", model);
		lightSourceShader.SetVec3("lightSourcePosition", lightSourcePosition);
		//lightSourceShader.Use();

		glDrawArrays(GL_TRIANGLES, 0, 36);

		lightingCubeShader.Use(); 
		lightingCubeShader.SetMat4("view", view);
		lightingCubeShader.SetMat4("projection", projection);
		lightingCubeShader.SetMat4("model", model);
		lightingCubeShader.SetVec3("lightSourcePosition", lightSourcePosition);
		lightingCubeShader.SetVec3("viewerPosition", cameraPos);
		
		//lightingCubeShader.SetVec3("lightingCubePosition", lightingCubePosition);

		glDrawArrays(GL_TRIANGLES, 0, 36);


		glfwSwapBuffers(window);
	}
}

void KeyboardInputHandling(GLFWwindow* window)
{
	float speed = 0.01f;
	if (glfwGetKey(window, GLFW_KEY_W))
	{
		//std::cout << "w key pressed" << std::endl;
		cameraPos -= glm::vec3(0.0f, 0.0f, 1.0f)*speed;
		//view = glm::translate()
		
	}
	if (glfwGetKey(window, GLFW_KEY_A))
	{
		//cameraPos -= glm::cross(cameraTarget, up)*speed;
		cameraPos -= glm::vec3(1.0f, 0.0f, 0.0f) * speed;
	}
	if (glfwGetKey(window, GLFW_KEY_S))
	{
		cameraPos += glm::vec3(0.0f, 0.0f, 1.0f)*speed;
	}
	if (glfwGetKey(window, GLFW_KEY_D))
	{
		//cameraPos += glm::cross(cameraTarget, up) * speed;
		//cameraPos += glm::vec3(1.0f, 0.0f, 0.0f) * speed;
		cameraPos.x += 1.0f * speed;
	}
	if (glfwGetKey(window, GLFW_KEY_E))
	{
		cameraPos -= glm::vec3(0.0f, 1.0f, 0.0f) * speed;
	}
	if (glfwGetKey(window, GLFW_KEY_Q))
	{
		cameraPos += glm::vec3(0.0f, 1.0f, 0.0f) * speed;
	}
}

void mouse_callback(GLFWwindow* window, double xposIn, double yposIn)
{
	float xpos = static_cast<float>(xposIn);
	float ypos = static_cast<float>(yposIn);

	if (firstMouse)
	{
		lastX = xpos;
		lastY = ypos;
		firstMouse = false;
	}

	float xoffset = xpos - lastX;
	float yoffset = lastY - ypos; // reversed since y-coordinates go from bottom to top
	lastX = xpos;
	lastY = ypos;

	float sensitivity = 0.1f; // change this value to your liking
	xoffset *= sensitivity;
	yoffset *= sensitivity;

	yaw += xoffset;
	pitch += yoffset;

	// make sure that when pitch is out of bounds, screen doesn't get flipped
	if (pitch > 89.0f)
		pitch = 89.0f;
	if (pitch < -89.0f)
		pitch = -89.0f;

	glm::vec3 front;
	front.x = cos(glm::radians(yaw)) * cos(glm::radians(pitch));
	front.y = sin(glm::radians(pitch));
	front.z = sin(glm::radians(yaw)) * cos(glm::radians(pitch));
	cameraFront = glm::normalize(front);
}



