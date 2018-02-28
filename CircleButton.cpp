#include "CircleButton.h"
#include "ofMain.h"

//Observe a chamada ao construtor pai de Button na lista de inicialização
CircleButton::CircleButton(float x, float y, float width, float height)
	: Button(x, y, width, height), isDrawing(false)
{
}

void CircleButton::onClick()
{
    isDrawing = !isDrawing;
}

void CircleButton::draw() {
	Button::draw();

	if (!isDrawing) 
	{
		return;
	}

	ofSetColor(255, 0, 0);
	ofDrawCircle(x, y + h + 50, 25);
}
