#pragma once
#include "settings.h"

class Score {
private:
	int score=0;
	sf::Font font;
	sf::Text text;

public:

Score(sf::Vector2f pos) {
font.loadFromFile("DS-DIGIB.ttf");
text.setFont(font);
text.setCharacterSize(CHAR_SIZE);
text.setFillColor(sf::Color::White);
text.setPosition(pos);
updateText(); 
}

void increaseScore(int amount) {
score += amount;
updateText(); 
}


sf::Text& getText() {
return text;
}

void updateText() {
text.setString("Score: " + std::to_string(score)); 
}

	void draw(sf::RenderWindow& window ) {
		window.draw(text);
	}
};