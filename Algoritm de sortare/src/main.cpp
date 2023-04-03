#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>
#include "Player.h"

void merge(std::vector<int>& arr, int left, int middle, int right )
{
int n1 = middle - left +1;
int n2 = right  - middle;

std::vector<int> left_arr(n1), right_arr(n2);

for(int i=0; i < n1; i++)
{
    left_arr[i] = arr[left+i];
}

for(int i=0; i < n2; i++)
{
    right_arr[i] = arr[middle+1+i];
}

int i = 0, j = 0, k = left;

while (i< n1 && j < n2)
{
    if(left_arr[i] <= right_arr[j])
    {
        arr[k++] = left_arr[i++];
    } 
    else 
    {
        arr[k++] = right_arr[j++];
    }
    
}
    while(i< n1)
    {
        arr[k++] = left_arr[i++];
    }
    while(j < n2)
    {
        arr[k++] = right_arr[j++];
    }

}

void mergeSort(std::vector<int>& arr, int left, int right)
{
    if(left < right)
    {
        int middle = left +(right - left)/2;
        mergeSort(arr, left,middle);
        mergeSort(arr, middle+1, right);

        merge(arr, left, middle, right);
    }
}






void swap(int *a, int*b)
{
    int aux = *a;
    *a = *b;
    *b = aux;
}




void printArray(int myArr[], int size)
{
    for(int i = 0; i< size; ++i)
    {
        std::cout << myArr[i] << ' ';
    }
    std::cout<<std::endl;
}
//O(n^2)
void bubbleSort(int arr[],int n)
{
    int i,j;
    for(i = 0 ; i < n - 1; i++)
    {
        for(j=0;j<n - i -1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(&arr[j], &arr[j+1]);
            }
        }

    }


}

int binarySearch(const std::vector<int>& arr, int target)
{
    int low = 0;
    int high = arr.size() - 1;

    while (low <= high)
    {
        int mid = low + (high-low)/2;
        if (arr[mid]== target)
            return mid;
        else if (arr[mid]<target)
            low = mid + 1;
            else 
            high= mid - 1;
    }
    return -1;

}
int Player::NumberOfPlayers = 0;

class Contor
{
    public:
    static int incrementContor()
    {
        contor++;
        return contor;
    }
      static int DecrementContor()
    {
        contor--;
        return contor;
    }

    static int getContor()
    {
        return contor;
    }
    private:
    static int contor;
    
};

int Contor::contor = 0;


int main(int argc, char const *argv[])
{
   Player p1("Sergiu");
   std::cout <<"Number of players " << p1.NumberOfPlayers <<std::endl;
   Player p2("Stefan");
   Player p3("Daniel");
   Player p4("Adrian");
   std::cout <<"Number of players " << p1.NumberOfPlayers <<std::endl;

   Player* p5 = new Player ("Cristian");
   std::cout <<"Number of players " << Player::NumberOfPlayers <<std::endl;
   delete p5;
   std::cout <<"Number of players " << p3.NumberOfPlayers <<std::endl;

    std::cout << "Numarul initial " << Contor ::getContor() <<std::endl;
    int newCount = Contor::incrementContor();
    int newCount2 = Contor::incrementContor();

    std::cout <<" Dupa prima implementare " << newCount <<std::endl;
    std::cout <<" Dupa a doua implementare " << newCount2 <<std::endl;

    int nt = Contor::DecrementContor();
    std::cout <<" Dupa prima implementare " << newCount <<std::endl;
    
 /*   std::vector<int> SortedArray = {1,2,5,9,33,78,123};
    int target = 9;
    auto result = std::lower_bound(SortedArray.begin(),SortedArray.end(),target);
    
    if(result != SortedArray.end() && *result == target)
    {
        std::cout<< "Element found at index "<< std::distance(SortedArray.begin(),result) <<std::endl;
    }
    else 
    {
        std::cout << "Element not found\n";
    }

  //  int result = binarySearch(SortedArray,7);

  //  std::cout <<"Elementul se afla la indexul: "<< result <<std::endl;
    
   // auto it = std::find(SortedArray.begin(),SortedArray.end(), 500);
   // if(it != SortedArray.end())
   // std::cout <<"Element is found\n";
    //else
      //  std::cout <<"Elemnt not found\n";
  
    int arr[] = {64,34,25,12,22,11,90};
    int n = sizeof(arr)/sizeof(arr[0]);
    

printArray(arr,n);

bubbleSort(arr,n);
printArray(arr,n);

std::vector<int> v = {10,22,5,3,9,75};

std::sort(v.begin(),v.end(),std::greater());// va face defaul crescator

    for(auto data:v)
    { 
        std::cout <<data <<' ';
    }
    std::cout<<std::endl;
*/

    return 0;
}
