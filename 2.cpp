// ConsoleApplication1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

int main()
{
    int n = 5;
    std::cout << "inpt n:";
    std::cin >> n;
 
        for (int j = 0; j < n; ++j)
        {
            for(int l =0 ; l < n; ++l) 
            {
                if(l==0)
                for (int k = n-1-j; k >0; --k)
                {
                    std::cout << " ";
                }
                else
                    for (int k = (2*(n - 1))-(j*2); k > 0; --k)
                    {
                        std::cout << " ";
                    }
                for (int k = 0; k <= 2 * j; ++k)
                {
                    std::cout << "*";
                }
            }

            std::cout << std::endl;
        }
        for (int j = n-1; j > 0; --j)
        {
            for (int l = 0; l < n; ++l)
            {
                if (l == 0)
                    for (int k =0; k < n  - j; ++k)
                    {
                        std::cout << " ";
                    }
                else
                    for (int k =0; k < (2 * n ) - (j * 2); ++k)
                    {
                        std::cout << " ";
                    }
                for (int k = 2 * j-1; k >0 ; --k)
                {
                    std::cout << "*";
                }
            }

            std::cout << std::endl;
        }

}
