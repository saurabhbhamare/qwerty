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
////cube data 
//
////color data
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
//glm::vec3 cubePositions[100] = {
//	glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(2.0f, 5.0f, -15.0f), glm::vec3(-1.5f, -2.2f, -2.5f),
//	glm::vec3(-3.8f, -2.0f, -12.3f), glm::vec3(2.4f, -0.4f, -3.5f), glm::vec3(-1.7f, 3.0f, -7.5f),
//	glm::vec3(1.3f, -2.0f, -2.5f), glm::vec3(1.5f, 2.0f, -2.5f), glm::vec3(1.5f, 0.2f, -1.5f),
//	glm::vec3(-1.3f, 1.0f, -1.5f), glm::vec3(3.0f, 3.0f, -10.0f), glm::vec3(-2.0f, 4.0f, -5.0f),
//	glm::vec3(0.5f, -1.0f, -3.0f), glm::vec3(-4.0f, 2.0f, -8.0f), glm::vec3(2.0f, -3.0f, -6.0f),
//	glm::vec3(1.0f, 1.0f, -1.0f), glm::vec3(-2.5f, -1.5f, -4.5f), glm::vec3(3.5f, 2.5f, -9.5f),
//	glm::vec3(-3.0f, 0.0f, -7.0f), glm::vec3(0.0f, 3.0f, -2.0f), glm::vec3(2.2f, -2.2f, -5.5f),
//	glm::vec3(-1.1f, 1.1f, -3.3f), glm::vec3(4.0f, -1.0f, -6.0f), glm::vec3(-2.0f, 2.0f, -4.0f),
//	glm::vec3(1.8f, 0.5f, -2.2f), glm::vec3(-3.3f, -3.3f, -3.3f), glm::vec3(0.7f, 2.7f, -1.7f),
//	glm::vec3(2.5f, -0.5f, -2.5f), glm::vec3(-1.9f, 1.9f, -1.9f), glm::vec3(3.3f, -2.3f, -5.3f),
//	glm::vec3(-4.4f, 0.4f, -6.4f), glm::vec3(1.1f, -1.1f, -1.1f), glm::vec3(2.9f, 3.9f, -7.9f),
//	glm::vec3(-0.8f, -0.8f, -0.8f), glm::vec3(3.8f, -3.8f, -3.8f), glm::vec3(-2.7f, 2.7f, -2.7f),
//	glm::vec3(0.3f, 0.3f, -0.3f), glm::vec3(4.5f, -4.5f, -4.5f), glm::vec3(-1.6f, 1.6f, -1.6f),
//	glm::vec3(2.6f, -2.6f, -2.6f), glm::vec3(-3.6f, 3.6f, -3.6f), glm::vec3(0.6f, -0.6f, -0.6f),
//	glm::vec3(1.9f, 1.9f, -1.9f), glm::vec3(-2.9f, -2.9f, -2.9f), glm::vec3(3.1f, 3.1f, -3.1f),
//	glm::vec3(-4.1f, -4.1f, -4.1f), glm::vec3(0.9f, 0.9f, -0.9f), glm::vec3(2.3f, -2.3f, -2.3f),
//	glm::vec3(-3.3f, 3.3f, -3.3f), glm::vec3(1.7f, -1.7f, -1.7f), glm::vec3(-2.1f, 2.1f, -2.1f),
//	glm::vec3(3.6f, -3.6f, -3.6f), glm::vec3(-4.6f, 4.6f, -4.6f), glm::vec3(0.2f, -0.2f, -0.2f),
//	glm::vec3(1.5f, 1.5f, -1.5f), glm::vec3(-2.5f, -2.5f, -2.5f), glm::vec3(3.0f, 3.0f, -3.0f),
//	glm::vec3(-4.0f, -4.0f, -4.0f), glm::vec3(0.0f, 0.0f, -0.0f), glm::vec3(2.0f, -2.0f, -2.0f),
//	glm::vec3(-3.0f, 3.0f, -3.0f), glm::vec3(1.0f, -1.0f, -1.0f), glm::vec3(-2.0f, 2.0f, -2.0f),
//	glm::vec3(3.5f, -3.5f, -3.5f), glm::vec3(-4.5f, 4.5f, -4.5f), glm::vec3(0.5f, -0.5f, -0.5f),
//	glm::vec3(1.2f, 1.2f, -1.2f), glm::vec3(-2.2f, -2.2f, -2.2f), glm::vec3(3.2f, 3.2f, -3.2f),
//	glm::vec3(-4.2f, -4.2f, -4.2f), glm::vec3(0.2f, 0.2f, -0.2f), glm::vec3(2.8f, -2.8f, -2.8f),
//	glm::vec3(-3.8f, 3.8f, -3.8f), glm::vec3(1.8f, -1.8f, -1.8f), glm::vec3(-2.8f, 2.8f, -2.8f),
//	glm::vec3(3.9f, -3.9f, -3.9f), glm::vec3(-4.9f, 4.9f, -4.9f), glm::vec3(0.9f, -0.9f, -0.9f),
//	glm::vec3(1.6f, 1.6f, -1.6f), glm::vec3(-2.6f, -2.6f, -2.6f), glm::vec3(3.6f, 3.6f, -3.6f),
//	glm::vec3(-4.6f, -4.6f, -4.6f), glm::vec3(0.6f, 0.6f, -0.6f), glm::vec3(2.1f, -2.1f, -2.1f),
//	glm::vec3(-3.1f, 3.1f, -3.1f), glm::vec3(1.1f, -1.1f, -1.1f), glm::vec3(-2.1f, 2.1f, -2.1f),
//	glm::vec3(3.4f, -3.4f, -3.4f), glm::vec3(-4.4f, 4.4f, -4.4f) };
//
////camera properties
//glm::vec3 cameraPos = glm::vec3(0.0f, 0.0f, 3.0f);
//glm::vec3 shakingCamera = glm::vec3(0.0f, 0.0f, 3.0f);
//glm::vec3 cameraTarget = glm::vec3(0.0f, 0.0f, 0.0f);
//glm::vec3 up = glm::vec3(0.0f, 1.0f, 0.0f);
//glm::vec3 cameraFront = glm::vec3(0.0f,0.0f,-3.0f);
//
//
//bool firstMouse = true;
//float yaw = -90.0f;	// yaw is initialized to -90.0 degrees since a yaw of 0.0 results in a direction vector pointing to the right so we initially rotate a bit to the left.
//float pitch = 0.0f;
//float lastX = 800.0f / 2.0;
//float lastY = 600.0 / 2.0;
//float fov = 45.0f;
//
//
//unsigned int LoadTexture(const char* path);
//void KeyboardInputHandling(GLFWwindow* window);
//void mouse_callback(GLFWwindow* window, double xposIn, double yposIn);
//
////light properties
//glm::vec3 lightSourcePosition= glm::vec3(-1.0f, 1.0f, 2.0f);
//glm::vec3 lightColor = glm::vec3(1.0f, 1.0f, 1.0f);
//
////lighting cube properties
//glm::vec3 lightingCubePosition = glm::vec3(1.5f, 1.5f, 0.0f);
//glm::vec3 lightingCubeColor = glm::vec3(1.0f, 0.0f, 0.0f);
//
//
//
//int main()
//{
//	glfwInit();
//	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
//	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
//	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
//
//	GLFWwindow* window = glfwCreateWindow(800, 600, "window", NULL, NULL);
//	glfwMakeContextCurrent(window);
//	glfwSetCursorPosCallback(window, mouse_callback);
//	glfwSetInputMode(window, GLFW_CURSOR, GLFW_CURSOR_DISABLED);
//
//
//	if (!gladLoadGLLoader(GLADloadproc(glfwGetProcAddress)))
//	{
//		std::cout << "unable to init glad" << std::endl;
//	}
//	glEnable(GL_DEPTH_TEST);
//	//necessary matrices
//
//
//
//	glm::mat4 model = glm::mat4(1.0f);
//	
//	//model = glm::rotate(model, 45.0f, glm::vec3(0.0f, 1.0f, 1.0f));
//	//model = glm::translate(glm::mat4(1.0f), glm::vec3(0.0f, 0.0f, 0.4f));
//
//	glm::mat4 view = glm::mat4(1.0f);
//	view = glm::translate(glm::mat4(1.0f), glm::vec3(0.0f, 0.0f, -3.0f));
//
//	glm::mat4 projection = glm::mat4(1.0f);
//	projection = glm::perspective(glm::radians(45.0f), 800.0f / 600.0f, 0.1f, 100.0f);
//	//vbo,vao 
//	unsigned int VBO, VAO; 
//
//	glGenBuffers(1, &VBO);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO);
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), &vertices, GL_STATIC_DRAW);
//	//glBufferData(GL_ARRAY_BUFFER, sizeof(catVertices), &catVertices, GL_STATIC_DRAW);
//
//	glGenVertexArrays(1, &VAO);
//	glBindVertexArray(VAO);
//
//	glEnableVertexAttribArray(0);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8* sizeof(float), (void*)0);
//	//glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), (void*)0);
//
//	glEnableVertexAttribArray(1);
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(float), (void*)(3*sizeof(float)));
//
//	glEnableVertexAttribArray(2);
//	glVertexAttribPointer(2, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(float), (void*)(6 * sizeof(float)));
//
//	
//
//	//textures
//	//int width, height, nrChannels;
//	//unsigned char* data = stbi_load("C:/Programming/qwerty/qwerty/resources/textures/video starting door only.png", &width, &height, &nrChannels, 0);
//	//unsigned char* data = stbi_load("C:/Programming/qwerty/qwerty/resources/textures/preview.bmp", &width, &height, &nrChannels, 0);
//
//
//
//
//	//glBindTexture(GL_TEXTURE_2D, texture);
//	//glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGB, GL_UNSIGNED_BYTE, data);
//	//glGenerateMipmap(GL_TEXTURE_2D);
//
//	//unsigned int texture; 
//	//glGenTextures(1, &texture);
//	//glBindTexture(GL_TEXTURE_2D, texture);
//	//
//	
//	//glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);	// set texture wrapping to GL_REPEAT (default wrapping method)
//	//glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//
//
//
//
//
//	//glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
//	//glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
//
//
//	//glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR_MIPMAP_LINEAR);
//	//glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//
//
//
//	//new textures ================================
//
//	unsigned int diffuseMap = LoadTexture("C:/Programming/qwerty/qwerty/resources/textures/container2.png");
//	unsigned int specularMap = LoadTexture("C:/Programming/qwerty/qwerty/resources/textures/container2_specular.png");
//
//
//	//shaders
//	//Shader triangleShader("C:/Programming/qwerty/qwerty/resources/shaders/Triangle/Triangle.vert", "C:/Programming/qwerty/qwerty/resources/shaders/Triangle/Triangle.frag");
//
//	Shader lightingCubeShader("C:/Programming/qwerty/qwerty/resources/shaders/Lighting/lightingcubeshader.vert", "C:/Programming/qwerty/qwerty/resources/shaders/Lighting/lightingcubeshader.frag");
//	Shader lightSourceShader("C:/Programming/qwerty/qwerty/resources/shaders/Lighting/lightsourceshader.vert", "C:/Programming/qwerty/qwerty/resources/shaders/Lighting/lightsourceshader.frag");
//
//	float time; 
//
//	float shakeDuration = 5.5f; 
//	float shakeTime = 0.0f;
//
//	float deltatime = 0.0f;
//	float lastFrametime = 0.0f;
//
//	while (!glfwWindowShouldClose(window))
//	{
//		time = glfwGetTime();
//		float angle = time * glm::radians(45.0f)*0.0001f;
//
//		float currentTime = glfwGetTime(); 
//		deltatime = currentTime - lastFrametime; 
//		lastFrametime = currentTime;	
//
//		
//
//		//change light position  and color
//		
//		/*lightSourcePosition.x = 1.0f + sin(glfwGetTime()) * 4.0f;
//		lightSourcePosition.y = sin(glfwGetTime() / 2.0f) * 4.0f;
//		lightSourcePosition.z = sin(glfwGetTime() / 2.0f) * 4.0f;
//
//		lightColor.x = sin(glfwGetTime() * 2.0f);
//		lightColor.y = sin(glfwGetTime() * 0.7f);
//		lightColor.z = sin(glfwGetTime() * 1.0f);*/
//
//		//keyboard input handling 
//		KeyboardInputHandling(window);
//		glfwPollEvents();
//		//glClearColor(1.0f, 1.0f, 1.0f,1.0f);
//		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
//		view = glm::lookAt(cameraPos, cameraPos + cameraFront, up);
//
//		//triangle shader 
//		//glBindTexture(GL_TEXTURE_2D, texture);
//		//render cube shader
//
//		lightSourceShader.Use();
//
//		
//		
//		lightSourceShader.SetMat4("view", view);
//		lightSourceShader.SetMat4("projection", projection);
//		lightSourceShader.SetMat4("model", model);
//		lightSourceShader.SetVec3("lightSourcePosition", lightSourcePosition);
//
//		
//		
//		//lightSourceShader.Use();
//
//		glDrawArrays(GL_TRIANGLES, 0, 36);
//
//		lightingCubeShader.Use(); 
//
//	 	lightingCubeShader.SetVec3("lightColor", lightColor);
//		lightingCubeShader.SetVec3("light.position", lightSourcePosition);
//		lightingCubeShader.SetVec3("light.ambient", glm::vec3(0.2f, 0.2f, 0.2f));
//		lightingCubeShader.SetVec3("light.diffuse", glm::vec3(0.3f, 0.3f, 0.3f));
//		lightingCubeShader.SetVec3("light.specular", glm::vec3(1.0f, 1.0f, 1.0f));
//		
//
//		lightingCubeShader.SetFloat("light.constant", 1.0f);
//		lightingCubeShader.SetFloat("light.linear", 0.09f);
//		lightingCubeShader.SetFloat("light.quadratic", 0.032f);
//
//		//lightingCubeShader.SetVec3("material.ambient", glm::vec3(0.1f, 0.1f, 0.1f));
//		//lightingCubeShader.SetVec3("material.diffuse", glm::vec3(1.0f,0.5f,0.31f));
//		lightingCubeShader.SetVec3("material.specular", glm::vec3(0.5f, 0.5f, 0.5f));
//		lightingCubeShader.SetFloat("material.shininess", 65.0f);
//
//
//		lightingCubeShader.SetInt("material.diffuse", 0);
//		lightingCubeShader.SetInt("material.specular", 1);
//
//		//set textures
//		glActiveTexture(GL_TEXTURE0);
//		glBindTexture(GL_TEXTURE_2D, diffuseMap);
//
//		glActiveTexture(GL_TEXTURE1);
//		glBindTexture(GL_TEXTURE_2D, specularMap);
//		
//
//			
//
//
//		lightingCubeShader.SetMat4("view", view);
//		lightingCubeShader.SetMat4("projection", projection);
//		lightingCubeShader.SetMat4("model", model);
//		lightingCubeShader.SetVec3("lightSourcePosition", lightSourcePosition);
//		lightingCubeShader.SetVec3("light.direction", glm::vec3(0.0f, 10.0f, 0.0f));
//		lightingCubeShader.SetVec3("viewerPosition", cameraPos);
//		
//		//lightingCubeShader.SetVec3("lightingCubePosition", lightingCubePosition);
//
//
//		for (int i = 0; i < 10; i++)
//		{
//			float angle = 20.0f * i;
//			glm::mat4 model = glm::mat4(1.0f);
//			model = glm::translate(model, cubePositions[i]);
//			
//			model = glm::rotate(model, glm::radians(angle), glm::vec3(1.0f, 0.3f, 0.5f));
//			lightingCubeShader.SetMat4("model", model);
//			glDrawArrays(GL_TRIANGLES, 0, 36);
//
//
//		}
//
//
//
//
//		//glDrawArrays(GL_TRIANGLES, 0, 36);
//
//
//		glfwSwapBuffers(window);
//	}
//}
//
//void KeyboardInputHandling(GLFWwindow* window)
//{
//	float speed = 0.01f;
//	glm::vec3 cameraRight = glm::normalize(glm::cross(cameraFront, up));
//	if (glfwGetKey(window, GLFW_KEY_W))
//	{
//		//std::cout << "w key pressed" << std::endl;
//		cameraPos += cameraFront *speed;
//		//view = glm::translate()
//		
//	}
//	if (glfwGetKey(window, GLFW_KEY_A))
//	{
//		//cameraPos -= glm::cross(cameraTarget, up)*speed;
//		cameraPos -= cameraRight* speed;
//	}
//	if (glfwGetKey(window, GLFW_KEY_S))
//	{
//		cameraPos -= cameraFront*speed;
//	}
//	if (glfwGetKey(window, GLFW_KEY_D))
//	{
//		cameraPos += cameraRight * speed;
//	}
//	if (glfwGetKey(window, GLFW_KEY_E))
//	{
//		cameraPos -= glm::vec3(0.0f, 1.0f, 0.0f) * speed;
//	}
//	if (glfwGetKey(window, GLFW_KEY_Q))
//	{
//		cameraPos += glm::vec3(0.0f, 1.0f, 0.0f) * speed;
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
//
//
