#include <iostream>
#include <ctime>

char UserChoice();
char ComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main(){
  
  char player;
  char computer;

  player = UserChoice();
  std::cout << "you choose: ";
  showChoice(player);

  computer = ComputerChoice();
  std::cout << "Computer choose: ";
  showChoice(computer);

  chooseWinner(player, computer);
    return 0;
}

char UserChoice(){
  char player;
  std::cout << "Rock, Paper or Scissors\n";
 
  do{
  std::cout << "Choose one of the following\n";
  std::cout << "*************************\n";
  std::cout << "R for rock \n";
  std::cout << "P for paper \n";
  std::cout << "S for scissors \n";
  std::cin >> player;
  }while(player != 'R' && player != 'P' && player != 'S' && player != 'r' && player != 'p' && player != 's');

  return player;
}

char ComputerChoice(){

  srand(time(0));
  int num = rand()% 3 + 1;

  switch(num){
      case 1:
        return 'r';
      case 2: 
        return 'p';
      case 3:
        return 's';
  }



  return 0;
}

void showChoice(char choice){
  switch(choice){
    case 'r':
    case 'R':
      std::cout << "Rock\n";
        break;

    case 'p':
    case 'P': 
      std::cout << "Paper\n";
        break;
    
    case 's': 
    case 'S':
      std::cout << "Scissor\n";
        break;
  }
  
}

void chooseWinner(char player, char computer){
  switch(player){
    case 'r': if(computer == 'r'){ 
      std::cout << "It's a tie!\n";}
              else if(computer == 'p'){
                std::cout << "You lose";}
              else{
                std::cout << "You win";
    break;

    case 'p': if(computer == 'p'){ 
      std::cout << "It's a tie!\n";}
              else if(computer == 's'){
                std::cout << "You lose";}
              else{
                std::cout << "You win"; }
              break;

    case 's': if(computer == 's'){ 
      std::cout << "It's a tie!\n";}
              else if(computer == 'r'){
                std::cout << "You lose";}
              else{
                std::cout << "You win";}
              break;
              }

        
    

  }
}




