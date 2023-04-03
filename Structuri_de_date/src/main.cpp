#include <iostream>
#include "Stiva.h"


class Node
{
  public:
  int data;
  Node* next; // asa reprezint nodul
};


void printLinkedList(Node* ref)
{
  while (ref != NULL) // nu putem folosi if ca avem nevoie sa faca pentru toate 3 nod
  {
    std::cout << "Data is " << ref->data <<std::endl;
    ref = ref->next;
  }
  
}


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


//inserarea la capul listei,   o(1) nu trebuie de iterat nimic
void push(Node** referinta, int data) // ** dublu pointer pointer dereferentiat
{
  std::cout <<"inseram un element nou cu val " << data << std::endl;
  Node * new_node = new Node();
  new_node->data = data;

  new_node->next = (*referinta);

  (*referinta) = new_node;

}

//inserarea la coada listei
void append(Node*& head, int data)
{
  std::cout <<"inseram un tail nou cu val " << data << std::endl;
 
  Node* new_node = new Node();
  new_node->data = data;
  //nodul nou va fi coada listei mele
  new_node->next = NULL;

  Node* lastNode = head;

  //daca lista este goala, atunci facem nodul asta capul listei
  if(head == NULL)
  {
    head = new_node;
    return;
  }
  //traversam pana la sf listei
  while (lastNode->next != NULL)
    lastNode = lastNode->next;
  //schimbam  nextul ultimului nod sa arate catre noul 
  lastNode->next = new_node;
}


void deleteNode(Node*& head_ref, int key)
{
  std::cout <<"Cautam sa stergem nodul cu key-ul "<< key <<std::endl;
  Node* temp = head_ref;

  Node* prev = NULL;
  // daca nodul are keya ce trebuie stearsa
  if(temp != NULL && temp->data ==key)
  {
    head_ref = temp->next;// schimbam head-ul
    delete temp; // stergem head-ul vechi
    return;
  }
  else
   {
      while (temp != NULL && temp->data != key)
      {
       prev = temp;
       temp = temp->next;
      
      }
      //daca cheia nu este gasita
      if(temp == NULL)
      {
        return;
      }
      //rupem nod din lista
      prev->next = temp->next;
      delete temp;
    }

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


 printLinkedList(ref);

 Node* patru = NULL;
 patru = new Node();
 patru->data = 4;
 patru->next = NULL;

 trei->next = patru;



CautaElement(ref,4);
push(&ref, 5);
printLinkedList(ref);
append(ref, 10);
printLinkedList(ref);

deleteNode(ref,10);
printLinkedList(ref);


 /*Stiva s;
  s.isEmpty();// aici stiva nu are valori
  for (int  i = 0; i < 11; i++)
  {
    s.push(i);
  }
  s.peek();//
  s.contains(-10);// modificat cu un for!! ca un template
  s.isEmpty();// aici stiva e full
  for(int i = 11; i> 0; i--)
  {
    s.pop();
  }
  */ 
  
    return 0;
}


// o functie ce sa caute intr-o lista simpla inlantuita un element