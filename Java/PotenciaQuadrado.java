import java.util.Scanner;//Potenciação ao quadrado de um valor do array

public class PotenciaQuadrado{

	public static void main(String[] args){

		 int[] arr = new int[5];//Vetor declarado vazio
		 int i;

		 Scanner entrada = new Scanner(System.in);

		 System.out.println("Digite os valores do array:");
		 for(i = 0; i < 5; i++){
		 	arr[i] = entrada.nextInt();
		 }
		 System.out.println("Valores do array:");
		 for(i = 0; i < 5; i++){
		 	System.out.println(arr[i]);
		 }

		 System.out.print("Digite o indice do segundo array para potenciacao (entre 0 e 4): ");
		do{
		 i =  entrada.nextInt();
		}while(i > 4 && i <= 0);

		System.out.println("Resposta: "+ Math.pow(arr[i], 2));
	}

}
