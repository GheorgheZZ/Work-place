#include <iostream>
#include <string>

class Bautura {
  public:
    Bautura(double pret) : pret_(pret) {}
    virtual void prepara() const = 0;
    double pret() const { return pret_; }
    virtual ~Bautura() {}

  private:
    double pret_;
};

class Ceai : public Bautura {
  public:
    Ceai(double pret) : Bautura(pret) {}
    void prepara() const override {
      std::cout << "Se prepara un ceai cu pretul " << pret() << " lei" << std::endl;
    }
};

class Cafea : public Bautura {
  public:
    Cafea(double pret) : Bautura(pret) {}
    void prepara() const override {
      std::cout << "Se prepara o cafea cu pretul " << pret() << " lei" << std::endl;
    }
};

int main() {
  Ceai ceai(10);
  Cafea cafea(15);

  ceai.prepara();
  cafea.prepara();

  return 0;
}