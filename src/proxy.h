#pragma once
/*
*	proxy.h
*
*	class that connects the game engine and the underlying apis(OGL, SDL etc)
*
*/

#ifdef __linux__
#ifndef _GNU_SOURCE
#define _GNU_SOURCE
#endif
#include <sys/mman.h>
#include<dirent.h>
#endif

#ifdef _WIN32
#include <windows.h>
#ifdef __cplusplus
extern "C"
#endif
#endif

#pragma warning(disable:4018; disable:4996; disable:4244)

#ifdef _WIN32
#include<SDL.h>
#else
#include<SDL2/SDL.h>
#endif


#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<string>
#include<cstdint>
using namespace std;


#include "imgui.h"
#include "imgui_impl_sdl.h"
#include "imgui_impl_opengl3.h"
#include <glad/glad.h>


