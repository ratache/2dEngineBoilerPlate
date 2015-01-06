#include "Engine.h"

//timing variable
long start = GetTickCount();
LPDIRECT3DSURFACE9 back;


bool Game_Init(HWND hwnd)
{
	//set random number seed
	srand(time(NULL));


	///////////////////////////////////////////////////////////
	//SOUND STUFF
	/////////////////////////////////////////////////////////


	return 1;
}

/* <-GAME RUN->
There are two parts to the Game_Run function. The first part should move and
animate the sprite(s) in the game. The second part should draw the sprite(s) to
the screen. The reason that a screen update is divided into two parts (one for
logic, the other for screen refresh) is because you don’t want to take too much
processing time in between the BeginScene and EndScene calls, so keep the code
there to the minimum required to update the graphics and leave other processing
tasks for either before or after the screen update.
*/
void Game_Run(HWND hWnd)
{
	int playing = 0;
	///////////////////////////////////////////////////////////////////////
	//Updates to game
	/////////////////////////////////////////////////////////////////////////////
	//after short delay, ready for next frame?
	//this keeps the game running at a steady frame rate
	if (GetTickCount() - start >= 30)
	{
		//reset timing
		start = GetTickCount();
		
	}

	///////////////////////////////////////////////////////////////////////////////
	//Render updates
	//////////////////////////////////////////////////////////////////////////////


}
void Game_End(HWND hWnd)
{
	if (back != NULL){
		back->Release();
	}
}