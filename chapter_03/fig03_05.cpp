// Figura 3.5: fig03_05.cpp
// Define a classe GradeBook que contém um membro de dados courseName
// e funções-membro para configurar e obter seu valor;
// Cria e manipula um objeto GradeBook com essas funções.
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;
using std::getline;

// defição da classe GradeBook
class GradeBook
{
  public:
    // função que configura o nome do curso
    void setCourseName( string name )
    {
      courseName = name; // armazena o nome do curso no objeto
    } // fim da fução setCourseName

    // função que obtém o nome do curso
    string getCourseName()
    {
      return courseName; // retorna o courseName do objeto
    } // fim da função getCourseName

    // função que exibe uma mensagem de boas-vindas
    void displayMessage()
    {
      // essa instrução chama getCourseName para obter o
      // nome do curso que esse GradeBook representa
      cout << "Wellcome to the grade book for\n" << getCourseName() << "!"
        << endl;
    } // fim da função displayMessage
  private:
    string courseName; // nome do curso para esse GradeBook
};

// a função main inicia a execução do programa
int main()
{
  string nameOfCourse; // strings de caracteres para armazenar o nome do curso
  GradeBook myGradeBook; // cria um objeto GradeBook chamado myGradeBook

  // exibe valor inicial de courseName
  cout << "Initial course name is: " << myGradeBook.getCourseName()
    << endl;

  // solicita, insere e configura o nome do curso
  cout << "\nPlease enter the course name:" << endl;
  getline( cin, nameOfCourse ); // configura o nome do curso
  myGradeBook.setCourseName( nameOfCourse ); // configura o nome do curso

  cout << endl; // gera saída de uma linha em branco
  myGradeBook.displayMessage(); // exibe a mensagem com o novo nome do courso
  return 0; // indica terminação bem-sucedida
} // fim de main
