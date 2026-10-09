// Figura 3.10: fig03_10.cpp
// Iniciando a classe GradeBook a partir do arquivo GradeBook.h para uso em main.
#include <iostream>
using std::cout;
using std::cin;

#include "GradeBook.h" // inclui a definição de classe GradeBook

// a função main inicia a execução do programa
int main()
{
  // cria dois objetos GradeBook
  GradeBook gradeBook1( "CS101 Introduction to C++ Programming" );
  GradeBook gradeBook2( "CS102 Data Structures in C++" );

  // exibe valor inicia de courseName para cada GradeBook
  cout << "gradeBook1 create for course: " << gradeBook1.getCourseName()
    << "\ngradeBook2 create for course: " << gradeBook2.getCourseName()
    << endl;
  return 0; // indica terminação bem-sucedida
} // fim da main
