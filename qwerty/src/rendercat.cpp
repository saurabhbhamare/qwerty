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
//
//float vertices[] = {
//	-0.5f, -0.5f, -0.5f,  0.0f, 0.0f,
//	 0.5f, -0.5f, -0.5f,  1.0f, 0.0f,
//	 0.5f,  0.5f, -0.5f,  1.0f, 1.0f,
//	 0.5f,  0.5f, -0.5f,  1.0f, 1.0f,
//	-0.5f,  0.5f, -0.5f,  0.0f, 1.0f,
//	-0.5f, -0.5f, -0.5f,  0.0f, 0.0f,
//
//	-0.5f, -0.5f,  0.5f,  0.0f, 0.0f,
//	 0.5f, -0.5f,  0.5f,  1.0f, 0.0f,
//	 0.5f,  0.5f,  0.5f,  1.0f, 1.0f,
//	 0.5f,  0.5f,  0.5f,  1.0f, 1.0f,
//	-0.5f,  0.5f,  0.5f,  0.0f, 1.0f,
//	-0.5f, -0.5f,  0.5f,  0.0f, 0.0f,
//
//	-0.5f,  0.5f,  0.5f,  1.0f, 0.0f,
//	-0.5f,  0.5f, -0.5f,  1.0f, 1.0f,
//	-0.5f, -0.5f, -0.5f,  0.0f, 1.0f,
//	-0.5f, -0.5f, -0.5f,  0.0f, 1.0f,
//	-0.5f, -0.5f,  0.5f,  0.0f, 0.0f,
//	-0.5f,  0.5f,  0.5f,  1.0f, 0.0f,
//
//	 0.5f,  0.5f,  0.5f,  1.0f, 0.0f,
//	 0.5f,  0.5f, -0.5f,  1.0f, 1.0f,
//	 0.5f, -0.5f, -0.5f,  0.0f, 1.0f,
//	 0.5f, -0.5f, -0.5f,  0.0f, 1.0f,
//	 0.5f, -0.5f,  0.5f,  0.0f, 0.0f,
//	 0.5f,  0.5f,  0.5f,  1.0f, 0.0f,
//
//	-0.5f, -0.5f, -0.5f,  0.0f, 1.0f,
//	 0.5f, -0.5f, -0.5f,  1.0f, 1.0f,
//	 0.5f, -0.5f,  0.5f,  1.0f, 0.0f,
//	 0.5f, -0.5f,  0.5f,  1.0f, 0.0f,
//	-0.5f, -0.5f,  0.5f,  0.0f, 0.0f,
//	-0.5f, -0.5f, -0.5f,  0.0f, 1.0f,
//
//	-0.5f,  0.5f, -0.5f,  0.0f, 1.0f,
//	 0.5f,  0.5f, -0.5f,  1.0f, 1.0f,
//	 0.5f,  0.5f,  0.5f,  1.0f, 0.0f,
//	 0.5f,  0.5f,  0.5f,  1.0f, 0.0f,
//	-0.5f,  0.5f,  0.5f,  0.0f, 0.0f,
//	-0.5f,  0.5f, -0.5f,  0.0f, 1.0f
//};
//
//GLfloat catVertices[] = {
//	// Head (circle-like triangle fan)
//	0.0f, 0.6f, 0.0f,
//	0.0f, 0.8f, 0.0f,
//	0.15f, 0.75f, 0.0f,
//	0.2f, 0.6f, 0.0f,
//	0.15f, 0.45f, 0.0f,
//	0.0f, 0.4f, 0.0f,
//	-0.15f, 0.45f, 0.0f,
//	-0.2f, 0.6f, 0.0f,
//	-0.15f, 0.75f, 0.0f,
//	0.0f, 0.8f, 0.0f,
//
//	// Left ear (triangle)
//	-0.15f, 0.75f, 0.0f,
//	-0.25f, 0.95f, 0.0f,
//	-0.05f, 0.85f, 0.0f,
//
//	// Right ear (triangle)
//	0.15f, 0.75f, 0.0f,
//	0.05f, 0.85f, 0.0f,
//	0.25f, 0.95f, 0.0f,
//
//	// Eyes (two small quads)
//	-0.07f, 0.65f, 0.0f,
//	-0.03f, 0.65f, 0.0f,
//	-0.03f, 0.61f, 0.0f,
//	-0.07f, 0.61f, 0.0f,
//
//	 0.07f, 0.65f, 0.0f,
//	 0.03f, 0.65f, 0.0f,
//	 0.03f, 0.61f, 0.0f,
//	 0.07f, 0.61f, 0.0f,
//
//	 // Body (rectangle)
//	 -0.2f, 0.4f, 0.0f,
//	  0.2f, 0.4f, 0.0f,
//	  0.2f, -0.2f, 0.0f,
//	 -0.2f, -0.2f, 0.0f,
//
//	 // Legs (two rectangles)
//	 -0.18f, -0.2f, 0.0f,
//	 -0.08f, -0.2f, 0.0f,
//	 -0.08f, -0.4f, 0.0f,
//	 -0.18f, -0.4f, 0.0f,
//
//	  0.08f, -0.2f, 0.0f,
//	  0.18f, -0.2f, 0.0f,
//	  0.18f, -0.4f, 0.0f,
//	  0.08f, -0.4f, 0.0f,
//
//	  // Tail (side triangle)
//	   0.2f, -0.1f, 0.0f,
//	   0.4f, -0.05f, 0.0f,
//	   0.3f, -0.3f, 0.0f
//};
//
//
//
//
////camera properties
//glm::vec3 cameraPos = glm::vec3(0.0f, 0.0f, 3.0f);
//glm::vec3 shakingCamera = glm::vec3(0.0f, 0.0f, 3.0f);
//glm::vec3 cameraTarget = glm::vec3(0.0f, 0.0f, 0.0f);
//glm::vec3 up = glm::vec3(0.0f, 1.0f, 0.0f);
//glm::vec3 cameraFront = glm::vec3(0.0f, 0.0f, -3.0f);
//
//
//
////light properties
//glm::vec3 lightPos = glm::vec3(1.0f, 1.0f, 1.0f);
//
//void KeyboardInputHandling(GLFWwindow* window);
//void CameraShake(float time, glm::vec3& cameraPos);
//
//void MoveCameraRight();
//
//
////shaking camera 
//bool isShakingCamera = true;
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
//
//
//	if (!gladLoadGLLoader(GLADloadproc(glfwGetProcAddress)))
//	{
//		std::cout << "unable to init glad" << std::endl;
//	}
//	glEnable(GL_DEPTH_TEST);
//	//necessary matrices
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
//
//
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
//
//
//
//
//	glEnableVertexAttribArray(0);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(float), (void*)0);
//	//glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), (void*)0);
//
//	glEnableVertexAttribArray(1);
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(float), (void*)(3 * sizeof(float)));
//
//
//	//textures
//	int width, height, nrChannels;
//	//unsigned char* data = stbi_load("C:/Programming/qwerty/qwerty/resources/textures/video starting door only.png", &width, &height, &nrChannels, 0);
//	unsigned char* data = stbi_load("C:/Programming/qwerty/qwerty/resources/textures/preview.bmp", &width, &height, &nrChannels, 0);
//
//
//	//glBindTexture(GL_TEXTURE_2D, texture);
//	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGB, GL_UNSIGNED_BYTE, data);
//	glGenerateMipmap(GL_TEXTURE_2D);
//
//	unsigned int texture;
//	glGenTextures(1, &texture);
//	glBindTexture(GL_TEXTURE_2D, texture);
//
//
//	//glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);	// set texture wrapping to GL_REPEAT (default wrapping method)
//	//glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
//
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
//
//
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR_MIPMAP_LINEAR);
//	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//
//
//
//
//
//	//shaders
//	Shader triangleShader("C:/Programming/qwerty/qwerty/resources/shaders/Triangle/Triangle.vert", "C:/Programming/qwerty/qwerty/resources/shaders/Triangle/Triangle.frag",NULL);
//
//	Shader lightingCubeShader("C:/Programming/qwerty/qwerty/resources/shaders/Lighting/lightingcubeshader.vert", "C:/Programming/qwerty/qwerty/resources/shaders/Lighting/lightingcubeshader.frag",NULL);
//	Shader lightSourceShader("C:/Programming/qwerty/qwerty/resources/shaders/Lighting/lightsourceshader.vert", "C:/Programming/qwerty/qwerty/resources/shaders/Lighting/lightsourceshader.frag",NULL);
//
//
//	float time;
//
//	float shakeDuration = 5.5f;
//	float shakeTime = 0.0f;
//
//
//
//	float deltatime = 0.0f;
//	float lastFrametime = 0.0f;
//
//
//
//	while (!glfwWindowShouldClose(window))
//	{
//		//deltatime calculations
//
//		time = glfwGetTime();
//		float angle = time * glm::radians(45.0f) * 0.0001f;
//
//		float currentTime = glfwGetTime();
//		deltatime = currentTime - lastFrametime;
//		lastFrametime = currentTime;
//
//		//std::cout << deltatime << std::endl;
//
//		//keyboard input handling 
//		KeyboardInputHandling(window);
//		//MoveCameraRight();
//		//CameraShake(time,cameraPos);
//		glfwPollEvents();
//		//glClearColor(1.0f, 1.0f, 1.0f,1.0f);
//		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
//
//		//	model = glm::rotate(model, angle, glm::vec3(0.0f, 1.0f, 0.0f));
//
//
//			//coroutine test
//
//		view = glm::lookAt(cameraPos, cameraPos + cameraFront, up);
//
//		/*if (isShakingCamera)
//		{
//			view == glm::lookAt(shakingCamera, shakingCamera + cameraFront, up);
//		}
//		else
//		{
//			view = glm::lookAt(cameraPos, cameraPos + cameraFront, up);
//		}*/
//
//		//
//		//triangle shader 
//		glBindTexture(GL_TEXTURE_2D, texture);
//		triangleShader.Invoke();
//		triangleShader.SetMat4Uniform("model", model);
//		triangleShader.SetMat4Uniform("view", view);
//		triangleShader.SetMat4Uniform("projection", projection);
//		triangleShader.SetIntUniform("texture1", texture);
//		/*lightSourceShader.Use();
//
//		lightSourceShader.SetMat4("view", view);
//		lightSourceShader.SetMat4("projection", projection);
//		lightSourceShader.SetMat4("model", model);
//		lightSourceShader.SetVec3("lightSourcePosition", lightPos);*/
//		//lightSourceShader.Use();
//
//		//render cat 
//
//		//glDrawArrays(GL_TRIANGLE_FAN, 0, 10);      // Head
//		//glDrawArrays(GL_TRIANGLES, 10, 3);         // Left ear
//		//glDrawArrays(GL_TRIANGLES, 13, 3);         // Right ear
//		//glDrawArrays(GL_TRIANGLE_FAN, 16, 4);      // Left eye
//		//glDrawArrays(GL_TRIANGLE_FAN, 20, 4);      // Right eye
//		//glDrawArrays(GL_TRIANGLE_FAN, 24, 4);      // Body
//		//glDrawArrays(GL_TRIANGLE_FAN, 28, 4);      // Left leg
//		//glDrawArrays(GL_TRIANGLE_FAN, 32, 4);      // Right leg
//		//glDrawArrays(GL_TRIANGLES, 36, 3);         // Tail
//
//
//
//		glDrawArrays(GL_TRIANGLES, 0, 36);
//		//glDrawArrays(GL_TRIANGLES, 0, 36);
//		glfwSwapBuffers(window);
//	}
//}
//
//void KeyboardInputHandling(GLFWwindow* window)
//{
//	float speed = 0.01f;
//	if (glfwGetKey(window, GLFW_KEY_W))
//	{
//		//std::cout << "w key pressed" << std::endl;
//		cameraPos -= glm::vec3(0.0f, 0.0f, 1.0f) * speed;
//		//view = glm::translate()
//
//	}
//	if (glfwGetKey(window, GLFW_KEY_A))
//	{
//		//cameraPos -= glm::cross(cameraTarget, up)*speed;
//		cameraPos -= glm::vec3(1.0f, 0.0f, 0.0f) * speed;
//	}
//	if (glfwGetKey(window, GLFW_KEY_S))
//	{
//		cameraPos += glm::vec3(0.0f, 0.0f, 1.0f) * speed;
//	}
//	if (glfwGetKey(window, GLFW_KEY_D))
//	{
//		//cameraPos += glm::cross(cameraTarget, up) * speed;
//		//cameraPos += glm::vec3(1.0f, 0.0f, 0.0f) * speed;
//		cameraPos.x += 1.0f * speed;
//	}
//}
//void CameraShake(float time, glm::vec3& cameraPos)
//{
//	float shakingValX = 0.002f;
//	float intensity = 0.0000003f;
//	float shakeX = sin(time * 0.005f) * intensity;
//	//std::cout <<"shakex value "<< shakeX << std::endl;
//
//
//	//float shakingValY = 0.0000002f; 
//	shakingCamera = glm::vec3(shakeX, 0.0f, 0.0f);
//
//
//	cameraPos = shakingCamera;
//}
