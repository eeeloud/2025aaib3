/// ���ݬݭn���n�g
/// week08-6.cpp
/// FB���θ�, �ƷP�����, ���ӳ̷s�v��, �s 6714 �d���C�J�`��(�Ʀr�¬})
/// Input: 4���(���୫��)
/// �̤j-�̤p
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    cout << "�п�J4���(�Ʀr���୫��):";
    int n;
    cin >> n;
    for(int i=0; i<7; i++)
    {
        vector<int>a;
        for(int i=0; i<4; i++){
            a.push_back(n%10);
            n = n/10;
        }
        sort(a.begin(), a.end());
        int M = a[3]*1000+a[2]*100+a[1]*10+a[0];
        int m = a[0]*1000+a[1]*100+a[2]*10+a[3];
        n = M - m;
        printf("%d-%d=%d\n", M, m, n);
    }
}
