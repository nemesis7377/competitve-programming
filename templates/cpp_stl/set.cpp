// all operations O(logn)
// all elements unique
// sorted
s.insert(x) - // insert x
s.erase(x) - // erase x
s.find(x) - // find iterator to x is exists in the set, return s.end() otherwise
s.count(x) - // count of x
s.lower_bound(x) - // lower bound
s.upper_bound(x) - // upper bound
auto mn = *s.begin() // min element
auto mx = *s.rbegin() // max element
s.clear() // clears the set
int main(){
    set<int>s;
    s.insert(5);
    s.insert(10); // insertion 
    s.insert(3);
    s.insert(5); // duplicate — ignored
    s.erase(3); // erasing
    for (int x : s) { // iterating through the set
        cout << x << " ";
    }
}