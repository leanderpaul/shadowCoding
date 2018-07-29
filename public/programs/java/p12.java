import java.util.*;
class p12
{
	public static void main(String[] args) {
		String s1,s2="";
		int len;
		Scanner scan=new Scanner(System.in);
		System.out.print("Enter a string: ");
		s1=scan.nextLine();
        len=s1.length();
        for(int i=len-1;i>=0;i--)
        {
        	s2=s2+s1.charAt(i);//get character by character
        
        }
        if(s1.equals(s2))//equal function
        	System.out.print(s1+" is a palindrome");
        else
        	System.out.print(s1+" is not a palindrome");
	}
}