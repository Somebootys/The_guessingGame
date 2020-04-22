#include<iostream>
#include<stdlib.h>
#include <time.h>       /* time */
#include <stdio.h>      /* printf, NULL */
#include<fstream>
void save_Score(int count);


void guessNo(){
    srand(time(0)); 
    int answer = rand()%10;
    int guess = -1; 
    int score = 10;
     
    
    do 
     {
     
      printf("Please guess a number : %d\n", answer);
      std::cin>>guess;
      if (isdigit(guess))
      {
        printf("Please input a number and not anything else \n");
        break;
      }
        
      
      
      else if (guess > answer)
      {
        printf("the guess: %d was too high \n", guess);
        score-=1;
      }
      else if ( guess < answer)
      {
        printf("The guess: %d was too low \n", guess);
        score-=1;
      }
        
      else 
      {
      printf("Congratulations you guessed right, your final score:%d \n", score);
      save_Score(score);
      }
        }
    while (answer != guess);
    
   
    
       
}

void save_Score(int count)
{
std::ifstream input("best_score.txt");
if(!input.is_open())
  {
    std::cout<<"Unable to read read file\n";
    return;
  }
  int best_score;
  input >> best_score;
  
  std::ofstream output("best_score.txt");
  if(!output.is_open())
  {
   std::cout<<"Unable to read read file\n";
    return;
  }
  
  if(count < best_score)
  {
    output << count;
  }
  else
  {
    output << best_score;
  }
}

