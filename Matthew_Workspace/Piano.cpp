#include "Piano.h"

using namespace sf;

SoundBuffer Piano::loadSound()
{
	SoundBuffer buffer;
	
	// buffer.loadFromSamples(&samples[0], samples.size(), 2, 44100);
	
	buffer.loadFromFile("../PA9/Matthew_Workspace/Sound.wav");

	return buffer;
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