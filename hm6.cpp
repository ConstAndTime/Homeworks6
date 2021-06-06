#include<iostream>
#include<fstream>

int main(int argc, const char** argv) {

  std::ofstream t1("O:/HM/hm6/text1.txt");
  std::ofstream t2("O:/HM/hm6/text2.txt");

  t1.open("text1.txt");
  t1 <<  "Kabi ya bila carica, govorit odna devica";
  t1 << "ya b dlya batushki carya, rodila b intmainirya.";
  t1 << "Rodila carica v noch, ne to sina, todo doich.";
  t1 << "Doich xotel bit' programmistom C++, no reshil, Pascal ostanovlus'";
t1.close("text1.txt");

  return 0;
}
