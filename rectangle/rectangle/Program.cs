using System;
namespace rectangle
{
    class Project
    {
        static void Main(string[] args)
        {
            int length, breadth;
            Console.WriteLine("enter length");
            length = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("enter bredth");
            breadth = Convert.ToInt32(Console.ReadLine());
            int area = length * breadth;
            Console.WriteLine("area = " + area);

            Console.ReadLine();
        }
    }
}