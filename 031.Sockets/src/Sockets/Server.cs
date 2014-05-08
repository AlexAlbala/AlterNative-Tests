using System;
using System.Net;
using System.Net.Sockets;
using System.Text;

namespace Sockets
{
    class Server
    {
        public void Run()
        {
            string sIpAddress = "127.0.0.1";
            string port = "9999";
            IPAddress ipAddress = IPAddress.Parse(sIpAddress);
            IPEndPoint m_LocalEndPoint = new IPEndPoint(ipAddress, int.Parse(port));

            try
            {
                // Create a TCP/IP socket.
                Socket s = new Socket(AddressFamily.InterNetwork, SocketType.Stream, ProtocolType.Tcp);
                s.Bind(m_LocalEndPoint);
                s.Listen(10);

                Console.Write("IpAddress: ");
                Console.WriteLine(ipAddress.ToString());

                Console.Write("Port :");
                Console.WriteLine(port);

                byte[] buff = new byte[5];

                Socket s2 = s.Accept();
                Console.WriteLine("connected");

                while (true)
                {
                    s2.Receive(buff, 5, SocketFlags.None);
                    Console.Write("Received: ");
                    String rcv = Encoding.UTF8.GetString(buff);

                    if (rcv.Equals("end\r\n"))
                        break;

                    Console.WriteLine(rcv);
                    s2.Send(buff);
                }
            }
            catch (Exception)
            {
                Console.WriteLine("Exception");
            }
        }
    }
}