#pragma once

#include "engine/pch.h"

#pragma region gameInformation

std::string g_WindowTitle{ "DAE24 ctrl-J - Space invaders" };
float g_WindowWidth{ 616.f };
float g_WindowHeight{ 704.f };

#pragma endregion gameInformation

#pragma region myStructs
struct Projectile
{
	Rectf size;
	float speed;
	float scale;
};
struct Player
{
	Point2f pos;
	Projectile playerProjectile;
	float movementSpeed;
	float width;
	float height;
	float scale;
	int lives;
};
#pragma endregion

#pragma region myVariables
Player g_Player{};
float g_BeginBorder{ 100.f };
float g_EndBorder{ 500.f };
#pragma endregion

#pragma region gameFunctions
void Start();
void Draw();
void Update(float elapsedSec);
void End();
#pragma endregion gameFunctions

#pragma region inputHandling
void OnKeyDownEvent(SDL_Keycode key);
void OnKeyUpEvent(SDL_Keycode key);
void OnMouseMotionEvent(const SDL_MouseMotionEvent& e);
void OnMouseDownEvent(const SDL_MouseButtonEvent& e);
void OnMouseUpEvent(const SDL_MouseButtonEvent& e);
#pragma endregion inputHandling

#pragma region myFunctionDeclarations
void InitPlayer();
void DrawPlayer();
#pragma endregion
