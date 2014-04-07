#ifndef PacmanLove_Pacman_h
#define PacmanLove_Pacman_h

#include "Character.h"
#include "Eyebrow.h"
#include "MinerHat.h"

class Pacman : public Character {
    
public:
    Pacman();
    ~Pacman();
   
    void draw();
    void move(float dist);
    void setAngle(float posX, float posY);
    int getAngle();
    bool isGhost();
    void backAgain();

    bool _explodingTime;
    
private:
    int _angle;
	Eyebrow* _eyebrow;
	MinerHat* _cap;
};


#endif
