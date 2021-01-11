using System;

public class Compara
{
	//Compara duas strings para ver se é um palíndromo
   public static void Main()
   {
      string value1 = Console.ReadLine();
      char[] value2 = value1.ToCharArray();

      Console.WriteLine(value1);
      Array.Reverse(value2);
      string palindromo = new string(value2);
      Console.WriteLine(palindromo);

      if(value1.Replace(" ", "") != palindromo.Replace(" ", "")){
      	Console.WriteLine("Não é um palíndromo!");
      }
      else{
      	Console.WriteLine("É um palíndromo");
  	  }
   }
}