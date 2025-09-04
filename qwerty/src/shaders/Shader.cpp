#include</Programming/qwerty/qwerty/src/shaders/Shader.h>
#include</Programming/qwerty/qwerty/src/maths/qmath.h>

Shader::Shader(const char* vertexShaderSourcePath,const char* fragmentShaderSourcePath)
{
	std::string vertexCode; 
	std::string fragmentCode; 

	std::ifstream vShaderFile; 
	std::ifstream fShaderFile; 

	vShaderFile.exceptions(std::ifstream::failbit || std::ifstream::badbit);
	fShaderFile.exceptions(std::ifstream::failbit || std::ifstream::badbit);
	try
	{
		vShaderFile.open(vertexShaderSourcePath);
		fShaderFile.open(fragmentShaderSourcePath); 
		std::stringstream vShaderStream, fShaderStream;
		//read files buffer content into stream

		vShaderStream << vShaderFile.rdbuf();
		fShaderStream << fShaderFile.rdbuf();	
		
		vShaderFile.close();
		fShaderFile.close();

		vertexCode = vShaderStream.str();
		fragmentCode = fShaderStream.str();	
	}
	catch (std::ifstream::failure& e)
	{
		std::cout << "ERROR::SHADER::FILE_NOT_SUCCESSFULLY_READ:" << std::endl;
	}
	const char* vShaderCode = vertexCode.c_str(); 
	const char* fShaderCode = fragmentCode.c_str();

	unsigned int vertex, fragment; 

	vertex = glCreateShader(GL_VERTEX_SHADER);
	glShaderSource(vertex, 1, &vShaderCode, NULL);
	glCompileShader(vertex);
	CheckCompileErrors(vertex,"VERTEX");

	fragment = glCreateShader(GL_FRAGMENT_SHADER);
	glShaderSource(fragment, 1, &fShaderCode, NULL);
	glCompileShader(fragment);
	CheckCompileErrors(vertex, "FRAGMENT");


	ID = glCreateProgram(); 
	glAttachShader(ID, vertex);
	glAttachShader(ID, fragment);
	glLinkProgram(ID);
	CheckCompileErrors(ID, "PROGRAM");

	glDeleteShader(vertex);
	glDeleteShader(fragment);

	
}

void Shader::Use()
{
	glUseProgram(ID);
}

void Shader::CheckCompileErrors(unsigned int shader, std::string type)
{
	int success; 
	char infoLog[512];

	if (type != "PROGRAM")
	{
		glGetShaderiv(shader, GL_COMPILE_STATUS, &success);

		if (!success)
		{
			glGetShaderInfoLog(shader, 1024, NULL, infoLog);
			std::cout << "ERROR::SHADER_COMPILATION_ERROR of type: " << "\n" << infoLog << std::endl;
		}
	}
	else
	{
		glGetProgramiv(shader, GL_LINK_STATUS, &success);
		if (!success)
		{
			glGetProgramInfoLog(shader, 1024, NULL, infoLog);
			std::cout << "ERROR::PROGRAM_LINKING_ERROR of type:" << "\n" << infoLog << std::endl;
		}
			
	}
}
void Shader::SetBool(const std::string& name, bool value)
{
	glUniform1i(glGetUniformLocation(ID, name.c_str()), value);
}
void Shader::SetFloat(const std::string& name, float value)
{
	glUniform1f(glGetUniformLocation(ID, name.c_str()), value);
}
void Shader::SetInt(const std::string& name, int value)
{
	glUniform1i(glGetUniformLocation(ID, name.c_str()), value);
}
void Shader::SetVec3(const std::string& name, glm::vec3& value)
{
	glUniform3fv(glGetUniformLocation(ID, name.c_str()),1, &value[0]);
	
}
void Shader::SetVec3(const std::string& name,  qmath::vec3& value)
{
	glUniform3fv(glGetUniformLocation(ID, name.c_str()), 1,&value.values[0]);
}


void Shader::SetMat4(const std::string& name, glm::mat4  &value)  
{
	glUniformMatrix4fv(glGetUniformLocation(ID, name.c_str()), 1, GL_FALSE, &value[0][0]);
}	