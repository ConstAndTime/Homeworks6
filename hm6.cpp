#include<iostream>
#include<fstream>

int main(int argc, const char** argv) {

  std::ofstream t1("text1.txt");

  t1 << "Kabi ya bila carica, govorit odna devica" "\n";
  t1 << "ya b dlya batushki carya, rodila b intmainirya." "\n";\
  t1 << "Rodila carica v noch, ne to sina, todo doich." "\n";\
  t1 << "Doich xotel bit' programmistom C++, no reshil, Pascal ostanovlus'" "\n";
t1.close();

std::ofstream t2("text2.txt");

t2 << "Zdes' mogla bit' vasha reklama" "\n";
t2 << "No ee zdes' ne budet..." "\n";
t2 << "Tak kak, dlya togo, chtob chto to reklamirotvat'" "\n";
t2 << "Nujen kontent, nujna poseshyaemost', i interesnie idei" "\n";
t2.close();

  return 0;
}
