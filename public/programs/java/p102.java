import java.util.*;
class p102
{
	public static void main(String[] args) {
		int n;
		Scanner scan=new Scanner(System.in);
		System.out.print("Enter n value: ");
		n=scan.nextInt();
		for(int i=0;i<n;i++)
		{
			int a=65+i;//ASCII format for 'A'
			for(int j=i;j>=0;j--)
			{
				System.out.print((char)a+" ");//print character related to ASCII value

			}
			System.out.print("\n");
		}
	}
}