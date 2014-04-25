#ifndef __GAME_H__
#define __GAME_H__

#if defined (__APPLE__) || defined (MACOSX)
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include "Maze.h"
#include "Ghost.h"
#include "Camera.h"
#include "DayLight.h"
#include "Wizard.h"
#include "Ball.h"
#include "Ammunition.h"

void backToNormal(int value);
void theComeBack(int value);


class Game {
	
public:
    
	Game();
    
    void update();
	
    void mapItemsDrawer();
    void ghostsTrouble();
    
    void renderBitmapString();
    void winnerRenderBitmapString();
    void loserRenderBitmapString();
    std::string integerToString(int num);
    void draw();
        
public:
    
    Camera* _camera;
    Lighting * _light;
    Pacman* _pac;
    Pacman* _poc;
    int _balls; 
    int _score;
    int _lives;
    Maze* _maze;
    Ghost* _ghostOne;
    Ghost* _ghostTwo;
    Ghost* _ghostThree;
    std::vector<Ghost*> _ghosts;
    int _ghostsState;
    int _ghostsNextState;
    
    bool _detonator;

private:
    float present_time;
    float last_time;
    
};



#endif
