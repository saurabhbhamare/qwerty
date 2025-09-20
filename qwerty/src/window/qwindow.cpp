#include</Programming/qwerty/qwerty/src/window/qwindow.h>

void QWindow::CreateWindow()
{
	glfwInit(); 
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

	qWindow = glfwCreateWindow(height, width, "qwerty window", NULL, NULL);

	while (!glfwWindowShouldClose(qWindow))
	{
		glfwPollEvents();
		glfwSwapBuffers(qWindow);
	}
}