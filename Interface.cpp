#include "Interface.h"

Interface::Interface() {}
Interface::~Interface() {}

void Interface::exampleTest() {
    // Example window
    ImGui::Begin("Hello, world!");
    ImGui::Text("This is some useful text.");
    ImGui::End();
}