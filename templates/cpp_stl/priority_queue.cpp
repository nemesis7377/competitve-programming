// returns the top element in O(1)
// pop and push are O(logn) each
pq.push(x) - // insert x
pq.top() - // returns the top element
pq.pop() - // erase top element
int main(){
    priority_queue<int>pq; // max element top
    priority_queue<int, vector<int>, greater<int>> pq; // min element top
    pq.push(10); 
    pq.push(5); // insertion
    pq.push(20);
    pq.push(30);
    pq.pop(); // erases top element (30) or (5) depending on the type of pq

    while (!pq.empty()) { // iterating through the queue
        cout << pq.top() << " "; // prints top element
        pq.pop(); // removes the highest element 
    }
    return 0;
}