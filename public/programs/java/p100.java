import java.util.*;
class p100
{
	public static void main(String[] args) {
		int n;
		Scanner scan=new Scanner(System.in);
		System.out.print("Enter n value: ");
		n=scan.nextInt();
		for(int i=1;i<=n;i++)
		{
			for(int j=i;j>0;j--)
			{
				System.out.print("* ");
			}
			System.out.print("\n");
		}
	}
}