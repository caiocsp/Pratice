using System;

public class Compara
{
	//Compara duas strings para ver se é um palíndromo
   public static void Main()
   {

      string value1 = Console.ReadLine();
      char[] value2 = value1.ToCharArray();

      //Utilizando a função de classe array para inverter o array de char
      Array.Reverse(value2);
      string palindromo = new string(value2);//Passando como referência para uma string para a compararação
      Console.WriteLine(palindromo);

      if(value1.Replace(" ", "") != palindromo.Replace(" ", "")){
      	Console.WriteLine("Não é um palíndromo!");
      }
      else{
      	Console.WriteLine("É um palíndromo");
      }
   }
}