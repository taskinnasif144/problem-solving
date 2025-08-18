# https://leetcode.com/problems/evaluate-reverse-polish-notation/description/?envType=problem-list-v2&envId=stack

class Solution(object):
    def evalRPN(self, tokens):
        operation_stack = []
        operator = set(["+", "-", "*", "/"])
        

        for t in tokens:
           if t in operator:
               num1, num2 = 0, 0
               num2 = operation_stack[-1]
               operation_stack.pop()
               num1 = operation_stack[-1]
               operation_stack.pop()

               if t == "+":
                   operation_stack.append(num1 + num2)
               elif t == "-":
                   operation_stack.append(num1 - num2)
               elif t == "*":
                   operation_stack.append(num1 * num2)
               elif t == "/":
                    operation_stack.append(int(num1 / num2))
           else:
               operation_stack.append(int(t))

        return operation_stack[0]
       

print(Solution().evalRPN(
    tokens=["-78","-33","196","+","-19","-","115","+","-","-99","/","-18","8","*","-86","-","-","16","/","26","-14","-","-","47","-","101","-","163","*","143","-","0","-","171","+","120","*","-60","+","156","/","173","/","-24","11","+","21","/","*","44","*","180","70","-40","-","*","86","132","-84","+","*","-","38","/","/","21","28","/","+","83","/","-31","156","-","+","28","/","95","-","120","+","8","*","90","-","-94","*","-73","/","-62","/","93","*","196","-","-59","+","187","-","143","/","-79","-89","+","-"]
))