/*  Justin Huttegger and Enrique Chavez
	CSCI 20
    May 23, 2017
	Assignment 5 - Program: The program will be a video game rental service. The program will prompt the user to enter a genre that they want to search in, 
	then it will ask what game they want to search for with that rating, then it will say if that is in stock or not. 
	We want to complete this project because it would be an way to search for a video game that a person might want to play.
*/


#include <iostream>
#include <fstream>
#include <string>
using namespace std;							
												

class GameSearch{ //class to search the files for a game
	public:
	 
		void FPSFunc(string game, string line); //FPS function
    	void RPGFunc(string game, string line); //RPG function
		void ActionFunc(string game, string line); //Action function
    	void SportFunc(string game, string line); //Sport functoin
	    
	    string SetUserCheckTitle(string game); //Mutator
	    string SetFileCheckTitle(string line); //Mutator
	    
	    string GetUserCheckTitle(); //Accessor
	    string GetFileCheckTitle(); //Accessor
		
	private:
	
		string UserCheckTitle_;
		string FileCheckTitle_; 
	
};

    string GameSearch::SetFileCheckTitle(string game){ //sets FileCheckTitle_ to game, game checks the user input
        
        FileCheckTitle_ = game; 
    }
    string GameSearch::SetUserCheckTitle(string line){ //sets UserCheckTitle to line, line checks the files
        
        UserCheckTitle_ = line; 
    }
    
    string GameSearch::GetFileCheckTitle(){
        
        return FileCheckTitle_;
    }
    
    string GameSearch::GetUserCheckTitle(){
        
        return UserCheckTitle_; 
    }

void GameSearch::FPSFunc(string game, string line){ //Function to search in FPS text file

    game; 
    ifstream FPSlist;
    FPSlist.open ("genreFPS.txt"); //opens the FPS text file
     
   if (FPSlist){ //If checking for games in the FPS text file
   
        while (getline( FPSlist, line )){
        	
    		if (line == game){ //if the game is on the list
    		
            	cout<<"This game is in stock."<<endl;
            	
        		} //end if loop
        		
    		} //end while loop

    	
		 FPSlist.close(); //closes the FPS text file
    }
    
 else  cout << "Error with file\n"; 

}



void GameSearch::RPGFunc(string game, string line){ //Function to search in RPG text file

    game; 
    ifstream RPGlist;
    RPGlist.open ("genreRPG.txt"); //opens the RPG text file
     
   if (RPGlist){ //If checking for games in the RPG text file
   
        while (getline( RPGlist, line )){
        	
    		if (line == game){ //if the game is on the list
    		
            	cout<<"This game is in stock."<<endl;
            	
        		} //end if loop
        		
    		} //end while loop
    	
		 RPGlist.close(); //closes the RPG text file
    }
    
 else  cout << "Error with file\n"; 
 
}


void GameSearch::ActionFunc(string game, string line){ //Function to search in Action text file

    game; 
    ifstream Actionlist;
    Actionlist.open ("genreAction.txt"); //opens the Action text file
     
   if (Actionlist){ //If checking for games in the Action text file
   
        while (getline( Actionlist, line )){
        	
    		if (line == game){ //if the game is on the list
    		
            	cout<<"This game is in stock."<<endl;
            	
        		} //end if loop

    		} //end while loop
    	
		 Actionlist.close(); //closes the Action text file
    }
    
 else  cout << "Error with file\n"; 

}



void GameSearch::SportFunc(string game, string line){ //Function to search in Sport text file

    game; 
    ifstream Sportlist;
    Sportlist.open ("genreSport.txt"); //opens the Sports text file
     
   if (Sportlist){ //If checking for games in the Sports text file
   
        while (getline( Sportlist, line )){
        	
    		if (line == game){ //if the game is on the list
    		
            	cout<<"This game is in stock."<<endl;
            	
        		} //end if loop

    		} //end while loop
    	
		 Sportlist.close(); //closes the Sport text file
    }
    
 else  cout << "Error with file\n"; 
 
}
	




int main() { 	/******** All input and output here ********/
	
	string game;//for functions  
    string line;//for functions 
	
	string genreChoice; //checking the user genre choice
	string gameChoice;
	char checkGame; //checking if user wants to search for a game
	
	cout << "Would you like to search for a game? Y/N?" << endl; 
	cin >> checkGame; // asking the user if they would want to search the inventory for a game
	
	while (checkGame == 'Y') { //runs if the user decides to search for a game
	
		cout << "What genre would you like to search for?" << endl;
		cin >> genreChoice; //checks what genre the user would like to search in
			
				if(genreChoice == "FPS") {// if they search FPS
				
					cout << "What game would you want to rent? Please don't use spaces." << endl;
					cin >> game;
						
						GameSearch user1; //running the FPS function of GameSearch class
    					user1.FPSFunc( game,line);
    					
						
					cout << "Do you want to check a different title? Y/N?" << endl; 
					cin >> checkGame; //check if they want to search for a different title
					
						if (checkGame == 'N') { //if they don't want to search for another title, close the program
						
						cout << "Thank you!" << endl;
						
						} //end FPS check again
						
					} // end FPS if
				
				else if (genreChoice == "RPG") { //if they search RPG
				
					cout << "What game would you want to rent? Please don't use spaces." << endl;
					cin >> game;
					
						GameSearch user1; //running the RPG function of GameSearch class
    					user1.RPGFunc( game,line);
    					
    					
					cout << "Do you want to check a different title? Y/N?" << endl; 
					cin >> checkGame; //check if they want to search for a different title
					
						if (checkGame == 'N') { //if they don't want to search for another title, close the program
						
						cout << "Thank you!" << endl;
						
						} // end RPG check again
						
				} // end RPG else if
				
				else if (genreChoice == "Action") { //if they search Action
				
					cout << "What game would you want to rent? Please don't use spaces." << endl;
					cin >> game;
					
						GameSearch user1; //running the Action function of GameSearch class
    					user1.ActionFunc( game,line);
    					
					cout << "Do you want to check a different title? Y/N?" << endl; 
					cin >> checkGame; //check if they want to search for a different title
					
						if (checkGame == 'N') { //if they don't want to search for another title, close the program
						
						cout << "Thank you!" << endl;
						
						} // end Action check again
						
				} //end Action else if
				
				else if (genreChoice == "Sport") { //if they search Sport
				
					cout << "What game would you want to rent? Please don't use spaces." << endl;
					cin >> game;
					
						GameSearch user1; //running the Sport function of GameSearch class
    					user1.SportFunc( game,line);
    					
					cout << "Do you want to check a different title? Y/N?" << endl; 
					cin >> checkGame; //check if they want to search for a different title
					
						if (checkGame == 'N') { //if they don't want to search for another title, close the program
						
						cout << "Thank you!" << endl;
						
						} //end Sport check again
						
				} // end Sport else if
				
				else{ //if genre choice isn't valid
				
					cout << "Please choose from these genres: FPS, RPG, Action, Sport." << endl;
					
				} // end else for genre isn't valid
				
			} //end while loop for genre choice
			
		return 0;
		
} // end main