// Figura 3.7: fig03_07.cpp
// Instanciando múltiplos objetos da classe GradeBook e utilizado
// o construtor GradeBook para especificar o nome do curso
// quando cada objeto GradeBook é criado.
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;

// Definição da classe GradeBook
class GradeBook
{
  public:
    // o construtor inicializa courseName com a string fornecida com argumento
    GradeBook( string name )
    {
      setCourseName( name ); // chama a função set para inicializar courseName
    } // fim do construtor GradeBook

    // função para configurar o nome do curso
    void setCourseName( string name )
    {
      nameOfCourse = name; // armazena o nome do curso no objeto
    } // fim da função setCourseName

    // função para obter o nome do curso
    string getCourseName()
    {
      return nameOfCourse; // retorna courseName do objeto
    } // fim da função getCourseName

    // exibe uma mensagem de boas-vindas para o usuário GradeBook
    void displayMessage()
    {
      // chama getCourseName para obter o courseName
      cout << "Wellcome to the grade book for\n" << getCourseName()
        << "!" << endl;
    } // fim da função displayMessage
  private:
    string nameOfCourse; // nome do curso para esse GradeBook
}; // fim da classe GradeBook

// a função main inicia a execução do programa
int main()
{
  // cria dois objetos GradeBook
  GradeBook gradeBook1( "CS101 Introdution to C++ Programming" );
  GradeBook gradeBook2( "CS102 Data Structures in C++" );

  // exibe valor inicial de courseName para cada GradeBook
  cout << "gradeBook1 create for course: " << gradeBook1.getCourseName()
    << "\ngradeBook2 created for course: " << gradeBook2.getCourseName()
    << endl;
  return 0; // indica terminação bem-sucedida
} // fim de main
