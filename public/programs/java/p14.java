import java.util.*;
class p14
{
	public static void main(String[] args) {
		int a,b,n;
		Scanner scan=new Scanner(System.in);
		System.out.print("Enter n value: ");
		n=scan.nextInt();
		System.out.print("Enter first number: ");
		a=scan.nextInt();
		System.out.print("Enter the difference: ");
		b=scan.nextInt();
		System.out.print("The Arithmetic progression series is ");
		for(int i=0;i<n;i++)
		{
			System.out.print(a+" ");
			a=a+b;
		}
	}
}