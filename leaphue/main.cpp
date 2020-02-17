#include "LeapListener.h"

int main()
{
    // Create a sample listener and controller
    SampleListener listener;
    Controller controller;

    listener.mystate = 0;
    listener.clickcount = 0;
    listener.pressstate = 0;
    listener.side = 0;
    listener.pressedDelay = 0;
    listener.rclick = 0;
    listener.sensibility = 8;
    listener.active = false;

    listener.lastFrameID = -1;
    listener.lastToggle = 0;
    listener.lastEvent = time(0);
    listener.light = new Light;

    // Have the sample listener receive events from the controller
    controller.addListener(listener);

    // Keep this process running until Enter is pressed
    std::cout << "Press Enter to quit..." << std::endl;
    std::cin.get();

    // Remove the sample listener when done
    controller.removeListener(listener);

    return 0;
}
