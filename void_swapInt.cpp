void swapInt(int &a, int& b) {
    int aux = 0;
    
    //a = 5;
    //b = 10;
    aux = a; // aux = 5
    a = b;   // a = 10
    b = aux; // b = 5
}

int main() {
int a = 10;
    int b = 5;

    std::cout<<"a = " << a <<"\n";
    std::cout<<"b = " << b <<"\n\n";

    swapInt(a,b);

    std::cout<<"a = " << a <<"\n";
    std::cout<<"b = " << b <<"\n";
return 0;
}