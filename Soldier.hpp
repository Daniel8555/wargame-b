#pragma once
#include <iostream>
#include <math.h>
#include <vector>

using namespace std;
namespace WarGame {
typedef enum Type {
    FOOT_SOLDIER,
    FOOT_COMMANDER,
    SNIPER,
    SNIPER_COMMANDER,
    PARAMEDIC,
    PARAMEDIC_COMMANDER
} Type;
class Board;
class Soldier {
protected:
public:
    uint player_num;
    Type type;
    int hp;
    uint damage;
    Soldier(){};
    virtual ~Soldier(){};
    virtual void action(Board &board, pair<int, int> location) = 0;
    virtual const uint getInitHp() const = 0;

    Type getType() { return type; }

    uint getPlayerNum() { return player_num; }

    int getHp() { return hp; }

    uint getEnemyPlayerNum();
};
} // namespace WarGame