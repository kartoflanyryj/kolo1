// £ukasz Kowalczyk; ZSZIAD; 101401

#include <iostream>
using namespace std;

void pytanie() {
  cout<<"Q1) Jak wyswietlic roznice miedzy drugim a trzecim zatwierdzeniem wykonanym w galezi master?"<<endl;
  cout<<"A1) git diff 5672b17 9952ab3"<<endl;
  cout<<"Q2) Co sie zmienilo?"<<endl;
  cout<<"A2) zmieniono linie z funkcja main w pliku kolo1.cpp"<<endl;
}

int main(int argc, char **argv) {
  cout<<"I love git!"<<endl;
pytanie();
  return 0;
}
