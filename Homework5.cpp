#include <iostream>

int main()
{
    //Primul exercitiu
    int acvariuDavid = 8;
    int acvariuAlex = 11;

    std::cout << "Schimbul de pesti: " << std::endl;
    std::cout << "Numarul de pesti din acvariul lui David: " << acvariuDavid << std::endl;
    std::cout << "Numarul de pesti din acvariul lui Alex: " << acvariuAlex << std::endl;

    //Efectuarea shimbului
    int aux = acvariuAlex; 
    acvariuAlex = acvariuDavid; 
    acvariuDavid = aux; 

    std::cout << "Dupa schimb : " << std::endl;
    std::cout << "Numarul de pesti din acvariul lui David: " << acvariuDavid << std::endl;
    std::cout << "Numarul de pesti din acvariul lui Alex: " << acvariuAlex << std::endl;
    std::cout << std::endl;

    //Al doilea exercitiu
    std::cout << "Terminal bancar: " << std::endl;
    const int pin = 8945;
    int SumaDinCont{}, SumaScoasa{}, pinIntr{};
    std::cout << "Pin: "; 
    std::cin >> pinIntr; 

    if (pinIntr == pin) {
        std::cout << "Introduce-ti suma din cont: "; 
        std::cin >> SumaDinCont; 
        std::cout << "Introduce-ti suma ce doriti sa o scoateti: ";
        std::cin >> SumaScoasa; 

        if (SumaDinCont - SumaScoasa < 0) {
            std::cout << "Incercati sa scoateti o suma mai mica sau egala cu " << SumaDinCont << " lei!" << std::endl;
        }
        else {
            std::cout << "Ati scos " << SumaScoasa << " lei." << std::endl;
            std::cout << "Soldul ramas este: " << SumaDinCont - SumaScoasa << " lei." << std::endl;
        }
        
    }
    else {
        std::cout << "Ati introdus un pin gresit!" << std::endl;
    }
    std::cout << std::endl;
     
    
    //Al treilea exercitiu
    std::cout << "La restaurant: " << std::endl;

    int numarPesti{}; 
    
    std::cout << "Introduce-ti numarul de pesti: "; 
    std::cin >> numarPesti; 
    std::cout << "Folosind " << numarPesti << " de pesti, pot fi pregatite " << numarPesti / 3 << " ciorbe Trio." << std::endl;
    std::cout << std::endl;


    //Al patrulea exercitiu
    std::cout << "Grade Celsius to Fahrenhei: " << std::endl;
    
    double celsius{}, fahrenheit{}; 
    
    std::cout << "Introduce-ti temperatura in grade Celsius: "; 
    std::cin >> celsius; 
    
    std::cout << "Temperatura in Fahrenheit: " << (celsius * 9 / 5) + 32 << " F." << std::endl;

}
