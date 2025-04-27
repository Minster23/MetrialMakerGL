#pragma once

#define STB_IMAGE_IMPLEMENTATION
#include <stb_image.h>

#include <glad.h>
#include <iostream>
#include <string>
#include <GLFW/glfw3.h>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

class core {
	//Function
public:
	core();
	~core();
	bool initialize();
	void processInput(GLFWwindow* window);
	void update();
	void render();
	void cleanup();

	std::string loadShaderSource(const char* shaderPath);

	static void mouse_callback(GLFWwindow* window, double xpos, double ypos);
	//Variables
private:

	//Variable yang nanti dipake
	GLuint shaderProgram;
	GLuint VAO1, VBO1, instanceVBO;
	GLuint createShaderProgram(const char* vertexPath, const char* fragmentPath);

	//Settingan kamera
	static glm::vec3 cameraPos;
	static glm::vec3 cameraFront;
	static glm::vec3 cameraUp;


	static float yaw;
	static float pitch;
	static float lastX;
	static float lastY;
	static bool firstMouse;
	static float fov;
	static float deltaTime;
	static float lastFrame;
};