#include "Core.hpp"

int main(int argc, char** argv) {
    Core app;
    if (!app.initialize())
        return -1;
    app.run();
    app.cleanup();
    return 0;
}