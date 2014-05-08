using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading;

namespace Sockets
{
    class Program
    {
        Server s;
        Producer p;
        static void Main(string[] args)
        {
            Program p = new Program();
            p.Run();            
        }

        public void Run()
        {
            Thread st = new Thread(new ThreadStart(startServer));
            Thread pt = new Thread(new ThreadStart(startProducer));

            st.Start();
            pt.Start();

            st.Join();
            pt.Join();

            Console.WriteLine("Finished");
        }

        public void startServer()
        {
            s = new Server();
            s.Run();
        }

        public void startProducer()
        {
            p = new Producer();
            p.Run();
        }
    }
}
