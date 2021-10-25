/***  KNOWLEDGE IS POWER  ***/

class MinStack {
public:
  stack<int>s ;
  int minElement = INT_MAX ;
  void push(int val) 
  {
    if(minElement >= val)
    {
      s.push(minElement) ;
      minElement = val ; 
    }
    s.push(val) ;
  }

  void pop() 
  {
    if(minElement == s.top())
    {
      s.pop();
      minElement = s.top();
    }
    s.pop() ;
  }

  int top() 
  {
    return s.top();
  }

  int getMin() 
  {
    return minElement;
  }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
