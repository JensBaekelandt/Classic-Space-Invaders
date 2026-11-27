#include "game.h"
#include <iostream>
using namespace utils;

#pragma region gameFunctions

// Load textures and initialize other resources here.
void Start()
{
	
	InitImage();
	InitPlayer();
	
}

// Draw your game objects here.
void Draw()
{
	ClearBackground(0.f, 0.f, 0.f); // Clear the background with a default color
	DrawPlayer();
}

// Handle gameplay, movement and collisions here.
void Update(float elapsedSec)
{
}

// Delete textures and free other resources here.
void End()
{
	DeleteImage();
}

#pragma endregion gameFunctions

#pragma region inputHandling

// Called once when a key is pressed.
void OnKeyDownEvent(SDL_Keycode key)
{

	if (key == SDLK_a || key == SDLK_q || key == SDLK_LEFT)
	{
		if (g_Player.pos.x > g_BeginBorder)
		{
			g_Player.pos.x -= g_Player.movementSpeed;
		}
	}
	else if (key == SDLK_d || key == SDLK_RIGHT)
	{
		if (g_Player.pos.x < g_EndBorder)
		{
			g_Player.pos.x += g_Player.movementSpeed;
		}
	}
	

}

// Called once when a key is released.
void OnKeyUpEvent(SDL_Keycode key)
{
}

// Called whenever the mouse moves.
void OnMouseMotionEvent(const SDL_MouseMotionEvent& e)
{
}

// Called once when a mouse button is pressed.
void OnMouseDownEvent(const SDL_MouseButtonEvent& e)
{
}

// Called once when a mouse button is released.
void OnMouseUpEvent(const SDL_MouseButtonEvent& e)
{
}

#pragma endregion inputHandling

#pragma region myFunctionDefinitions
void InitPlayer()
{
	int playerOffset{ 100 };

	g_Player.lives = 3;
	g_Player.pos.x = g_WindowWidth / 2;
	g_Player.pos.y = g_WindowHeight - playerOffset;
	g_Player.movementSpeed = 5;
	g_Player.height = 50;
	g_Player.width = 50;
	g_Player.scale = 0.5f;
	
}
void DrawPlayer()
{
	Rectf playerBounds{ g_Player.pos.x, g_Player.pos.y, g_Player.width * g_Player.scale, g_Player.height * g_Player.scale };
	//DrawTexture(g_Player.image, g_Player.pos, Point2f{ g_Player.width, g_Player.height });
	DrawTexture(g_Player.image, playerBounds);

}
void InitImage()
{
	bool imageLoaded{ TextureFromFile("Player.png", g_Player.image) };
	if (!imageLoaded)
	{
		std::cout << "Can not find the player texture \n";
	}
}
void DrawImage()
{

}
void DeleteImage()
{
	DeleteTexture(g_Player.image);
}
#pragma endregion