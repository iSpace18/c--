#include <iostream>

int main(){
    // std::cout<<"Шахназарян Давид Владимирович\n04.08.2007\nМужской\n";
    // int i_num = 52;
    // auto const  & hw{"Hello World!"};
    // auto const & name{"Шахназарян Давид Владимирович"};
    // auto const & data {"04.08.2007"};
    // auto const & male{"Мужской"};
    // std::cout <<name,data,male;
    // std::cout<<hw;
  int First_num = 0;
    std::cout << "Введите первое число: ";
    std::cin >> First_num;

    int Second_num = 0;
    std::cout << "Введите второе число: ";
    std::cin >> Second_num;

    std::cout << "Ваши числа: " << First_num << " и " << Second_num << std::endl;
    std::cout << "Разность: " << First_num - Second_num << std::endl;
    std::cout << "Сумма: " << First_num + Second_num << std::endl;
    std::cout << "Произведение: " << First_num * Second_num << std::endl;
    return 0;
}