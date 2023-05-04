#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
using namespace std;

namespace ariel{


    class Fraction{

        private:
        int firstNUm;
        int secondeNUm;

        public:

        Fraction(int, int);
        Fraction(float); // for + with float

        Fraction operator+(const Fraction &other);
        Fraction operator-(const Fraction &other);
        Fraction operator/(const Fraction &other);
        bool operator==(const Fraction &other);
        bool operator>(const Fraction &other); 
        bool operator>=(const Fraction &other);
        

        friend Fraction operator*(float num, const Fraction &other);
        
        friend Fraction operator+(float num,  Fraction &other);

        Fraction operator*(const Fraction &other);


        friend ostream &operator<<(ostream &os, const Fraction &frac);

        Fraction operator++(int i);
        Fraction operator--(int i);
        Fraction& operator--();
    };
}