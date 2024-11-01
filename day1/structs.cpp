#include <iostream>
using namespace std;

struct Vector3 {
  float x;
  float y;
  float z;

  // overloading a binary operator as a member function
  Vector3 operator+(Vector3 Other) {
    return Vector3{
      x + Other.x,
      y + Other.y,
      z + Other.z
    };
  }
  
  // overloading a binary operator as a member function
  Vector3 operator-(){
    return Vector3{ -x, -y, -z };
  }
};

Vector3 operator*(int num, Vector3& vec){
  return Vector3{
    vec.x * num, vec.y * num, vec.z * num
  };
}

Vector3 operator*(Vector3& vec, int num){
  return num * vec;
}

int main(){
  Vector3 CurrentPosition{1.0, 2.0, 3.0};
  Vector3 Movement{4.0, 5.0, 6.0};
  Vector3 NewPosition{
    CurrentPosition + Movement
  };

  std::cout
    << "x=" << NewPosition.x
    << ", y=" << NewPosition.y
    << ", z=" << NewPosition.z << endl;

  Vector3 Vec{2.0, 4.0, 6.0};
  Vector3 ScaledVector{Vec * 2};
  std::cout
    << "x=" << ScaledVector.x
    << ", y=" << ScaledVector.y
    << ", z=" << ScaledVector.z << endl;

  // unstructured binding
  auto [x, y, z]{ScaledVector};
  cout << "x=" << x
    << ", y=" << y
    << ", z=" << z;
}
