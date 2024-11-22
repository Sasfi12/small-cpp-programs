#include <iostream>
#include <cmath>
// Pythagoras explained : c² = a² + b² 
// c is the hypothenus , 
// write a code where you give a and b as a value and the program returns the value of c². 
// BONUS if you can also give back c . 


int main(){
//first declare the values. 
//they will all be double for maximum accracy. 
double a ;
double b ;
double c ;
std::cout << "enter a and b , to obtain the hypothenus c "<< std::endl;
std::cin >> a ; 
std::cin >> b ; 
c = std::sqrt(a*a + b*b); 
std::cout << "Here is c : \n" << c  << std::endl; 

}
