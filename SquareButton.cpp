#include "SquareButton.h"
#include "ofMain.h"

//Observe a chamada ao construtor pai de Button na lista de inicialização
SquareButton::SquareButton(float x, float y, float width, float height)
	: Button(x, y, width, height), isDrawing(false)
{
}

void SquareButton::onClick()
{
    isDrawing = !isDrawing;
}

void SquareButton::draw() 
{
	Button::draw();

	if (!isDrawing) 
	{
		return;
	}

	ofSetColor(0, 0, 255);
	ofDrawRectangle(x, y + h + 50, 25, 25);
}
