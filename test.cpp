#define CATCH_CONFIG_MAIN
#include "catch.hpp"

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
    Quaternion operator+(const Quaternion p)
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