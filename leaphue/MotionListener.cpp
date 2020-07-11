#include "MotionListener.h"

#include <Hue.h>
#include <HueLight.h>

#include "Utils.h"


MotionListener::MotionListener() :
mLightManager(0)
{
    mLightManager = new LightManager;
}

void MotionListener::onInit(const Controller& controller)
{
    log(MessageType::INFO, "Initialized");
}

void MotionListener::onConnect(const Controller& controller)
{
    log(MessageType::INFO, "Connected");
}

void MotionListener::onDisconnect(const Controller& controller)
{
    //Note: not dispatched when running in a debugger.
    log(MessageType::INFO, "Disconnected");
}

void MotionListener::onExit(const Controller& controller)
{
    log(MessageType::INFO, "Exited");
}

void MotionListener::onFrame(const Controller& controller)
{
    // This function needs to be broken up, it's way too long
    const Frame frame = controller.frame();

    GestureList gestures = frame.gestures();

    for(GestureList::const_iterator gl = gestures.begin(); gl != frame.gestures().end(); gl++)
    {
        if((*gl).type() == Gesture::TYPE_SWIPE && mLastGesture != Gesture::TYPE_SWIPE)
        {
            onSwipe(gl);
        }
        else if((*gl).type() == Gesture::TYPE_CIRCLE && mLastGesture != Gesture::TYPE_CIRCLE)
        {
            onCircle(gl);
        }
        else if((*gl).type() == Gesture::TYPE_KEY_TAP)
        {
            onTap(gl);
        }
    }

    // No gesture
    HandList hands = frame.hands();
    if (hands.count() > 0)
    {
        // Finger index = frame.finger(Finger::TYPE_INDEX);
        Hand firstHand = hands[0];
        Vector pos = firstHand.palmPosition();
        //std::cout << "x = " << pos.x <<  " y = " << pos.y << " z = " << pos.z << "\r";
        if (pos.y < 60)
            mLightManager->getCurrentLight().Off();
        else if (mLightManager->getCurrentLight().isOn())
            mLightManager->getCurrentLight().setBrightness(pos.y - 60);
    }
}

void MotionListener::onFocusGained(const Controller& controller)
{
  std::cout << "Focus Gained" << std::endl;
}

void MotionListener::onFocusLost(const Controller& controller)
{
  std::cout << "Focus Lost" << std::endl;
}

void MotionListener::onSwipe(GestureList::const_iterator gl)
{
    SwipeGesture swipeGesture = Gesture::invalid();
    swipeGesture = SwipeGesture(*gl);
    Vector swipeDirection = swipeGesture.direction();

    if (swipeGesture.pointable().hand().palmNormal().x < 0
     || swipeGesture.pointable().hand().palmNormal().x > 0)
    {
        if(swipeDirection.x < 0 && swipeGesture.position().x < -40)
        {
            std::cout << "Left direction" << std::endl;
            mLightManager->previousLight();
        }
        if(swipeDirection.x > 0 && swipeGesture.position().x > 40)
        {
            std::cout << "Right direction" << std::endl;
            mLightManager->nextLight();
        }
        mLightManager->getCurrentLight().getName();
        mLastGesture = Gesture::TYPE_SWIPE;
    }
}

void MotionListener::onCircle(GestureList::const_iterator gl)
{
    CircleGesture cGesture = Gesture::invalid();
    cGesture = CircleGesture(*gl);
    if(cGesture.radius()>90)
    {
        mLightManager->getCurrentLight().On();
        std::cout << "Circle." << std::endl;
        mLastGesture = Gesture::TYPE_CIRCLE;
    }
}

void MotionListener::onTap(GestureList::const_iterator gl)
{
    std::cout << "Tap" << std::endl;
    mLastGesture = Gesture::TYPE_KEY_TAP;
}
