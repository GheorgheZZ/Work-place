#include <iostream>
#include <string>

class Persoana 
{
public:
  Persoana(std::string nume) : nume_(nume) {}

  std::string nume() const { return nume_; }

private:
  std::string nume_;
};

// clasa principala Persoana cu clasa derivata student
class Student : public Persoana 
{
public:
  Student(std::string nume, std::string program)
      : Persoana(nume), program_(program) {}

  std::string program() const { return program_; }

private:
  std::string program_;
};

// clasa derivata student care la randul ei are 3  clase derivate StudentLicenta, StudentMasterat, Doctorant
class StudentLicenta : public Student 
{
public:
  StudentLicenta(std::string nume, std::string program, std::string specializare)
      : Student(nume, program), specializare_(specializare) {}

  std::string specializare() const { return specializare_; }

private:
  std::string specializare_;
};

//StudentMasterat
class StudentMasterat : public Student 
{
public:
  StudentMasterat(std::string nume, std::string program, std::string specializare)
      : Student(nume, program), specializare_(specializare) {}

  std::string specializare() const { return specializare_; }

private:
  std::string specializare_;
};

//Doctorant
class Doctorant : public Student 
{
public:
  Doctorant(std::string nume, std::string program, std::string specializare)
      : Student(nume, program), specializare_(specializare) {}

  std::string specializare() const { return specializare_; }

private:
  std::string specializare_;
};


// clasa principala Persoana cu clasa derivata Angajat
class Angajat : public Persoana 
{
public:
  Angajat(std::string nume, std::string departament)
      : Persoana(nume), departament_(departament) {}

  std::string departament() const { return departament_; }

private:
  std::string departament_;
};


/// clasa derivata student care la randul ei are 2 clase derivate Profesor, Inginer
class Profesor : public Angajat 
{
public:
  Profesor(std::string nume, std::string departament, std::string disciplina)
      : Angajat(nume, departament), disciplina_(disciplina) {}

  std::string disciplina() const { return disciplina_; }

private:
  std::string disciplina_;
};

//Inginer
class Inginer : public Angajat 
{
public:
  Inginer(std::string nume, std::string departament, std::string specializare)
      : Angajat(nume, departament), specializare_(specializare) {}

  std::string specializare() const { return specializare_; }

private:
  std::string specializare_;
};

int main() {
  StudentLicenta student_1("John Doe", "Licenta", "Informatica");
  Profesor angajat_1("Jane Doe", "Departamentul de Matematica", "Algebra");

  std::cout << student_1.nume() << " este student la " << student_1.program() << " in ";
  std::cout << student_1.specializare() << std::endl;
std::cout << angajat_1.nume() << " este profesor in " << angajat_1.departament() << " si preda " << angajat_1.disciplina() << std::endl;
return 0;
}