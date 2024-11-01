class Actor {
  void Render(){};
};

class Character : public Actor {
public:
  void Move(){}
  void Attack(){}
  void DropLoot(){}
};

class Goblin : public Character {
public:
  void Enrage(){}
};

class Dragon : public Character {
public:
  void Fly(){}
};

// preventing inheritance
class Demon : final {};

// Vampire is a subclass of Character that can
// no longer be a parent class
class Vampire final : public Character {};

int main(){
  Goblin Bonker;
  Bonker.Attack();
  Bonker.Render(); // inherited from Actor 

  Actor Rock;
  Rock.Render();
}
