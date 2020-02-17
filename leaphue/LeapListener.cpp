#include "LeapListener.h"

void SampleListener::onInit(const Controller& controller)
{
    std::cout << "Initialized" << std::endl;
}

void SampleListener::onConnect(const Controller& controller)
{
    std::cout << "Connected" << std::endl;
    controller.enableGesture(Gesture::TYPE_CIRCLE);
    controller.enableGesture(Gesture::TYPE_KEY_TAP);

    controller.enableGesture(Gesture::TYPE_SWIPE);
}

void SampleListener::onDisconnect(const Controller& controller)
{
    //Note: not dispatched when running in a debugger.
    std::cout << "Disconnected" << std::endl;
}

void SampleListener::onExit(const Controller& controller)
{
    std::cout << "Exited" << std::endl;
}

void SampleListener::onFrame(const Controller& controller)
{
    // This function needs to be broken up, it's way too long
    const Frame frame = controller.frame();
    HandList hands = frame.hands();
    if (hands.count() > 0)
    {
        Hand firstHand = hands[0];
        // Finger index = frame.finger(Finger::TYPE_INDEX);
        Vector pos = firstHand.palmPosition();
        std::cout << "x = " << pos.x <<  " y = " << pos.y << " z = " << pos.z << std::endl;
        light->primaryLight.setBrightness(pos.y);
    }
}

void SampleListener::onFocusGained(const Controller& controller)
{
  std::cout << "Focus Gained" << std::endl;
}

void SampleListener::onFocusLost(const Controller& controller)
{
  std::cout << "Focus Lost" << std::endl;
}
