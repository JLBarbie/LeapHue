#include "MotionListener.h"

int main()
{
    // Create a sample listener and controller
    MotionListener listener;
    Controller controller;

    controller.enableGesture(Gesture::TYPE_CIRCLE);
    controller.enableGesture(Gesture::TYPE_SWIPE);
    controller.enableGesture(Gesture::TYPE_SCREEN_TAP);
    controller.enableGesture(Gesture::TYPE_KEY_TAP);
    controller.enableGesture(Gesture::TYPE_INVALID);

    controller.config().setFloat("Gesture.KeyTap.MinDownVelocity", 20.0);
    controller.config().setFloat("Gesture.KeyTap.HistorySeconds", .2);
    controller.config().setFloat("Gesture.KeyTap.MinDistance", 2.0);
    controller.config().save();

    // Have the sample listener receive events from the controller
    controller.addListener(listener);

    // Keep this process running until Enter is pressed
    std::cout << "Press Enter to quit..." << std::endl;
    std::cin.get();

    // Remove the sample listener when done
    controller.removeListener(listener);

    return 0;
}
