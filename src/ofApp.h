#pragma once
#include"OperacionesVecMat.h"
#include "ofMain.h"
#include "Vec3.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();
		//OperacionesVecMat OperacionesVectorMatriz;
		Vec3 vector2d;
		Vec3 vec1, vec2, vec3;
		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		
};
