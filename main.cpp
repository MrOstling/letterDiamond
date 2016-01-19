#include <iostream>
using namespace std;
/* Prints a diamond of letters with 'A' at the top and bottom and
 * the capital letter provided by the input c at the left and right.
 */
void printDiamond(char c){
   string s=" ";                    //initialize the line
   //Make the top of the diamond line by line.
   for(int i='A'; i<=c; i++){
      s=" ";                        //reset line
      s.insert(0,(c+i-2*'A'),' ');  //fill the line with empty space
      s[c-i]=(char)i;               //put in the left letter
      s[c+i-2*'A']=(char)i;         //put in the right letter
      cout<<s<<endl;                //print the line
   }
   //Make the bottom of the diamond line by line.
   for(int i=c-1; i>='A'; i--){
      s=" ";                        //reset line
      s.insert(0,(c+i-2*'A'),' ');  //fill the line with empty space
      s[c-i]=(char)i;               //put in the left letter
      s[c+i-2*'A']=(char)i;         //put in the right letter
      cout<<s<<endl;                //print the line
   }

}
int main(){
   string inputLetter;
   cout << "Please enter a letter and I will show you a diamond: ";
   while(true){
      cin >> inputLetter;                       //get the input
      inputLetter[0]=toupper(inputLetter[0]);   //capitalize it
      if(inputLetter == "Exit"){                //Exit when "exit" is inputed.
         break;
      }else if(inputLetter.length()>1){         //Check that its only one character.
         cout<<endl<<"Try only one letter: ";
      }else if(    (0 <= inputLetter[0]-'A')
               and (inputLetter[0]-'A' <= 26)){ //Check that the input is a capital letter
         cout<<endl;
         printDiamond(inputLetter[0]);
         cout<<endl<<"Try another letter: ";
      }else{
         cout <<endl<< "Try one of these ABCDEFGHIJKLMNOPQRSTUVWXVZ or exit to exit: ";
      }
   }
   return 0;
}