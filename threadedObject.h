#pragma once

#include "ofMain.h"
#include <atomic>

class ImageLoader : public ofThread{
	// TODO: START IT FOLLWOING http://openframeworks.kr/ofBook/chapters/threads.html
	void
	
	void threadedObject::threadedFunction() {
		while (isThreadRunning()) {
			cam.update();
			if (cam.isFrameNew()) {
				lock();
				image.setFromPixels(cam.getPixels());
				unlock();
			}
		}
	}
	
	ofVideoGrabber cam;
	ofImage image;
};