//
//
////lightning strike 
//
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
//
////function decl
//void KeyboardInputHandling(GLFWwindow* window);
//void mouse_callback(GLFWwindow* window, double xposIn, double yposIn);
//unsigned int LoadTexture(const char* path);
//
////-------------------------------------------------------------------------------------------------------------
//
////camera properties
//
//glm::vec3 cameraPosition = glm::vec3(0.0f, 0.0f, -10.0f);
//glm::vec3 cameraFront = glm::vec3(0.0f, 0.0f, 1.0f);
//glm::vec3 up = glm::vec3(0.0f, 1.0f, 0.0f);
//
//bool firstMouse = true;
//float yaw = -90.0f;	// yaw is initialized to -90.0 degrees since a yaw of 0.0 results in a direction vector pointing to the right so we initially rotate a bit to the left.
//float pitch = 0.0f;
//float lastX = 800.0f / 2.0;
//float lastY = 600.0 / 2.0;
//float fov = 45.0f;
//
////---------------------------------------------------------------------------------------------------------------
//
//
////Shader 
//
//float vertices[] = {
//	// positions          // normals           // texture coords
//	-0.5f, -0.5f, -0.5f,  0.0f,  0.0f, -1.0f,  0.0f,  0.0f,
//	 0.5f, -0.5f, -0.5f,  0.0f,  0.0f, -1.0f,  1.0f,  0.0f,
//	 0.5f,  0.5f, -0.5f,  0.0f,  0.0f, -1.0f,  1.0f,  1.0f,
//	 0.5f,  0.5f, -0.5f,  0.0f,  0.0f, -1.0f,  1.0f,  1.0f,
//	-0.5f,  0.5f, -0.5f,  0.0f,  0.0f, -1.0f,  0.0f,  1.0f,
//	-0.5f, -0.5f, -0.5f,  0.0f,  0.0f, -1.0f,  0.0f,  0.0f,
//
//	-0.5f, -0.5f,  0.5f,  0.0f,  0.0f,  1.0f,  0.0f,  0.0f,
//	 0.5f, -0.5f,  0.5f,  0.0f,  0.0f,  1.0f,  1.0f,  0.0f,
//	 0.5f,  0.5f,  0.5f,  0.0f,  0.0f,  1.0f,  1.0f,  1.0f,
//	 0.5f,  0.5f,  0.5f,  0.0f,  0.0f,  1.0f,  1.0f,  1.0f,
//	-0.5f,  0.5f,  0.5f,  0.0f,  0.0f,  1.0f,  0.0f,  1.0f,
//	-0.5f, -0.5f,  0.5f,  0.0f,  0.0f,  1.0f,  0.0f,  0.0f,
//
//	-0.5f,  0.5f,  0.5f, -1.0f,  0.0f,  0.0f,  1.0f,  0.0f,
//	-0.5f,  0.5f, -0.5f, -1.0f,  0.0f,  0.0f,  1.0f,  1.0f,
//	-0.5f, -0.5f, -0.5f, -1.0f,  0.0f,  0.0f,  0.0f,  1.0f,
//	-0.5f, -0.5f, -0.5f, -1.0f,  0.0f,  0.0f,  0.0f,  1.0f,
//	-0.5f, -0.5f,  0.5f, -1.0f,  0.0f,  0.0f,  0.0f,  0.0f,
//	-0.5f,  0.5f,  0.5f, -1.0f,  0.0f,  0.0f,  1.0f,  0.0f,
//
//	 0.5f,  0.5f,  0.5f,  1.0f,  0.0f,  0.0f,  1.0f,  0.0f,
//	 0.5f,  0.5f, -0.5f,  1.0f,  0.0f,  0.0f,  1.0f,  1.0f,
//	 0.5f, -0.5f, -0.5f,  1.0f,  0.0f,  0.0f,  0.0f,  1.0f,
//	 0.5f, -0.5f, -0.5f,  1.0f,  0.0f,  0.0f,  0.0f,  1.0f,
//	 0.5f, -0.5f,  0.5f,  1.0f,  0.0f,  0.0f,  0.0f,  0.0f,
//	 0.5f,  0.5f,  0.5f,  1.0f,  0.0f,  0.0f,  1.0f,  0.0f,
//
//	-0.5f, -0.5f, -0.5f,  0.0f, -1.0f,  0.0f,  0.0f,  1.0f,
//	 0.5f, -0.5f, -0.5f,  0.0f, -1.0f,  0.0f,  1.0f,  1.0f,
//	 0.5f, -0.5f,  0.5f,  0.0f, -1.0f,  0.0f,  1.0f,  0.0f,
//	 0.5f, -0.5f,  0.5f,  0.0f, -1.0f,  0.0f,  1.0f,  0.0f,
//	-0.5f, -0.5f,  0.5f,  0.0f, -1.0f,  0.0f,  0.0f,  0.0f,
//	-0.5f, -0.5f, -0.5f,  0.0f, -1.0f,  0.0f,  0.0f,  1.0f,
//
//	-0.5f,  0.5f, -0.5f,  0.0f,  1.0f,  0.0f,  0.0f,  1.0f,
//	 0.5f,  0.5f, -0.5f,  0.0f,  1.0f,  0.0f,  1.0f,  1.0f,
//	 0.5f,  0.5f,  0.5f,  0.0f,  1.0f,  0.0f,  1.0f,  0.0f,
//	 0.5f,  0.5f,  0.5f,  0.0f,  1.0f,  0.0f,  1.0f,  0.0f,
//	-0.5f,  0.5f,  0.5f,  0.0f,  1.0f,  0.0f,  0.0f,  0.0f,
//	-0.5f,  0.5f, -0.5f,  0.0f,  1.0f,  0.0f,  0.0f,  1.0f
//};
////---------------------------------------------------------------------
//
//float lightningVertexData[] =
//{
//	0.0f,  0.9f, 0.0f,   // Top
//};
//
//
//
//void main()
//{
//	glfwInit();
//	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
//	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
//	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
//
//	GLFWwindow* window = glfwCreateWindow(1200, 800, "window", NULL, NULL);
//
//	glfwMakeContextCurrent(window);
//	glfwSetCursorPosCallback(window, mouse_callback);
//	glfwSetInputMode(window, GLFW_CURSOR, GLFW_CURSOR_DISABLED);
//
//
//	if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
//	{
//		std::cout << "unable to init glad" << std::endl;
//	}
//
//	glEnable(GL_DEPTH_TEST);
//
//	//VBO AND VAO DATA --------------------------------------------------------------------------
//
//	unsigned int VBO, VAO;
//	glGenBuffers(1, &VBO);
//	glGenVertexArrays(1, &VAO);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO);
//	glBindVertexArray(VAO);
//
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
//
//	glEnableVertexAttribArray(0);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(float), (void*)0);
//
//	glEnableVertexAttribArray(1);
//	glVertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(float), (void*)(6 * sizeof(float)));
//
//	glEnableVertexAttribArray(2);
//	glVertexAttribPointer(2, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(float), (void*)(3 * sizeof(float)));
//
//
//	//unsigned int lightningVBO, lightningVAO; 
//	//glGenBuffers(1, &lightningVBO);
//	//glGenVertexArrays(1, &lightningVAO);
//	//glGenBuffers(1, &lightningVBO);
//
//	//Texture data
//	unsigned int floorTexture = LoadTexture("C:/Programming/qwerty/qwerty/resources/textures/metal_plate_02_diff_4k1.jpg");
//
//
//	//Shader Implementation ------------------------------------------------------------------------------
//
//	Shader floorShader("C:/Programming/qwerty/qwerty/resources/shaders/LightningStrike/lightningstrikefloor.vert", "C:/Programming/qwerty/qwerty/resources/shaders/LightningStrike/lightningstrikefloor.frag", nullptr);
//	Shader lightningShader("C:/Programming/qwerty/qwerty/resources/shaders/LightningStrike/lightning.vert", "C:/Programming/qwerty/qwerty/resources/shaders/LightningStrike/lightning.frag",
//		"C:/Programming/qwerty/qwerty/resources/shaders/LightningStrike/lightning.geom");
//
//	//Model view Projection matrices----------------------------------------------
//
//	glm::mat4 model = glm::mat4(1.0f);
//	model = glm::scale(model, glm::vec3(100.0f, 1.0f, 100.0f));
//
//
//	glm::mat4 lightningModel = glm::mat4(1.0f);
//	glm::vec3 lightingStrikePosition = glm::vec3(25.0f, 5.0f, 10.0f);
//	lightningModel = glm::scale(lightningModel, glm::vec3(1.0f, 1.0f, 1.0f));
//	lightningModel = glm::translate(lightningModel, lightingStrikePosition);
//	//model = glm::rotate(model, glm::radians(45.0f), glm::vec3(0.0f, 0.0f, 1.0f));
//
//	glm::mat4 view = glm::mat4(1.0f);
//	view = glm::lookAt(cameraPosition, cameraPosition + cameraFront, up);
//
//	glm::mat4 projection = glm::mat4(1.0f);
//	projection = glm::perspective(45.0f, 1200.0f / 800.0f, 0.1f, 1000.0f);
//
//
//
//
//	//
//	bool isLightningHappening = false;
//
//
//	//
//
//
//	float pastTime = 0.0f;
//
//	//main loop
//
//	while (!glfwWindowShouldClose(window))
//	{
//		glfwPollEvents();
//		KeyboardInputHandling(window);
//
//		//time handling
//
//
//		float currentTime = glfwGetTime();
//		float deltatime = currentTime - pastTime;
//		pastTime = currentTime;
//
//		//std::cout << deltatime << std::endl;
//
//
//
//		glClearColor(0.012f, 0.012f, 0.06f, 1.0f);
//		//glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
//		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
//		floorShader.Invoke();
//		view = glm::lookAt(cameraPosition, cameraPosition + cameraFront, up);
//
//		floorShader.SetMat4Uniform("view", view);
//		floorShader.SetMat4Uniform("model", model);
//		floorShader.SetMat4Uniform("projection", projection);
//		floorShader.SetVec3Uniform("lightningStrikePosition", lightingStrikePosition);
//
//		glDrawArrays(GL_TRIANGLES, 0, 36);
//
//
//		//line rendering
//
//
//		lightningShader.Invoke();
//
//		lightningShader.SetMat4Uniform("model", lightningModel);
//		lightningShader.SetMat4Uniform("view", view);
//		lightningShader.SetMat4Uniform("projection", projection);
//
//
//
//
//		//glDrawArrays(GL_POINTS, 0, 4);
//		//glDrawArrays(GL_POINTS, 0, 1);
//		glDrawArrays(GL_LINES, 0, 1);
//
//		glfwSwapBuffers(window);
//
//	}
//}
//
//
//
//void KeyboardInputHandling(GLFWwindow* window)
//{
//	float speed = 0.01f;
//	glm::vec3 cameraRight = glm::normalize(glm::cross(cameraFront, up));
//	if (glfwGetKey(window, GLFW_KEY_W))
//	{
//		//std::cout << "w key pressed" << std::endl;
//		cameraPosition += cameraFront * speed;
//		//view = glm::translate()
//
//	}
//	if (glfwGetKey(window, GLFW_KEY_A))
//	{
//		//cameraPos -= glm::cross(cameraTarget, up)*speed;
//		cameraPosition -= cameraRight * speed;
//	}
//	if (glfwGetKey(window, GLFW_KEY_S))
//	{
//		cameraPosition -= cameraFront * speed;
//	}
//	if (glfwGetKey(window, GLFW_KEY_D))
//	{
//		cameraPosition += cameraRight * speed;
//	}
//	if (glfwGetKey(window, GLFW_KEY_E))
//	{
//		cameraPosition -= glm::vec3(0.0f, 1.0f, 0.0f) * speed;
//	}
//	if (glfwGetKey(window, GLFW_KEY_Q))
//	{
//		cameraPosition += glm::vec3(0.0f, 1.0f, 0.0f) * speed;
//	}
//}
//
//void mouse_callback(GLFWwindow* window, double xposIn, double yposIn)
//{
//	float xpos = static_cast<float>(xposIn);
//	float ypos = static_cast<float>(yposIn);
//
//	if (firstMouse)
//	{
//		lastX = xpos;
//		lastY = ypos;
//		firstMouse = false;
//	}
//
//	float xoffset = xpos - lastX;
//	float yoffset = lastY - ypos; // reversed since y-coordinates go from bottom to top
//	lastX = xpos;
//	lastY = ypos;
//
//	float sensitivity = 0.1f; // change this value to your liking
//	xoffset *= sensitivity;
//	yoffset *= sensitivity;
//
//	yaw += xoffset;
//	pitch += yoffset;
//
//	// make sure that when pitch is out of bounds, screen doesn't get flipped
//	if (pitch > 89.0f)
//		pitch = 89.0f;
//	if (pitch < -89.0f)
//		pitch = -89.0f;
//
//	glm::vec3 front;
//	front.x = cos(glm::radians(yaw)) * cos(glm::radians(pitch));
//	front.y = sin(glm::radians(pitch));
//	front.z = sin(glm::radians(yaw)) * cos(glm::radians(pitch));
//	cameraFront = glm::normalize(front);
//}
//
//
//unsigned int LoadTexture(char const* path)
//{
//	unsigned int textureID;
//	glGenTextures(1, &textureID);
//
//	int width, height, nrComponents;
//	unsigned char* data = stbi_load(path, &width, &height, &nrComponents, 0);
//
//	if (data)
//	{
//		GLenum format;
//		if (nrComponents == 1)
//		{
//			format = GL_RED;
//		}
//		else if (nrComponents == 3)
//		{
//			format = GL_RGB;
//		}
//		else if (nrComponents == 4)
//		{
//			format = GL_RGBA;
//		}
//
//		glBindTexture(GL_TEXTURE_2D, textureID);
//		glTexImage2D(GL_TEXTURE_2D, 0, format, width, height, 0, format, GL_UNSIGNED_BYTE, data);
//		glGenerateMipmap(GL_TEXTURE_2D);
//
//		glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
//		glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//		glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR_MIPMAP_LINEAR);
//		glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//		stbi_image_free(data);
//
//	}
//	else
//	{
//		std::cout << "texture failed to load at path :" << path << std::endl;
//		stbi_image_free(data);
//	}
//	return textureID;
//}