#include <iostream>
int main()
{
  int gryffindor,hufflepuff,ravenclaw,slytherin,
  answer1,answer2,answer3,answer4;
  gryffindor = 0;
  hufflepuff = 0;
  ravenclaw = 0;
  slytherin = 0;
  std::cout<<"The Sorting Hat Quiz!";
  std::cout<<"When I'm dead, I want people to remember me as:\n";
  std::cout<<"The Good\n";
  std::cout<<"The Great\n";
  std::cout<<"The Wise\n";
  std::cout<<"The Bold\n";
  std::cin>>answer1;
  if(answer1 == 1){
    hufflepuff++;
    }
  else if(answer1 == 2){
    slytherin++;
  }
  else if(answer1 == 3){
    ravenclaw++;
  }
  else if(answer1 == 4){
    gryffindor++;
  }

  std::cout<<"Dawn or Dusk?\n 1)Dawn\n 2)Dusk";
  std::cin>>answer2;
  if(answer2 == 1){
    gryffindor++;
    ravenclaw++;
  }
  else if(answer2 == 2){
    hufflepuff++;
    slytherin++;
  }
  else{
    std::cout<<"Invalid input";
  }
  std::cout<<"Q3) Which kind of instrument most pleases your ear?\n The voilin\n 2)The trumpet\n 3)The piano\n 4)The drum.";
  std::cin>>answer3;
  if(answer3 == 1){
    slytherin++;
  }
  if(answer3 == 2){
    hufflepuff++;
  }
  if(answer3 == 3){
    ravenclaw++;
  }
  if(answer3 == 4){
    gryffindor++;
  }
  std::cout<<"Q4) Which road tempts you most?\n 1)The wide,sunny grassy lane\n 2)The narrow,dark,lantern-lit alley\n 3)The twisting, leaf-stream path through woods\n 4)The cobbed street lined (acient buildings)\n ";
  std::cin>>answer4;
  if(answer4 == 1){
    hufflepuff++;
  }
  else if(answer4 == 2){
    slytherin++;
  }
  else if(answer4 == 3){
    gryffindor++;
  }
  else if(answer4 == 4){
    ravenclaw++;
  }
  else{
    std::cout<<"Invalid input";
  }
  std::string house;
  int max=0;
if(gryffindor > max){
  max = gryffindor;
  house = "Gryffindor";
}
else if(hufflepuff > max){
  max = hufflepuff;
  house = "Ravenclaw";
}
else if(slytherin > max){
  max = slytherin;
  house = "Slytherin";
}
std::cout<<house<<"!\n";




  return 0;

}
