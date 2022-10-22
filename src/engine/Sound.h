#ifndef SOUND_H
#define SOUND_H

#include <SFML/Audio.hpp>

#pragma once

class Sound
{
public:
    // initialise buffer and sound instance
    Sound(std::string path);
    ~Sound();

    void play(bool repeat);

private:
    sf::SoundBuffer buffer;
    sf::Sound sound;


};

#endif