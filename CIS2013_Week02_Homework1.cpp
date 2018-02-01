#include <iostream>
using namespace std;

int main()
{
		int num1, num2, num3;
		char opr;
		char question = 'y';
		bool keep_running = true;
		
		while (keep_running)
		{
		
			cout << "Enter your first number" << endl;
			cin >> num1;
		
			cout << "Enter you second number" << endl;
			cin >> num2;
		
			cout << "Enter your operation" << endl;
			cin >> opr;
		
				if (opr == '+')
				{ 
					num3=num1+num2;
				 
				}
				if (opr == '-')
				{
					num3=num1-num2;
				
				}
				else if (opr == '*')
				{
					num3=num1*num2;
				
				}
				else if (opr == '/')
				{
					num3=num1/num2;
				 
				}
			
				cout << "Here is your Solution:" << num3 << endl;
				cout << "Run again (Y/N): ";
				cin >> question;
				
				if(question != 'y') (keep_running = false);
		}
				
			
		
		
		
	return 0;
}