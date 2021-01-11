import java.util.Scanner;
import java.util.ArrayList;//Usei Arraylist
//Isso inclui os métodos do utilitário, como add(), clear(), etc.
//Referência: https://docs.oracle.com/javase/8/docs/api/java/util/ArrayList.html

public class ArrayExemplo{

	Scanner entrada = new Scanner(System.in);
	private ArrayList<Integer> arr = new ArrayList<Integer>();

	public void menuArray(){
		
		int o, i, n;

		 do{

		 	System.out.println("");
			System.out.println("Menu:");
			System.out.println("<1> Inserir no vetor");
			System.out.println("<2> Inserir ordenada (indice + valor)");
			System.out.println("<3> Consultar elemento no vetor");
			System.out.println("<4> Verificar se um valor esta contido no vetor");
			System.out.println("<5> Numero de elementos no vetor");
			System.out.println("<6> Remover um elemento de posicao especifica");
			System.out.println("<7> Limpar vetor");
			System.out.println("<8> Mostrar vetor");


			System.out.print("Digite a opcao: ");
		 	o = entrada.nextInt();

		 	switch(o){
		 		case 0:
		 			System.out.println("Programa finalizado! ");
		 		break;

		 		case 1:
		 			System.out.print("Qual valor? ");
		 			i = entrada.nextInt();
		 			arr.add(i);
		 		break;

		 		case 2:
		 			System.out.print("Qual posicao? (ate "+(arr.size()-1)+") ");
		 			n = entrada.nextInt();
		 			System.out.print("Qual valor?" );
		 			i = entrada.nextInt();
		 			arr.add(n, i);
		 		break;

		 		case 3:
				 	if(arr.isEmpty()){
						 System.out.println("Vetor vazio!!!\n---------------------------------");
						 break;
					 }

		 			System.out.println("Informe o indice: ");
		 			n = entrada.nextInt();
		 			System.out.println(arr.get(n));
		 			System.out.println("---------------------------------");
		 		break;

		 		case 4:
				 	if(arr.isEmpty()){
						 System.out.println("Vetor vazio!!!\n---------------------------------");
						 break;
					 }

		 			System.out.print("Qual valor? ");
		 			i = entrada.nextInt();
		 			System.out.println(arr.contains(i));
		 			System.out.println("---------------------------------");
		 		break;

		 		case 5:
		 			System.out.println(arr.size());
		 			System.out.println("---------------------------------");
		 		break;

		 		case 6:
		 			System.out.print("Qual posicao? ");
		 			do{
		 				n = entrada.nextInt();
			 			if(n > arr.lastIndexOf(arr) && n < 0){
			 				System.out.println("Valor invalido!");
			 			}
		 			}while(n < arr.lastIndexOf(arr) && n < 0);
		 			arr.remove(n);
		 			System.out.println("---------------------------------");
		 		break;

		 		case 7:
		 			arr.clear();
		 		break;

		 		case 8:
		 			if(mostraArray() == 0)
		 				System.out.println("Vetor vazio!!!\n---------------------------------");
		 		break;

		 		default:
		 			System.out.println("Invalido!\n---------------------------------");
		 		break;	
		 	}


		 }while(o > 0);
	}

	public int mostraArray(){

		int m;

		if(arr.isEmpty())
			return 0;
		for(m = 0; m < arr.size(); m++){
			System.out.print(arr.get(m)+" ");
		}
		System.out.println("---------------------------------");
		return 1;

	}

}