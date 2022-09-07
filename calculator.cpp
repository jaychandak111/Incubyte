#include <bits/stdc++.h>
using namespace std;

class  StringCalculator{									            //class declaration
public:
    int add(string str){									            //add function
        int n = str.size(), sum = 0;
        string num = "";

        bool negativeFound = false, newLine = false, isNeg = false;
        vector<int> negativeNums;							       	    //declaring vector which will store negative numbers in it

        for(int i=0; i<n; i++){							         	    //we will run our loop till the size of string
            char ch = str[i];
            
            if(isdigit(ch)){								
                num += ch;
            }
            else if(isalpha(ch)){							     	    //if character is found
                int temp = ch - 'a' + 1;
                num += to_string(temp);
            }
            else if((int)ch == 10 || ch==';'){
                newLine = true;
            }
            else if(ch == '-'){								            //if negative number is found
                negativeFound = true;
                isNeg = true;
                continue;
            }
            else if(ch != ','){
                continue;
            }

            if((ch == ',' || i == n-1 || newLine) && num.size()>0){
                // cout << num << " ";
                int number = stoi(num);
                num = "";

                if(isNeg){						   			             //if negative number is found in string we will push it in vector
                    negativeNums.push_back(-number);
                    isNeg = false;
                    continue;
                }
                newLine = false;

                if(number > 1000) continue;			    			       //if number is greater than 1000 we will omit it
                sum += number;					     			           //incrementing our sum by number present in string
            }
        }

        if(negativeFound){                                       			//if negative number exist then we will run this if statement
            for(auto& negNum : negativeNums){
                cout << negNum << " ";
            }
            cout << endl;
            throw invalid_argument( "Negatives not allowed" );  			//we will throw an error if we found negative number 
        }

        return sum;                                             			//we will return sum if there are no negative number  
    }
};

int main()
{
    StringCalculator sc;                                         			//object creation
    int result = sc.add("//;\n1;2");                                        // calling add method of StringCalculator class
    cout << "The Output of Test Case 9: " << endl;
    cout << "The Result \"//;\n1;2\": " << result << endl;
    return 0;
}