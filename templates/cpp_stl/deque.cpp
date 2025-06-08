// insertion and accessing at both the ends
// all ops O(1)
// rotations possible
dq.push_front(x) - // inserts x at the front
dq.push_back(x) - // inserts x at the back
dq.pop_front() - // removes front element
dq.pop_back() - // removes back element
dq.front() - // returns the front element
dq.back() - // returns the back element
dq[i] - // returns element at ith index

int main(){
    deque<int>dq;
    dq.push_back(10); // insertion at back
    dq.push_back(20); 
    dq.push_front(5); // insertion at front
    dq.push_front(2);
    
    auto x = dq.front(); // 2
    auto y = dq.back(); // 20
    auto z = dq[1]+dq[2]; // 15
    dq.pop_back(); // removes 20
    dq.pop_front(); // removes 2
    
    // right rotation
    int last = dq.back();
    dq.pop_back();
    dq.push_front(last);

    // left rotation
    int first = dq.front();
    dq.pop_front();
    dq.push_back(first);
}