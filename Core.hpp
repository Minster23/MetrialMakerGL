#pragma once

#include <glad.h>
#include <GLFW/glfw3.h>
#include <string>
#include <iostream>

// ImGui
#include "imgui.h"
#include "backends/imgui_impl_glfw.h"
#include "backends/imgui_impl_opengl3.h"

class Core {
public:
    Core();
    ~Core();

    bool initialize();
    void run();
    void cleanup();

private:
    //IMGUI
	unsigned int ver = 1;
	int width = 1280, height = 720;
    GLFWwindow* window;
    ImVec4 clear_color = ImVec4(0.45f, 0.55f, 0.60f, 1.00f);
};
