import java.util.Scanner;


public class MyClass {
    public static void main(String args[]) {
      
      Scanner reader = new Scanner(System.in);
      
      int n1=0, n2=0;
      int som,sub,mult;
      double div;
      
      while(n1 !=999){
          System.out.println("Digite um valor!");
          n1 = reader.nextInt();
          if(n1 != 999){
            System.out.println("Digite o segundo valor!");
            n2 = reader.nextInt();
          
            som = n1+n2;
            sub = n1-n2;
            mult = n1*n2;
            div = n1/n2;
          
            System.out.println("a soma desse valor é" + som);
            System.out.println("a subtracao desse valor é" + sub);
            System.out.println("a multiplicacao desse valor é" + mult);
            System.out.println("a divisao desse valor é" + div);
          }else{            
            break;
          }
          
      }
      reader.close();
      
    }
}