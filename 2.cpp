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

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
