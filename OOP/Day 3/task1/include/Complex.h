#ifndef DAY_1_COMPLEX_H
#define DAY_1_COMPLEX_H
class Complex {
    int real,img;
public:
    Complex() ;
    Complex(int real) ;
    Complex(int real,int img) ;
    void setReal(int real) ;
    void setImg(int img) ;
    int getReal() ;
    int getImg() ;
    Complex add(Complex c);
    void display() ;
     Complex operator+(Complex &c);
     Complex operator+(int num);
     bool operator==(Complex c);
     bool operator!=(Complex c);
      Complex operator++();
      Complex operator++(int);
};


#endif
