using System;
using System.Net;
using System.Net.Sockets;
using System.Text;


namespace Sockets
{
    class Producer
    {
        public void Run()
        {
            string ipAddress = "127.0.0.1";
            string port = "9999";
            Socket s = new Socket(AddressFamily.InterNetwork, SocketType.Stream, ProtocolType.Tcp);
            s.Connect(new IPEndPoint(IPAddress.Parse(ipAddress), int.Parse(port)));

            String message = "hello";
            byte[] buff = Encoding.UTF8.GetBytes(message);
            Console.WriteLine("Pinging started");

            for (int i = 0; i < 500; i++)
            {
                s.Send(buff);
                s.Receive(buff, 5, SocketFlags.None);
            }

            byte[] end = Encoding.UTF8.GetBytes("end\r\n");
            s.Send(end);
        }
    }
}