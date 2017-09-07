#include "Windows.h"
#include <string>

void SwapMB() {
    bool currentlyLeft = GetSystemMetrics(SM_SWAPBUTTON) != 0;
    std::string message = "Mouse set up for " + std::string(currentlyLeft ? "RIGHT" : "LEFT") + " handed use";

    SwapMouseButton(!currentlyLeft);
    MessageBox(0, message.c_str(), "Mouse Click Swap", MB_OK);
}

int main()
{
    // Apparently it's not possible to make a regular exe project in codeblocks..
    FreeConsole();
    SwapMB();

    return 0;
}
