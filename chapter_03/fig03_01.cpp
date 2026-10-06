// Figura 3.1: fig03_01.cpp
// Define a classe GradeBook com a fução-membro displayMessage;
// Cria um objeto GradeBook e chama sua função displayMessage.
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

// Definição da classe GradeBook
class GradeBook
{
  public:
    // fução que exibe uma mensagem de boas-vindas ao usuário do GradeBook
    void displayMessage()
    {
      cout << "Wellcome to the Grade Book!" << endl;
    }// fim da função displayMessage
}; // fim da classe GradeBoo

// a função main inicia a execução do programa
int main()
{
  GradeBook myGradeBook; // cria um objeto GradeBook chamada myGradeBook
  myGradeBook.displayMessage();
  return 0;
} // fim do main
