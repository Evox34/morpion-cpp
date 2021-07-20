#include <iostream>
#include <vector>

#include <random>



 int main()
{
  
    int game=0;
    std::string input_user;
    std::string a="1";
    std::string b="2";
    std::string c="3";
    std::string d="4";
    std::string e="5";
    std::string f="6";
    std::string g="7";
    std::string h="8";
    std::string i="9";
    std::string j="10";
    while(game == 0){
    std::cin >> input_user;
    if(input_user == "1"){
      a="x";

    }
       if(input_user == "2"){
      
      b="x";
    }
       if(input_user == "3"){
    
      c="x";
    }
       if(input_user == "4"){
      
      d="x";
    }
       if(input_user == "5"){
      e="x";
    }
       if(input_user == "6"){
           f="x";
    }
     if(input_user == "7"){
           g="x";
    }
     if(input_user == "8"){
           h="x";
    }
    if(input_user == "9"){
           i="x";
    }
    if(input_user == "10"){
           j="x";
    }
    else{
      std::cout<<"11";
    }


     std::random_device dev;
    std::mt19937 rng(dev());
    std::uniform_int_distribution<std::mt19937::result_type> dist6(1,10); // distribution in range [1, 6]
     if(dist6(rng) == 1){
      a="x";


    }
     if(dist6(rng) == 2){
      
      b="x";
    }
       if(dist6(rng) == 3){
    
      c="x";
    }
       if(dist6(rng) == 4){
      
      d="x";
    }
       if(dist6(rng) ==5){
      e="x";
    }
       if(dist6(rng) == 6){
           f="x";
    }
     if(dist6(rng) == 7){
           g="x";
    }
     if(dist6(rng) == 8){
           h="x";
    }
   if(dist6(rng) == 9){
           i="x";
    }
    if(dist6(rng) == 10){
           j="x";
    }
    else{
      std::cout<<"11";
    }




    if(a=="x"&& b=="x" && c=="x"){
        std::cout<<"win";
        break;



    }

    if (a=="x" && e=="x"&&j=="x")
    {
        std::cout<<"win";
        break;

    }

    if (a=="x" && d=="x"&&g=="x")
    {
        std::cout<<"win";
        break;

    }
     if (b=="x" && f=="x"&&i=="x")
    {
        std::cout<<"win";
        break;

    }
       if (e=="x" && f=="x"&&g=="x")
    {
        std::cout<<"win";
        break;

    }
      




     std::vector<std::string> const tableau_1 { a , b , c ,};
     std::vector<std::string> const tableau_2 { e , f , g ,};
     std::vector<std::string> const tableau_3 { h , i , j };
    
      system("cls");
    for (auto const element : tableau_1)
    { 
        std::cout << element <<" ";
    }
     std::cout <<"\n";

    for(auto const element_2 :  tableau_2){

      std::cout<<element_2<<" ";
    }
    std::cout<<"\n";
    for (auto const element_3 : tableau_3)
    {
      std::cout<<element_3<<" ";
    }

   std::cout<<""<<std::endl;
    }
  
     

    

  
   
}
