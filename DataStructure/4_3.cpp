//#include <iostream>
//#include <stack>
//#include <string>
//
//using namespace std;
//
//bool isOperator(char c)
//{
//	return c == '+' || c == '-' || c == '*' || c == '/';
//}
//
//bool isDigit(char c)
//{
//	return isdigit(c) || c == '.';
//}
//
////处理负数，得到标准表达式
//void getFormat(string& expr)
//{
//	for (size_t i = 0; i < expr.size(); i++)
//	{
//		if (expr[i] == '-' || expr[i] == '+') 				
//			if (i == 0)
//				expr.insert(0, 1, '0');
//			else if (expr[i - 1] == '(')
//				expr.insert(i, 1, '0');
//	}
//}
//
////优先级处理
//int getPriority(char c)
//{
//	if (c == '+' || c == '-')
//		return 1;
//	else if (c == '*' || c == '/')
//		return 2;
//	return 0;
//}
//
////计算当前两个操作数的结果
//void calcResult(stack<char>& operatorStack, stack<double>& operandStack)
//{
//	double operand2 = operandStack.top();
//	operandStack.pop();
//	double operand1 = operandStack.top();
//	operandStack.pop();
//	char op = operatorStack.top();
//	operatorStack.pop();
//	if (op == '+') {
//		operandStack.push(operand1 + operand2);
//	}
//	else if (op == '-') {
//		operandStack.push(operand1 - operand2);
//	}
//	else if (op == '*') {
//		operandStack.push(operand1 * operand2);
//	}
//	else if (op == '/') {
//		operandStack.push(operand1 / operand2);
//	}
//}
//
////求解表达式
//double Evaluate(string expr)
//{
//	stack<char> operatorStack;
//	stack<double> operandStack;
//	getFormat(expr);
//	for (size_t i = 0; i < expr.size(); i++)
//	{
//		if (isDigit(expr[i]))
//		{
//			string tmp = "";
//			do {
//				tmp += expr[i++];
//			} while (isDigit(expr[i]));
//
//			double operand = stod(tmp);
//			operandStack.push(operand);
//		}
//		if (isOperator(expr[i]))
//		{
//			while (!operatorStack.empty() && getPriority(expr[i]) <= getPriority(operatorStack.top()))
//				calcResult(operatorStack, operandStack);
//			operatorStack.push(expr[i]);
//		}
//		else if (expr[i] == '(')
//			operatorStack.push('(');
//		else if (expr[i] == ')')
//		{
//			while (operatorStack.top() != '(')
//				calcResult(operatorStack, operandStack);
//			operatorStack.pop(); 
//		}
//	}
//	while (!operatorStack.empty())
//	{
//		calcResult(operatorStack, operandStack);
//	}
//	return operandStack.top();
//}
//
//int main()
//{
//	cout << "Please enter arithmetic expression：(Enter \"quit\" or \"exit\" to exit )" << endl;
//	while (1)
//	{
//		string expr;
//		getline(cin, expr);
//		if (expr == "quit" || expr == "exit")
//			break;
//		double result = Evaluate(expr);
//		cout << result << endl;
//	}
//	return 0;
//}