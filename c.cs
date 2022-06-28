// Online C# Editor for free
// Write, Edit and Run your C# code using C# Online Compiler
    
using System;

public class HelloWorld
{
    public static void Main(string[] args)
    {
        int num1 = 0, num2 = 0;
        
        while(num1 != 999){
            Console.WriteLine ("Digite um valor!");
            num1 = int.Parse(Console.ReadLine());
            if(num1 != 999){
                Console.WriteLine ("Digite o segundo valor!");
                num2 = int.Parse(Console.ReadLine());
                
                Console.WriteLine ("a soma desse valor e {0}", num1+num2);
                Console.WriteLine ("a subtracao desse e {0}", num1-num2);
                Console.WriteLine ("a multiplicacao desse valor e {0}", num1*num2);
                Console.WriteLine ("a divisao desse valor e {0}", num1/num2);
                
            }else{
                break;
            }
        }
        Console.WriteLine ("Obrigado por usar!");
    }
}