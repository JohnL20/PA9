#include "Piano.h"

using namespace sf;

void Piano::loadSound()
{
	SoundBuffer buffer[7];
	
	// buffer.loadFromSamples(&samples[0], samples.size(), 2, 44100);

	// loadFromfile need to sample all the correct audio files

	//A
	buffer[0].loadFromFile("../resources/audio/sound.wav");
	//B
	buffer[1].loadFromFile("../resources/audio/sound.wav");
	//C
	buffer[2].loadFromFile("../resources/audio/sound.wav");
	//D
	buffer[3].loadFromFile("../resources/audio/sound.wav");
	//E
	buffer[4].loadFromFile("../resources/audio/sound.wav");
	//F
	buffer[5].loadFromFile("../resources/audio/sound.wav");
	//G
	buffer[6].loadFromFile("../resources/audio/sound.wav");

	for (int index = 0; index < 7; index++)
	{
		sound[index].setBuffer(buffer[index]);
	}
}

/* void playSound()
{

	while(m_window.isOpen())
	{
		if(sf::Keyboard::isKeyPressed(sf::Keyboard::A))
		{
			sound.play()
		}
		if(sf::KeyBoard::isKeyPressed(sf::Keyboard::B))
		{
			soudn.play()
		}
		if(sf::Keyboard::isKeyPressed(sf::Keyboard::C))
		{
			sound.play()
		}
		if(sf::Keyboard::isKeyPressed(sf::Keyboard::D))
		{
			sound.play()
		}
		if(sf::Keyboard::isKeyPressed(sf::Keyboard::E))
		{
			sound.play()
		}
		if(sf::Keyboard::isKeyPressed(sf::Keyboard::F))
		{
			sound.play()
		}
		if(sf::Keyboard::isKeyPressed(sf::Keyboard::G))
		{
			sound.play()
		}
	}*/