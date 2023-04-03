#include <iostream>

class Node
{
  public:
  int data;
  Node* next; // asa reprezint nodul
};

void CautaElement(Node* cauta, int valoarea) // daca in cauta nu exista nici un pointer (adica e null) ap nu va parcurge bucla while
{
   while(cauta) {
      if(cauta->data == valoarea)// verificam daca valoarea cauta->data este egala cu valoarea cautata 
      {
         std::cout << "Exista acest element"<<std::endl;
         return;
      }
      cauta = cauta->next; // trecem la urmatorul pointer
   }
   std::cout << "Nu exista acest element"<<std::endl;
}


int main(int argc, char const *argv[])
{
  Node* ref = NULL;
  Node* doi = NULL;
  Node* trei = NULL; // pana aici avem doar 3 pointeri

  //alocam tri noduri in memoria heap
  ref = new Node();
  doi = new Node();
  trei = new Node();

  ref->data = 1;
  ref->next = doi;

  doi->data = 2;
  doi-> next = trei;
  trei->data = 3;
  trei->next = NULL;


 //printLinkedList(ref);

 Node* patru = NULL;
 patru = new Node();
 patru->data = 4;
 patru->next = NULL;

 trei->next = patru;
 //printLinkedList(ref);


CautaElement(ref,4);
return 0;
}