#include <bits/stdc++.h>
#include <memory>

using namespace std;

int main()
{
    std::shared_ptr<int> sp = std::make_shared<int>(13);
    weak_ptr<int> wp = sp;
    return 0;
}