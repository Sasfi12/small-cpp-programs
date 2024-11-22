#include <iostream> 
void primeornot(int count) {
	int score = 0 ; 
	int turn_ammount = count;  
	int i ;
    int n ; 	
	bool prime ;
	while(count > 0){  //count is used to count the ammount of turn already accomplished.  
		if(n < 2 || n!=-1){
			std::cout << "Enter a number : " << std::endl ;  
			std::cin >> n ; 
			--count;  	 //at the begining of each loop count is decremented. 

			if (n == -1)
			{
				std::cout << "You have succesfully exited the program... " << std::endl;
				break;
			}
			// the number has to be above 2 because all below are subject to mathematical errors. 

			if(n >= 2) {	//goes as follow :
				for(i = 2 ; i < n / 2 ; i++) {  // start i from two and as long as i does not reach half of the number keep going up.   
					if ( n % i == 0 ) { 
						prime = false ;  // if one of those number moduled to i is 0. stop , and flag the bolean as false. 
				  		break;	// IMPORTANT; if there is no need to continue the loop , manually add "break;" at the end.  
					}

					else 
					{ 
						prime = true ; // In all other cases. the flag stays true.  
					}	

				}
			// Prime test. 
			if (prime == true) {
				std::cout << "This number is prime , \nYOU GAIN 1 POINT" << std::endl; 
				++score;                        
				std::cout << "Your score is " <<score << "\\" << turn_ammount << std::endl;
				//comments and score handling when we get it right. 
			}
			if(prime==false) {
				std::cout << "This number is not prime..." << std::endl;
				std::cout << "Your score is " <<score << "\\" << turn_ammount << std::endl;
				//comment on score handling when we get it wrong. 
			}
			}
		}
		else {
			std::cout << "This is number is not testable to see if prime or not" << std::endl; 
		}
		// this else works with the condition that tested if number was above 2 , it is very difficult to read if not indented. 
			}
	// Out of the loop , we are testing final results based on score. 
	if(score == 0 ){
			std::cout << "none of the number you have proposed are prime numbers" << std::endl; 
		} 
	
	if(score == turn_ammount){
		std::cout << "Congratulations ! all your answers are correct !" << std::endl;
	} 
	else{
		std::cout << "Infortunately you did not get full marks, try again next time !" << std::endl; 
	}
}

int main(){
	std::cout << "Welcome to my math game ! The goal is very simple...\n\nYou will first choose an ammount of prime numbers to find\n\nthen you will have to find that exact ammount of prime numbers.\n\nIf one answer is false , the programs ends... " << std::endl;
	int n ; 
	std::cout << "enter the ammounts of prime number you want to find " << std::endl; 
	std::cin >> n ; 
	if (n >= 0 ){

	
	std::cout << "you have " << n << " prime numbers to find " << std::endl; 
	primeornot(n);
	}
	else {
		std::cout << "This is not an acceptable ammount..." << std::endl;
	} 
	return 0 ; 
	} 
