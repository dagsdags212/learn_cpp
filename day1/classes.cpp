#include <iostream>
using namespace std;

class Monster {
public:
  // default constructor
  Monster() = default;
  // custom constructor
  Monster(string Name, int Health = 150) {
    mName = Name;
    mHealth = Health;
    cout << mName << " Ready for Battle!";
    cout << "Health: " << mHealth;
  }
  // constructor prototype
  Monster(int Health);
  
  // destructor
  ~Monster() {
    cout << "Monster Destroyed" << endl;
  }

  // A method prototype
  void TakeDamage(int Damage);
  // A getter for the health attribute
  int GetHealth() { return Health; }

  void SetHealth(int IncomingHealth) {
    if (IncomingHealth < 0) {
      Health = 0;
    } else {
      Health = IncomingHealth;
    }
  }

private:
  int mHealth;
  string mName;
};

// implementing the prototype from line 16
Monster::Monster(int Health) {
  mHealth = Health;
}

void Monster::TakeDamage(int Damage) {
  Health -= Damage;
  // enforce a contract
  if (Health < 0) { Health = 0; }
};

class Weapon {
public:
  int Damage { 50 };
};

int main() {
  Monster Goblin;
  cout << "Health: " << Goblin.GetHealth() << endl;
  Goblin.SetHealth(-50);
  cout << "Health: " << Goblin.GetHealth() << endl;

  Monster Bonker{"Bonker", 250};
};
