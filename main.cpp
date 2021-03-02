//------------------------------
//  DO NOT MODIFY NEXT LINE
//------------------------------
#include "catch.hpp"
//------------------------------

// Put the assignment code here

class Quaternion {
  
  public: double e, f, g, h;

    Quaternion(double p, q, r, s)
    {
      e=p;
      f=q;
      g=r;
      h=s;
    }
    bool operator == (const Quaternion p)
    {
     if ((p->e==this->x) && p->f==this->f) && p->g==this->g) && p->h==this->h))

     return true;

     else 

     return false;
    }
    Quaternion operator + (const Quaternion p)
    {
      Quaternion r;
      r.e=p.e+this->e;
      r.f=p.f+this->f;
      r.g=p.g+this->g;
      r.h=p.h+this->h;
      
      return r;
    }
    Quaternion operator - (const Quaterion p)
    {
      Quaterion r;
      r.e=p.e-this->e;
      r.f=p.f-this->f;
      r.g=p.g-this->g;
      r.h=p.h-this->h;
      
      return r;
    }
    Quaternion operator * (double s)
    {
      Quaternion p;
      p.e=s* this->e;
      p.f=s* this->f;
      p.g=s* this->g;
      p.h=s* this->h;
      
      return p;
    }
};

//------------------------------
//   DO NOT MODIFY TEST CASES
//------------------------------
TEST_CASE( "Assignment" ) {
    SECTION( "q1" ) {
        Quaternion q{1.0, 2.0, 3.0, 4.0};
        Quaternion p{1.0, 2.0, 3.0, 4.0};
        REQUIRE( q == p );
    }
    SECTION( "q2" ) {
        Quaternion q{1.0, 2.0, 3.0, 4.0};
        Quaternion p{1.0, 2.0, 3.0, 4.0};
        Quaternion r{2.0, 4.0, 6.0, 8.0};
        REQUIRE( (q + p) == r );
    }
    SECTION( "q3" ) {
        Quaternion q{1.0, 2.0, 3.0, 4.0};
        Quaternion p{1.0, 2.0, 3.0, 4.0};
        Quaternion r{0.0, 0.0, 0.0, 0.0};
        REQUIRE( (q - p) == r );
    }
    SECTION( "q3" ) {
        Quaternion q{1.0, 2.0, 3.0, 4.0};
        Quaternion r{2.0, 4.0, 6.0, 8.0};
        REQUIRE( (q * 2.0) == r );
    }
}
//------------------------------
