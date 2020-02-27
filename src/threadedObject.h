#pragma once

#include "ofMain.h"
#include <atomic>

class threadedObject : public ofThread{
	void threadedObject::threadedFunction() {
		while (isThreadRunning()) {
			cam.update();
			if (cam.isFrameNew()) {
				image.setFromPixels(cam.getPixels());
			}
		}
	}
	
	ofVideoGrabber cam;
	ofImage image;
};