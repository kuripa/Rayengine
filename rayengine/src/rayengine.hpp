#pragma once

#include "raylib.h"

#include "core/log.hpp"



#ifdef RAYGINE_EXPORTS
#define RAYGINE_API __declspec(dllexport)
#else
#define RAYGINE_API __declspec(dllimport)
#endif

