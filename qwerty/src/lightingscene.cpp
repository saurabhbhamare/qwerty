//
//
//
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
//
//
//
//
////qwerty math test
////qmath::vec3 objectPosition();
//
//
//void MouseCallback(GLFWwindow* window, double x, double y);
//
////lightsource cube position 
//
//
//glm::vec3 lightCubePosition = glm::vec3(0.0f, 0.0f, 3.0f); 
//
////qmath::vec3 lightCubePosition(0.0f, 0.0f, 3.0f);
//
//
////properties
//
//
//bool firstMouse = true;
//float yaw = -90.0f;
//float pitch = 0.0f;
//float lastX = 1280.0f / 2.0;
//float lastY = 800.0 / 2.0;
//float fov = 45.0f;
//
//float deltaTime = 0.0f;
//float lastFrame = 0.0f;
//
////camera properties
//
//glm::vec3 cameraPos = glm::vec3(0.0f, 0.0f, 2.0f);
//glm::vec3 cameraFront = glm::vec3(0.0f, 0.0f, -1.0f);
//glm::vec3 cameraUp = glm::vec3(0.0f, 1.0f, 0.0f);
//
//
////other input functions
//void mouse_callback(GLFWwindow* window, double xPos, double yPos);
//
//
////float vertices[] =
////{
////	-0.5f, -0.5f, 0.0f,
////	0.5f, -0.5f, 0.0f,
////	0.0f, 0.5f, 0.0f
////};
//
////float vertices[] =
////{    //position           //colors
////	-0.5f, -0.5f, 0.0f,  1.0f,0.0f,0.0f,
////	0.5f, -0.5f, 0.0f,   0.0f,1.0f,0.0f,
////	0.0f, 0.5f, 0.0f,    0.0f,0.0f,1.0f
////};
//
//
////lightsourcecolor and normalcubve colors
//glm::vec3 lightSourceColor(1.0f, 1.0f, 1.0f);
//glm::vec3 normalCubeColor(0.5f, 0.4f, 0.0f);
//
//
////float vertices[] = {
////	-0.5f, -0.5f, -0.5f,  0.0f, 0.0f,
////	 0.5f, -0.5f, -0.5f,  1.0f, 0.0f,
////	 0.5f,  0.5f, -0.5f,  1.0f, 1.0f,
////	 0.5f,  0.5f, -0.5f,  1.0f, 1.0f,
////	-0.5f,  0.5f, -0.5f,  0.0f, 1.0f,
////	-0.5f, -0.5f, -0.5f,  0.0f, 0.0f,
////
////	-0.5f, -0.5f,  0.5f,  0.0f, 0.0f,
////	 0.5f, -0.5f,  0.5f,  1.0f, 0.0f,
////	 0.5f,  0.5f,  0.5f,  1.0f, 1.0f,
////	 0.5f,  0.5f,  0.5f,  1.0f, 1.0f,
////	-0.5f,  0.5f,  0.5f,  0.0f, 1.0f,
////	-0.5f, -0.5f,  0.5f,  0.0f, 0.0f,
////
////	-0.5f,  0.5f,  0.5f,  1.0f, 0.0f,
////	-0.5f,  0.5f, -0.5f,  1.0f, 1.0f,
////	-0.5f, -0.5f, -0.5f,  0.0f, 1.0f,
////	-0.5f, -0.5f, -0.5f,  0.0f, 1.0f,
////	-0.5f, -0.5f,  0.5f,  0.0f, 0.0f,
////	-0.5f,  0.5f,  0.5f,  1.0f, 0.0f,
////
////	 0.5f,  0.5f,  0.5f,  1.0f, 0.0f,
////	 0.5f,  0.5f, -0.5f,  1.0f, 1.0f,
////	 0.5f, -0.5f, -0.5f,  0.0f, 1.0f,
////	 0.5f, -0.5f, -0.5f,  0.0f, 1.0f,
////	 0.5f, -0.5f,  0.5f,  0.0f, 0.0f,
////	 0.5f,  0.5f,  0.5f,  1.0f, 0.0f,
////
////	-0.5f, -0.5f, -0.5f,  0.0f, 1.0f,
////	 0.5f, -0.5f, -0.5f,  1.0f, 1.0f,
////	 0.5f, -0.5f,  0.5f,  1.0f, 0.0f,
////	 0.5f, -0.5f,  0.5f,  1.0f, 0.0f,
////	-0.5f, -0.5f,  0.5f,  0.0f, 0.0f,
////	-0.5f, -0.5f, -0.5f,  0.0f, 1.0f,
////
////	-0.5f,  0.5f, -0.5f,  0.0f, 1.0f,
////	 0.5f,  0.5f, -0.5f,  1.0f, 1.0f,
////	 0.5f,  0.5f,  0.5f,  1.0f, 0.0f,
////	 0.5f,  0.5f,  0.5f,  1.0f, 0.0f,
////	-0.5f,  0.5f,  0.5f,  0.0f, 0.0f,
////	-0.5f,  0.5f, -0.5f,  0.0f, 1.0f
////};
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
////cube positions
//
//
//
//glm::vec3 cubePositions[] = {
//	glm::vec3(0.0f,  0.0f,  0.0f),
//	glm::vec3(2.0f,  5.0f, -15.0f),
//	glm::vec3(-1.5f, -2.2f, -2.5f),
//	glm::vec3(-3.8f, -2.0f, -12.3f),
//	glm::vec3(2.4f, -0.4f, -3.5f),
//	glm::vec3(-1.7f,  3.0f, -7.5f),
//	glm::vec3(1.3f, -2.0f, -2.5f),
//	glm::vec3(1.5f,  2.0f, -2.5f),
//	glm::vec3(1.5f,  0.2f, -1.5f),
//	glm::vec3(-1.3f,  1.0f, -1.5f)
//};
//
//const char* vertexShaderSource =
//"#version 330 core\n"
//"layout (location = 0 ) in vec3 aPos;\n"
//"void main()\n"
//"{\n"
//"gl_Position = vec4(aPos,1.0f);\n"
//"}\0";
//
//const char* fragmentShaderSource =
//"#version 330 core\n"
//"out vec4 FragColor;\n"
//"void main()\n"
//"{\n"
//"FragColor = vec4(1.0f,1.0f,0.0f,1.0f);\n"
//"}\0";
//
////necessary functions
//
//void processInput(GLFWwindow* window)
//{
//	const float cameraSpeed = 0.005f; // adjust accordingly
//	if (glfwGetKey(window, GLFW_KEY_W) == GLFW_PRESS)
//		cameraPos += cameraSpeed * cameraFront;
//	if (glfwGetKey(window, GLFW_KEY_S) == GLFW_PRESS)
//		cameraPos -= cameraSpeed * cameraFront;
//	if (glfwGetKey(window, GLFW_KEY_A) == GLFW_PRESS)
//		cameraPos -= glm::normalize(glm::cross(cameraFront, cameraUp)) * cameraSpeed;
//	if (glfwGetKey(window, GLFW_KEY_D) == GLFW_PRESS)
//		cameraPos += glm::normalize(glm::cross(cameraFront, cameraUp)) * cameraSpeed;
//	if (glfwGetKey(window, GLFW_KEY_E) == GLFW_PRESS)
//		cameraPos += cameraSpeed * cameraUp;
//	if (glfwGetKey(window, GLFW_KEY_Q) == GLFW_PRESS)
//		cameraPos -= cameraSpeed * cameraUp;
//}
//
//int main()
//{
//	//GLFW and glad Initalization functions 
//	//qwerty 
//	//std::cout << "-- qwerty: for the teacher who taught me more with doubt than chemistry ever could. " << std::endl;
//	glfwInit();
//	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
//	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
//	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
//
//	GLFWwindow* window = glfwCreateWindow(1280, 800, "window", NULL, NULL);
//	glfwMakeContextCurrent(window);
//	glfwSetCursorPosCallback(window, mouse_callback);
//	//glfwSetInputMode(window, GLFW_CURSOR, GLFW_CURSOR_DISABLED);
//	//glfwSetCursorPosCallback(window, mouse_callback);
//	//glViewport(0, 0, 800, 600);
//
//	if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
//	{
//		std::cout << "unable to init glad" << std::endl;
//	}
//	glEnable(GL_DEPTH_TEST);
//	//vbo and vao data
//
//
//
//	//imgui impl
//
//	IMGUI_CHECKVERSION();
//	std::cout << ImGui::GetVersion() << std::endl;
//	ImGui::CreateContext();
//	//ImGuiIO& io = ImGui::GetIO(); (void)io;
//	ImGuiIO& io = ImGui::GetIO();
//
//
//	//add Segoe UI font
//	io.Fonts->AddFontFromFileTTF("C:/Programming/qwerty/qwerty/resources/fonts/segoeui/segoeui.ttf", 20.0f);
//	//io.FontDefault = io.Fonts->AddFontFromFileTTF("C:/Programming/qwerty/qwerty/resources/fonts/segoeui/segoeui.ttf", 16.0f);
//	//ImGui_ImplOpenGL3_CreateFontsTexture(); // If using OpenGL backend
//
//	/*io.ConfigFlags |= ImGuiConfigFlags_DockingEnable;*/
//
//
//	ImGui::StyleColorsDark();
//	ImGui_ImplGlfw_InitForOpenGL(window, true);
//	ImGui_ImplOpenGL3_Init("#version 330 core");
//
//
//
//
//
//
//	unsigned int VBO;
//	unsigned int VAO;
//
//	glGenVertexArrays(1, &VAO);
//	glBindVertexArray(VAO);
//	glGenBuffers(1, &VBO);
//	glBindBuffer(GL_ARRAY_BUFFER, VBO);
//
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
//
//	/*glEnableVertexAttribArray(0);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(float), (void*)0);
//
//	glEnableVertexAttribArray(1);
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(float), (void*)(3 * sizeof(float)));*/
//
//
//	/*glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(float), (void*)0);
//	glEnableVertexAttribArray(0);*/
//
//	glEnableVertexAttribArray(0);
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(float), (void*)0);
//
//	glEnableVertexAttribArray(1);
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(float), (void*)(3 * sizeof(float)));
//	
//
//	//Implement Colors
//
//	/*unsigned int lightVAO; 
//	glGenVertexArrays(1, &VAO);
//	glBindVertexArray(VAO);*/ 
//
//
//	//shaders
//
//	//Shader shader("C:/Programming/qwerty/qwerty/resources/shaders/Triangle/Triangle.vert", "C:/Programming/qwerty/qwerty/resources/shaders/Triangle/Triangle.frag");
//
//	//shaders for lighting
//	Shader lightingCubeShader("C:/Programming/qwerty/qwerty/resources/shaders/Lighting/lightingcubeshader.vert", "C:/Programming/qwerty/qwerty/resources/shaders/Lighting/lightingcubeshader.frag");
//	Shader lightSourceShader("C:/Programming/qwerty/qwerty/resources/shaders/Lighting/lightsourceshader.vert", "C:/Programming/qwerty/qwerty/resources/shaders/Lighting/lightsourceshader.frag");
//
//	//matrices
//	//imgui data first
//
//	
//
//
//
//	//lighting cube imgui data
//
//	float modelRotationAngle = 0.0f;
//	float scaleValue = 1.0f;
//	float translateValue = 1.0f;
//	glm::vec3 modelTranslation = glm::vec3(0.0f, 0.0f, 1.0f);
//	glm::vec3 modelScale = glm::vec3(1.0f, 1.0f, 1.0f);
//
//	glm::vec3 viewTranslation = glm::vec3(0.0f, 0.0f, 0.0f);
//
//
//	//light source imgui data
//
//	float verticalTranslateValue = 1.0f;
//	float horizontalTranslateValue = 1.0f;
//
//	glm::vec3 lightSourceTranslation = glm::vec3(1.0f, 0.0f, 0.0f);
//
//
//	glm::mat4 view = glm::mat4(1.0f);
//	glm::mat4 projection = glm::mat4(1.0f);
//
//	projection = glm::perspective(glm::radians(45.0f), 800.0f / 600.0f, 0.1f, 50.0f);
//
//	view = glm::translate(view, glm::vec3(0.0f, 0.0f, -4.0f));
//
//
//	//view matrix for camera implementation 
//
//
//
//	view = glm::lookAt(cameraPos, cameraPos + cameraFront, cameraUp);
//
//
//
//	//pass transformations matrices to the shader
//
//	glBindVertexArray(VAO);
//
//	//camera implementation
//
//	//glm::vec3 cameraPosition = glm::vec3(0.0f, 0.0f, -3.0f); 
//	//glm::vec3 cameraTarget = glm::vec3(0.0f, 0.0f, 0.0f);
//	//glm::vec3 cameraDirection = glm::normalize(cameraTarget - cameraPosition);
//
//
//	//glm::vec3 upVector = glm::vec3(0.0f, 1.0f, 0.0f);
//	//glm::vec3 cameraRight = glm::normalize(glm::cross(upVector, cameraDirection));
//
//	////calculate camera up vector
//
//	//glm::vec3 cameraUp = glm::normalize(glm::cross(cameraDirection, cameraRight));
//
//
//
//
//
//	while (!glfwWindowShouldClose(window))
//	{
//		glClearColor(0.02f, 0.0f, 0.0f,1.0f);
//
//		float currentFrame = static_cast<float>(glfwGetTime());
//		deltaTime = currentFrame - lastFrame;
//		lastFrame = currentFrame;
//
//
//		glfwPollEvents();
//
//
//		//imgui functions
//		ImGui_ImplOpenGL3_NewFrame();
//		ImGui_ImplGlfw_NewFrame();
//		ImGui::NewFrame();
//
//		ImGui::Begin("Slider");
//
//
//		ImGui::SliderFloat("Rotation", &modelRotationAngle, 0.0f, 360.0f);
//		ImGui::SliderFloat("Scale", &scaleValue, 0.0f, 100.0f);
//		ImGui::SliderFloat("Translate", &translateValue, -100.0f, 100.0f);
//		ImGui::SliderFloat("Light Translate Horizontal", &horizontalTranslateValue, -100.0f, 100.0f);
//		ImGui::SliderFloat("Light Translate Vertical", &verticalTranslateValue, -100.0f, 100.0f);
//
//		//
//
//		ImGui::End();
//
//		ImGui::Render();
//		ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());
//
//
//
//
//		glfwSwapBuffers(window);
//
//
//
//		processInput(window);
//		const float radius = 10.0f;
//		float camX = sin(glfwGetTime()) * radius;
//		float camZ = cos(glfwGetTime()) * radius;
//		//glm::mat4 view;
//
//		view = glm::lookAt(cameraPos, cameraPos + cameraFront, cameraUp);
//
//		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
//
//
//		glm::mat4 model = glm::mat4(1.0f);
//		glm::mat4 model2 = glm::mat4(1.0f);
//		//glm::translate(model, translateValue);
//		glm::scale(model, modelTranslation);
//		//glm::mat4 model2 = glm::mat4(1.0f);
//		modelScale = glm::vec3(scaleValue, scaleValue, scaleValue);
//		modelTranslation = glm::vec3(0.0f, 0.0f, translateValue);
//		lightSourceTranslation = glm::vec3(0.0f, verticalTranslateValue, horizontalTranslateValue);
//		//lightSourceTranslation = glm::vec3(0.0f, 0.0f, );
//		model2 = glm::translate(model2, lightSourceTranslation);
//		model = glm::translate(model, modelTranslation);
//		model = glm::rotate(model, modelRotationAngle, glm::vec3(0.0f, 1.0f, 0.0f));
//		model = glm::scale(model, modelScale);
//		//model = glm::translate(model, t);
//
//
//		glBindVertexArray(VAO);
//
//		//simple triangle shader
//		//shader.Use();
//
//
//		//shader.SetMat4("model", model);
//		//shader.SetMat4("view", view);
//		//shader.SetMat4("projection", projection);
//
//
//
//
//		//cube after light source effect 
//
//		lightingCubeShader.Use();
//		lightingCubeShader.SetVec3("lightSourceColor", lightSourceColor);
//		lightingCubeShader.SetVec3("cubeColor", normalCubeColor);
//		lightingCubeShader.SetVec3("lightPos", lightCubePosition);
//		lightingCubeShader.SetVec3("viewPos", cameraPos);
//
//		lightingCubeShader.SetMat4("model", model);
//		lightingCubeShader.SetMat4("view", view);
//		lightingCubeShader.SetMat4("projection", projection);
//
//		/*lightSourceShader.SetMat4("model", model);
//		lightSourceShader.SetMat4("view", view);
//		lightSourceShader.SetMat4("projection", projection);*/
//
//
//		glDrawArrays(GL_TRIANGLES, 0, 36);
//
//
//		//render light source 
//		
//		model2 = glm::translate(model2, lightCubePosition);
//		//model2 = qmath::Translate()  //qmath impl
//		
//		lightSourceShader.Use();
//		lightSourceShader.SetMat4("model", model2);
//		lightSourceShader.SetMat4("view", view);
//		lightSourceShader.SetMat4("projection", projection);
//		lightSourceShader.SetVec3("lightSourcePosition", lightCubePosition);
//		//lightSourceShader.SetVec3("")
//		glDrawArrays(GL_TRIANGLES, 0, 36);
//
//	}
//	//close imgui 
//
//	ImGui_ImplOpenGL3_Shutdown();
//	ImGui_ImplGlfw_Shutdown();
//	ImGui::DestroyContext();
//}
//
//void mouse_callback(GLFWwindow* window, double xPosIn, double yPosIn)
//{
//	if (!ImGui::GetIO().WantCaptureMouse)
//	{
//		float xPos = static_cast<float>(xPosIn);
//		float yPos = static_cast<float>(yPosIn);
//
//		if (firstMouse)
//		{
//			lastX = xPos;
//			lastY = yPos;
//			firstMouse = false;
//
//		}
//		float xoffset = xPos - lastX;
//		float yoffset = lastY - yPos;
//		lastX = xPos;
//		lastY = yPos;
//
//		float sensitivity = 0.1f;
//		xoffset *= sensitivity;
//		yoffset *= sensitivity;
//
//		yaw += xoffset;
//		pitch += yoffset;
//
//
//		if (pitch > 89.0f)
//			pitch = 89.0f;
//		if (pitch < -89.0f)
//			pitch = -89.0f;
//
//		glm::vec3 front;
//		front.x = cos(glm::radians(yaw)) * cos(glm::radians(pitch));
//		front.y = sin(glm::radians(pitch));
//		front.z = sin(glm::radians(yaw)) * cos(glm::radians(pitch));
//		cameraFront = glm::normalize(front);
//	}
//}
//class Player
//{
//	int x;
//};
//class Entity
//{
//	int x;
//};
//
//
//
//
////void MouseCallback(GLFWwindow* window, double  xPosIn, double yPosIn)
////{
////	 
////	float xPos = static_cast<float>(xPosIn);
////	float yPos = static_cast<float>(yPosIn);
////
////
////
////}
////void MouseCallback(GLFWwindow* window)
////{
////
////}
////void MouseCallback(GLFWwindow* window, double  xPosIn, double yPosIn)
////{
////
////	//std::cout << xPosIn << std::endl;
////	//std::cout << yPosIn << std::endl;
////
////
////	float x = 2.9345;
////	std::cout << x << std::endl;
////
////
////
////
////}