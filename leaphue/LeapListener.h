#pragma once

#include "Leap.h"
#include "Light.h"

#ifndef ACTIVETIMEOUT
#define ACTIVETIMEOUT 300 // wait before auto-deactive (seconds)
#endif

#ifndef TOGGLE_FRAME_LIMIT
#define TOGGLE_FRAME_LIMIT 10 // frames to wait after (de-)activation before allowing another
#endif

using namespace Leap;

class SampleListener : public Listener
{
  public:
    virtual void onInit(const Controller&);
    virtual void onConnect(const Controller&);
    virtual void onDisconnect(const Controller&);
    virtual void onExit(const Controller&);
    virtual void onFrame(const Controller&);
    virtual void onFocusGained(const Controller&);
    virtual void onFocusLost(const Controller&);

    Light *light;
    int mystate;
    int clickcount;
    int pressedDelay; //adjust move object when buttin is pressed
    int pressstate;
    int side;
    int sensibility;  // value for sensibility click incrise value decrise  sensibility
    int rclick;
    bool active; // if we're currently active

    int64_t lastFrameID; // last frame processed
    int64_t lastToggle; // frame id of the last frame we toggled activity
    time_t lastEvent; // epoch time in seconds of last event

};
