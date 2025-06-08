// works on LIFO
// all ops are O(1)
s.push(x) - // place x on the top of the stack
s.pop() - // remove top element
s.top() - // access top element
int main(){
    stack<int>s;
    s.push(10);
    s.push(20); //insertion
    s.push(40);
    s.push(30);
    auto x = s.top(); // 30
    s.pop(); // removes 30 
    x = s.top(); // 40
    while(!s.empty()){
        cout << s.top() << ' '; // prints top element
        s.pop(); // removes top element
    }
    return 0;
}