#ifndef BUTTON_H
#define BUTTON_H


/*
 Refatoração da classe Button utilizando Herança. Agora Button contém só a lógica de um botão.
 O método onClick() torna-se um método abstrato (virtual puro), ou seja, não possui implementação nessa
 classe. Sua implementação estará nas classes filhas SquareButton e CircleButton.
 
 As funções draw(), setup() e update() também são deixadas virtuais para caso alguma customização
 tenha que ser feita.
 
 Isso permite agora que a classe Button seja reaproveitada, ou seja, poderia fazer parte de um
 framework e ser usada em várias aplicações. As classes filhas, seriam implementadas pelo programador
 usuário desse framework.
 */

class Button
{
private:	
	bool isDown;
	bool isHovered();
    
protected:
    //Atributos acessíveis a partir da classe filha
	float x, y, w, h;
	virtual void onClick() = 0;

public:
	Button(float px, float py, float width, float height);	

	virtual void setup();
	virtual void draw();
	virtual void update();

    //Toda classe feita para henrança em C++ deve obrigatoriamente ter um destrutor virtual.
    //Mesmo que seja vazio, como esse.
	virtual ~Button() {}
};

#endif
