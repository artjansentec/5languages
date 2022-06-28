/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.
 27 jun 2022
*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int num1, num2;
    while(num1 != 999){

        cout << "Digite um valor! " << endl;
        cin >> num1;
        if(num1 != 999){
            cout << "Digite o segundo valor!" << endl;
            cin >> num2;
        
            cout << "A soma desse valor e " << num1 + num2 << endl;
            cout << "A subtracao desse valor e: " << num1 - num2 << endl;
            cout << "A multiplicação desse valor e: " << num1 * num2 << endl;
            cout << "A divisao desse valor e: " << num1 / num2 << endl;
            
        }else{
            break;
        }
    }
    cout << "Obrigado por usar!" << endl;
    return 0;
}
