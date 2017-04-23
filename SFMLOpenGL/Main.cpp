#include <Game.h>
/// <summary>
/// A program that simulates VR environment in opengl
/// 2 viewports split to each half of the screen with cube drawn in view
/// use left/right arrow to rotate camera around
/// </summary>

int main(void)
{
	// Setup SFML Context Settings
	// https://www.sfml-dev.org/documentation/2.0/ContextSettings_8hpp_source.php
	ContextSettings settings;
	settings.depthBits = 24u; // for depth buffer Z-Buffer
	settings.antialiasingLevel = 4u;

	// Create a reference to the game and run
	Game& game = Game(settings);
	game.run();
}