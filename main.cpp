#include <SFML/Graphics.hpp>
#include "settings.h"
#include "Roadobj.h"
#include "player.h"
#include "obs.h"
using namespace sf;

int main()
{

    RenderWindow window(VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), WINDOW_TITLE,Style::Close | Style::Titlebar);
    window.setPosition(Vector2i{(1920-(int)WINDOW_WIDTH)/2,0});
    window.setFramerateLimit(FPS);

    Roadobj road1, road2;
    roadObjInit(road1, ROAD1_START_POS, Doroga_File_Name, 100.f);
	roadObjInit(road2, ROAD2_START_POS, Doroga_File_Name, 100.f);
    Roadobj grass1, grass2;
    roadObjInit(grass1, GRASS1_START_POS, Trava_File_Name, 0.f);
	roadObjInit(grass2, GRASS2_START_POS, Trava_File_Name, 0.f);
    Player player;
    playerInit(player);

	Obs obs1, obs2, obs3;
	obsInit(obs1, PLAYER_FILE_NAME);


    while (window.isOpen()){
        Event event;
		while (window.pollEvent(event)) {
			if (event.type == Event::Closed) window.close();
		}
      
		//Update
		roadObjUpdate(grass1);
		roadObjUpdate(grass2);
		roadObjUpdate(road1);
		roadObjUpdate(road2);
        playerUpdate(player);
		obsUpdate(obs1);
		//if(player.sprite.getGlobalBounds().intersects(obs.sprite.getGlobalBounds())){
			// ??? ?????????? ??? ????????????
		//}
		//Draw
        roadObjDraw(window, grass1);
		roadObjDraw(window, grass2);
        //RoadObjDraw(window, Pesok);
        roadObjDraw(window, road1);
		roadObjDraw(window, road2);
        playerDraw(window, player);
		obsDraw(window, obs1);
        window.display();
    }

    return 0;
}
