using System;

class PrimeNumber {
    
    public long FindPrimeNumber(int n)
    {
        int count=0;
        long a = 2;
        while(count<n)
        {
            long b = 2;
            int prime = 1;// to check if found a prime
            while(b * b <= a)
            {
                if(a % b == 0)
                {
                    prime = 0;
                    break;
                }
                b++;
            }
            if(prime > 0)
            count++;
            a++;
        }
        return (--a);
    }

    public static void Main() {
        PrimeNumber p = new PrimeNumber();
        for(int i=0;i<1000;i++) {
            Console.Write(p.FindPrimeNumber(i));
            Console.Write(" ");
        }
        Console.WriteLine();
    }
}
