/*
读入一个正整数 n
计算其各位数字之和
用汉语拼音写出和的每一位数字
输入样例
1234567890987654321123456789
输出样例
yi san wu
*/

/*
题解
建立字符串数组，存放每个数字的拼音
字符到数字的转换：s[i] - '0'
数字转换成字符串：to_string()    所以不要忘记前面加头文件#include <string>
遍历字符串，对每个数字，输出对应下标的字符串即可
*/


#include <iostream>
#include <string>
using namespace std;

int main()
{
    int sum = 0;  // 不要忘记初始化
    string s;
    // 存储拼音
    string str[10] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
    cin >> s;
    // 计算各位之和
    for (int i = 0; i < s.length(); ++i)
    // length()或size()均可AC
    {
        sum += s[i] - '0'; // - '0'表示字符转换为数字
        /*
        把字符型数据转换为整型
        在ACSII码表中字符‘0’的十进制值是48
        假设有一个字符为‘0’
        那么计算机识别出来的十进制值是48而不是0
        所以可以通过公式可以把字符型的0转化为整型的0
        */
    }
    // 结果转换为字符串
    string ans = to_string(sum); // to_string()函数将整型转换为字符串
    // 注意空格
    for (int j = 0; j < ans.length(); ++j)
    {
        if (j == 0)
            cout << str[ans[j] - '0'];
        else
            cout << " " << str[ans[j] - '0'];
    }
    return 0;
}
