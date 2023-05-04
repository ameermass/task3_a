#include "Fraction.hpp"



namespace ariel {


        Fraction::Fraction(int first, int second) : firstNUm(first), secondeNUm(second){}
        Fraction::Fraction(float floatNum) : firstNUm(floatNum), secondeNUm(floatNum) {}

        Fraction Fraction::operator+(const Fraction &other){
            return other;
        }

        Fraction Fraction::operator-(const Fraction &other){
            return other;
        }

        Fraction Fraction::operator/(const Fraction &other){
            return other;
        }

        bool Fraction::operator==(const Fraction &other){
            return true;
        }

        bool Fraction::operator>(const Fraction &other){
            return true;
        } 

        bool Fraction::operator>=(const Fraction &other){
            return true;
        }
        

        Fraction operator*(float num, const Fraction &other){
            return other;
        }
        
        Fraction operator+(float num,  Fraction &other){
            return other;
        }

        Fraction Fraction::operator*(const Fraction &other){
            return other;
        }

        Fraction Fraction::operator++(int i){
            Fraction frac = Fraction(this->firstNUm,this->secondeNUm);
            return frac;
        }
        Fraction Fraction::operator--(int i){
            Fraction frac = Fraction(1,2);
            return frac;
        }
        Fraction& Fraction::operator--(){
            Fraction frac = Fraction(1,2);
            return *this;
        }

        ostream &operator<<(ostream &os, const Fraction &frac){
            return os;
        }
}