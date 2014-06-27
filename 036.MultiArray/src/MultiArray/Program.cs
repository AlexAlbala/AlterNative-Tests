using System;

namespace MultiArray
{
    /*class OperatedMatrix
    {
        public const int DimSize = 3;
        private double[,] m_matrix = new double[DimSize, DimSize];

        // allow callers to initialize
        public double this[int x, int y]
        {
            get { return m_matrix[x, y]; }
            set { m_matrix[x, y] = value; }
        }

        // let user add matrices
        public static OperatedMatrix operator +(OperatedMatrix mat1, OperatedMatrix mat2)
        {
            OperatedMatrix newMatrix = new OperatedMatrix();

            for (int x = 0; x < DimSize; x++)
                for (int y = 0; y < DimSize; y++)
                    newMatrix[x, y] = mat1[x, y] + mat2[x, y];

            return newMatrix;
        }
    }*/

    class MatrixTest
    {
        // used in the InitMatrix method.
        //public static Random m_rand = new Random();

        // test Matrix
        static void Main()
        {
            var s = "Hello";
            s = s + " World";
            Console.WriteLine(s);
            /*OperatedMatrix mat1 = new OperatedMatrix();
            OperatedMatrix mat2 = new OperatedMatrix();

            // init matrices with random values
            InitMatrix(mat1);
            InitMatrix(mat2);

            // print out matrices
            Console.WriteLine("Matrix 1: ");
            PrintMatrix(mat1);

            Console.WriteLine("Matrix 2: ");
            PrintMatrix(mat2);

            // perform operation and print out results
            OperatedMatrix mat3 = mat1 + mat2;

            Console.WriteLine();
            Console.WriteLine("Matrix 1 + Matrix 2 = ");
            PrintMatrix(mat3);

            Console.ReadLine();*/
        }

        // initialize matrix with random values
        /*public static void InitMatrix(OperatedMatrix mat)
        {
            for (int x = 0; x < OperatedMatrix.DimSize; x++)
                for (int y = 0; y < OperatedMatrix.DimSize; y++)
                    mat[x, y] = m_rand.NextDouble();
        }

        // print matrix to console
        public static void PrintMatrix(OperatedMatrix mat)
        {
            Console.WriteLine();
            for (int x = 0; x < OperatedMatrix.DimSize; x++)
            {
                Console.Write("[ ");
                for (int y = 0; y < OperatedMatrix.DimSize; y++)
                {
                    // format the output
                    Console.Write(mat[x, y]);

                    if ((y + 1 % 2) < 3)
                        Console.Write(", ");
                }
                Console.WriteLine(" ]");
            }
            Console.WriteLine();
        }*/
    }
}