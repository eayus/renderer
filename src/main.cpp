#include <cassert>
#include <GLFW/glfw3.h>

// Configuration
constexpr int WIDTH = 960;
constexpr int HEIGHT = 640;

int main() {
    // Create Window
    assert(glfwInit());
    glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
    GLFWwindow* window = glfwCreateWindow(WIDTH, HEIGHT, "Renderer", glfwGetPrimaryMonitor(), nullptr);
    assert(window);

    // Main Loop
    while (!glfwWindowShouldClose(window)) {
        glfwPollEvents();
    }

    // Cleanup
    glfwDestroyWindow(window);
    glfwTerminate();
    return 0;
}