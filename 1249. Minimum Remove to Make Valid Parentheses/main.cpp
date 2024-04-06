#include <iostream>
#include <stack>

using namespace std;

int main(){
    string data;
    cin >> data;
    int n = data.size();
    stack <int> s;
    for (int i = 0; i < n; ++i){
        if (data[i] >= 'a' && data[i] <= 'z'){
            continue;
        }
        if (data[i] == '('){
            s.push(i);
        }
        else{
            if (!s.empty()){
                s.pop();
            }
            else{
                data[i] = '#';
            }
        }
    }

    while (!s.empty()){
        data[s.top()] = '#';
        s.pop();
    }

    string ans = "";
    for (int i = 0; i < n; ++i){
        if (data[i] != '#'){
            ans.push_back(data[i]);
        }
    }     

    cout << ans;
    
    return 0;
}