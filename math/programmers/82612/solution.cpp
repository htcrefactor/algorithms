// https://programmers.co.kr/learn/courses/30/lessons/82612

using namespace std;

long long solution(int price, int money, int count)
{
    long long multiplier = count * (count + 1) / 2;
    
    long long required = price * multiplier;
    
    if (required <= money) return 0;
    else return (required - money);
}
