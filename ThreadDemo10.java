//mainThread priority(5)
class ThreadDemo10
{
	public static void main(String a[])
	{
		System.out.println("Inside main function");
		
		System.out.println("Name of current thread is:" +Thread.currentThread().getName());
		
		System.out.println("Priority of main thread is:" +Thread.currentThread().getPriority());
	}
}