#include "Sound.h"

Sound::Sound(std::string path)
{
    buffer.loadFromFile(path);
    sound.setBuffer(buffer);
}


Sound::~Sound()
{

}

void Sound::play(bool repeat)
{
    sound.setLoop(repeat);
    sound.play();
}
