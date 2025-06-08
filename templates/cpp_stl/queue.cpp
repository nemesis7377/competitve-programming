// works on FIFO
// all ops are O(1)
q.push(x) - // add element to the back
q.pop() - // removes front element
q.front() - // returns front element
q.back() - // returns back element
int main(){
    queue<int>q;
    q.push(20);
    q.push(10); // insertion
    q.push(40);
    q.push(30);
    auto x = q.front() // 20
    auto y = q.back() // 30
    q.pop() // removes front element (20)
    x = q.front() // 10
    while(!q.empty()){
        cout << q.front() << ' '; // prints the front element
        q.pop(); // removes the front element
    }
    return 0;
}