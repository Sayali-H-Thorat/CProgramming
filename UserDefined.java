import java.util.*;

class AgeInvalidException extends Exception
{
	AgeInvalidException(String str)
	{
		super(str);  //Parent class la call jato Exception chya
	}
	
	
}

class UserDefined
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter your age: ");
		int iAge = sobj.nextInt();
		
		try
		{
			if(iAge < 15)
			{
				AgeInvalidException aobj = new AgeInvalidException("Your age is less than 15");  //split syntax
				throw aobj;
				//throw new AgeInvalidException("Your age is less than 15");  //Inline syntax
			}
			else
			{
				System.out.println("Age is valid");
			}
		}
		catch(AgeInvalidException obj)
		{
			System.out.println(obj);
			
		}
	}
}