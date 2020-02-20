#pragma once

#include "Leap.h"
#include "LightManager.h"

#ifndef ACTIVETIMEOUT
#define ACTIVETIMEOUT 300 // wait before auto-deactive (seconds)
#endif

#ifndef TOGGLE_FRAME_LIMIT
#define TOGGLE_FRAME_LIMIT 10 // frames to wait after (de-)activation before allowing another
#endif

using namespace Leap;

class MotionListener : public Listener
{
  public:
      MotionListener();

    virtual void onInit(const Controller&);
    virtual void onConnect(const Controller&);
    virtual void onDisconnect(const Controller&);
    virtual void onExit(const Controller&);
    virtual void onFrame(const Controller&);
    virtual void onFocusGained(const Controller&);
    virtual void onFocusLost(const Controller&);

private:
    void onSwipe(GestureList::const_iterator gl);
    void onCircle(GestureList::const_iterator gl);
    void onTap(GestureList::const_iterator gl);

public:
    LightManager *mLightManager;
    Gesture::Type mLastGesture;
};
