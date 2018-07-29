import java.util.*;
class p103
{
	public static void main(String[] args) {
		int n,a;
		Scanner scan=new Scanner(System.in);
		System.out.print("Enter n value: ");
		n=scan.nextInt();
		for(int i=1;i<=n;i++)
		{
			a=i;
			for(int j=1;j<=i;j++)
			{
				System.out.print(a+" ");
				a=a+(n-j);

			}
			System.out.print("\n");
		}
	}
}