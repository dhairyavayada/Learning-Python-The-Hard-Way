#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <process.h>
#include <dos.h>
#include <windows.h>

using namespace std;

//Defining the 'gotoxy' function, as used in the conio.h file; for compilers not supporting conio.h.
void gotoxy(int x, int y)
{
  COORD coord;
  coord.X = x;
  coord.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

class quiz
{
    public:
            //Questions
            void qst();   void set1();  void qst1();  void qst2();
            void qst3();  void qst4();  void qst5();  void qst6();
            void qst7();  void qst8();  void qst9();  void qst10();

            //Question Elimination
            void ff1();   void ff2();   void ff3();   void ff4();
            void ff5();   void ff6();   void ff7();   void ff8();
            void ff9();   void ff10();  void option(); void flip();

            void res(char s[2]); void phone();

            //Points
            void points();
            void pts1();  void pts2();  void pts3();  void pts4();
            void pts5();  void pts6();  void pts7();  void pts8();
            void pts9();  void pts10();

            void display();
}link;

long int pts;
int t = 0, c = 1, flag = 1, e = 0, f = 0, k = 0, op, gh = 0;
char ans[1], w, g, s, h, m, reserve[2], name[50];

// Start screen

int main()
{
  system("cls");
  int ptyh, q;
  gotoxy(20, 10);
  system("color F3");
  cout << "\n\tWelcome to the Quiz Game" << "\n\n\tEnter your username" << "\n\n\t";
  gets(name);
  if (name == name) {
    system("cls");
    cout << "\n\n\tProve that you are human, " << name << ".";
    cout << "\n\n\tIn what year did India gain independence?" << "\n\n\t\t";
    cin >> ptyh;
    if (ptyh == 1945) {
      q = 1;
    } else {
      q = 2;
    }
    switch (q) {
    case 1:
      link.set1();
      break;
    case 2:
      cout << "\n\tEither you are a robot, or your GK is weak.\n\n";
    }
  }

  return 0;
}

// Main Quiz

void quiz::set1()
{
  int a;
  system("cls");
  cout << "\n\tGood to know that you are human. Now, answer the qualifying "
  "question.";
  cout << "\n\n\tC++ was developed initially by _____";
  cout << "\n\n\t(a) Bjarne Stroustrup" << "\t(b) Linus Trovalds" << "\t(c) Kayne West" << "\t(d) Larry Page";
  char reserve[] = "a";
  cout << "\n\n\tEnter your answer: ";
  cin >> ans;
  strlwr(ans);
  t = strcmp(ans, reserve);
  if (t == 0) {
    system("cls");
    cout << "\n\tCongratulations! You are qualified." << "\n\n" << "\tEnter 'a' to continue, or 'n' to exit" << name << "\n\n\n\t";
    cin >> a;
    if (a == a) {
      system("cls");
      gotoxy(10, 10);
      cout << "\n\n\tWelcome to the First Round of The Quiz, " << name << "." << "\n\n\tThe rules are simple. You will be asked a question and "
      "four options.";
      cout << "\n\tOnly one of the option is correct. You will be awarded one "
      "point for every correct answer and no points for the incorrect "
      "ones.";
      cout << "\n\tHowever, one wrong answer, and the game terminates. Don't "
      "panic, though. You have quite a few tricks up your sleeves!";
      cout << "\n\tYou can skip a question, if you wish; but only once. Also, "
      "three times during the quiz, you can eliminate two options," << "\n\tleaving you with only two choices.";
      cout << "\n\n\t********** Decide. Commit. Succeed.**********\n\n\n";
      cout << "\n\n\tPress Enter to Start Quiz" << "\n\n\n";

    }

  } else {
    system("cls");
    cout << "\n\tSorry, you did not qualify, " << name << "." << "\n\tBjarne Stroustrup initially developed the language." << "\n\tTry harder, next time." << "\n\n";
  }
}

// Question 1
void quiz::qst1()
{
  system("cls");
  pts = 1000;
  link.qst1();
  cout << "\n\n\tHow many articles does the English language Wikipedia have?";
  cout << "\n\n\t(a) 5,188,000+" << "\t(b) 1,956,000+" << "\t(c) 927,000+" << "\t(d) 7,000,000+";
  char reserve[] = "a";
}
