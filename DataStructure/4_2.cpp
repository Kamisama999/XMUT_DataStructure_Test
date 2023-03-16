//#include <iostream>
//#include <stack>
//
//using namespace std;
//
//bool isValid(string s) {
//    stack<char> st;
//    for (char ch : s) {
//        if (ch == '(')
//            st.push(')');
//        else if (ch == '[')
//            st.push(']');
//        else if (ch == '{')
//            st.push('}');
//        else if (ch == ')' || ch == ']' || ch == '}')
//            if (st.empty() || ch != st.top())
//                return false;
//            else
//                st.pop();
//    }
//    return st.empty();
//}
//
//int main()
//{
//    string s;
//    cout << "Please enter an arithmetic expression:" << endl;
//    cin >> s;
//    if (isValid(s))
//        cout << "This is valid!!!" << endl;
//    else
//       cout << "This isn't valid!!!" << endl;
//	return 0;
//}