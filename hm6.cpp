#include<iostream>
#include<fstream>
#include<string>

void soedenylka(const std::string& from, const std::string& to) {
std::ifstream fis(from);
std::ofstream fos(to, std::ofstream::app);

char c;
while (fis.get(c) && !fis.eof()) {
  fos << c;
}

fis.close();
fos.close();
}


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

soedenylka("text1.txt", "text3.txt");
soedenylka("text2.txt", "text3.txt");

  return 0;
}
