#include "game.h"

using namespace utils;

#pragma region gameFunctions

// Load textures and initialize other resources here.
void Start()
{
	InitialiseInvaders();
}

// Draw your game objects here.
void Draw()
{
	ClearBackground(0.f, 0.f, 0.f); // Clear the background with a default color
	DrawInvaders();
}

// Handle gameplay, movement and collisions here.
void Update(float elapsedSec)
{
}

// Delete textures and free other resources here.
void End()
{
}

#pragma endregion gameFunctions

#pragma region inputHandling

// Called once when a key is pressed.
void OnKeyDownEvent(SDL_Keycode key)
{
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
void InitialiseInvaders()
{
	const float scaleInvaders{ 22.f };
	const int spaceBetweenInvaders{ 44 };

	for (int i = 0; i < size; i++) {

		arrInvaderOctopus[i].scale = scaleInvaders;
		arrInvaderOctopus[i].hitbox.left = spaceBetweenInvaders * i;
		arrInvaderOctopus[i].hitbox.top;
		arrInvaderOctopus[i].hitbox.width = arrInvaderOctopus[i].scale;
		arrInvaderOctopus[i].hitbox.height = arrInvaderOctopus[i].scale;

		arrInvaderCrab[i].scale = scaleInvaders;
		arrInvaderCrab[i].hitbox.left = spaceBetweenInvaders * i;
		arrInvaderCrab[i].hitbox.top = spaceBetweenInvaders * 2;
		arrInvaderCrab[i].hitbox.width = arrInvaderCrab[i].scale;
		arrInvaderCrab[i].hitbox.height = arrInvaderCrab[i].scale;

		arrInvaderSquid[i].scale = scaleInvaders;
		arrInvaderSquid[i].hitbox.left = spaceBetweenInvaders * i;
		arrInvaderSquid[i].hitbox.top = spaceBetweenInvaders * 4;
		arrInvaderSquid[i].hitbox.width = arrInvaderSquid[i].scale;
		arrInvaderSquid[i].hitbox.height = arrInvaderSquid[i].scale;

		if (i > 10)
		{
			arrInvaderOctopus[i].hitbox.left -= spaceBetweenInvaders * 11;
			arrInvaderOctopus[i].hitbox.top += spaceBetweenInvaders;

			arrInvaderCrab[i].hitbox.left -= spaceBetweenInvaders * 11;
			arrInvaderCrab[i].hitbox.top += spaceBetweenInvaders;

			arrInvaderSquid[i].hitbox.left -= spaceBetweenInvaders * 11;
			arrInvaderSquid[i].hitbox.top += spaceBetweenInvaders;
		}
	}
};

void DrawInvaders() 
{
	SetColor(0.f, 1.f, 0.f, 1.f);
	for (int i = 0; i < size; i++) {
		FillRect(arrInvaderOctopus[i].hitbox);
		FillRect(arrInvaderCrab[i].hitbox);
		FillRect(arrInvaderSquid[i].hitbox);
	}

};

void UpdateInvaders() 
{

}


#pragma endregion