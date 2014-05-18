#pragma once

#include "ofMain.h"
#include "ofxiOS.h"
#include "ofxiOSExtras.h"
#include "ofxUI.h"

class ofApp : public ofxiOSApp {
	
    public:
        void setup();
        void update();
        void draw();
        void exit();
	
        void touchDown(ofTouchEventArgs & touch);
        void touchMoved(ofTouchEventArgs & touch);
        void touchUp(ofTouchEventArgs & touch);
        void touchDoubleTap(ofTouchEventArgs & touch);
        void touchCancelled(ofTouchEventArgs & touch);

        void lostFocus();
        void gotFocus();
        void gotMemoryWarning();
        void deviceOrientationChanged(int newOrientation);
    
        //ofxui
        ofxUICanvas* gui;
        void guiEvent(ofxUIEventArgs &e);
        void setupUI();
    
        //audio
        void setupAudio();
        void audioOut(float * output, int bufferSize, int nChannels);
        float pan;
        int sampleRate;
        bool bNoise;
        float volume;
    
        float * lAudio;
        float * rAudio;
    
        //------------------- for the simple sine wave synthesis
        float aFrequency;
        float eFrequency;
        float phase;
        float phaseAdder;
        float aPhaseAdderTarget;
        float ePhaseAdderTarget;

        int initialBufferSize;
    
    
        //A note
        bool aIsToggled;
    
        //E note
        bool eIsToggled;

    
};


