
#ifndef SERVER_CHARACTERS_H
#define SERVER_CHARACTERS_H


class Characters {
public:
private:
protected:
    int health;
    int armour;
    int speed;
    int damage;
    int moveSpeed;
    int level;

};
class Melee : public Characters{

};
class Bow : public Characters{

};
class Shield : public Characters{

};
class Zombie : public Characters{

};

#endif //SERVER_CHARACTERS_H
