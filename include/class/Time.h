// Time.h
//
// last-edit-by: <>
//
// Description:
//
//////////////////////////////////////////////////////////////////////

#ifndef TIME_H
#define TIME_H 1

#include "PhysicalUnit.h"
#include "BigNum.h"

class Time : public PhysicalUnit{
 public:
  Time(BigNum num_value);
  ~Time();

  Time& operator=(const Time& rhs);

  Time& operator+=(const Time& rhs);
  Time& operator-=(const Time& rhs);

};

inline bool operator==(const Time& lhs, const Time& rhs){ return lhs.get_numerical_value() == rhs.get_numerical_value(); }
inline bool operator!=(const Time& lhs, const Time& rhs){return !operator==(lhs,rhs);}
inline bool operator< (const Time& lhs, const Time& rhs){ return lhs.get_numerical_value() < rhs.get_numerical_value(); }
inline bool operator> (const Time& lhs, const Time& rhs){return  operator< (rhs,lhs);}
inline bool operator<=(const Time& lhs, const Time& rhs){return !operator> (lhs,rhs);}
inline bool operator>=(const Time& lhs, const Time& rhs){return !operator< (lhs,rhs);}


inline Time operator-(const Time& lhs, const Time& rhs){
  Time sub = lhs;
  sub -= rhs;
  return  sub;
}

inline Time operator+(const Time& lhs, const Time& rhs){
  Time add = lhs;
  add += rhs;
  return  add;
}


#endif // TIME_H
//////////////////////////////////////////////////////////////////////
// $Log:$
//
