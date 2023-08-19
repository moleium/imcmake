#include <iostream>
#include <imgui/imgui.h>
#include <imgui/imgui_impl_opengl3.h>
#include <imgui/imgui_impl_glfw.h>
#include <GLFW/glfw3.h>

int main() {
    GLFWwindow* window;

    glfwInit();
    window = glfwCreateWindow(1280, 720, ">w<", NULL, NULL);
    glfwMakeContextCurrent(window);

    ImGui::CreateContext();

    ImGui_ImplGlfw_InitForOpenGL(window, true);
    ImGui_ImplOpenGL3_Init("#version 130");
    glClearColor(0.15f, 0.15f, 0.15f, 1.0f);

    bool dirty = true;
    while (!glfwWindowShouldClose(window)) {
        glfwPollEvents();

        if (ImGui::IsMousePosValid())
            dirty = true;

        if (!dirty)
            continue;

        glClear(GL_COLOR_BUFFER_BIT);

        ImGui_ImplOpenGL3_NewFrame();
        ImGui_ImplGlfw_NewFrame();

        ImGui::NewFrame();

        ImGui::SetNextWindowPos(ImVec2(0, 0));
        ImGui::SetNextWindowSize(ImGui::GetIO().DisplaySize);
        ImGui::Begin("Background", nullptr, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoBackground | ImGuiWindowFlags_NoBringToFrontOnFocus);

        // rendering goes here
        //

        ImGui::End();

        ImGui::Render();
        ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());

        glfwSwapBuffers(window);
    }

    return 0;
}
