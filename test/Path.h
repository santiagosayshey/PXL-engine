#ifndef PATH_H
#define PATH_H

#pragma once
#include <string>

typedef std::string path;

struct Path
{
public:
    Path() {}
    ~Path() {}

    path hover_sound = "test/hover.wav";

};

#endif