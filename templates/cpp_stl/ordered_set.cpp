#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

template<typename T>
using ordered_set = tree<
    T,
    null_type,
    less<T>,
    rb_tree_tag,
    tree_order_statistics_node_update>;

// all other functions of sets are allowed
// all ops are O(logn)
s.find_by_order(k) - // returns iterator to kth smallest element
s.order_of_key(x) - // returns number of elements < x
int main(){
    ordered_set<int>s;
    s.insert(10);
    s.insert(20); // insertion
    s.insert(30);

    auto a = *s.find_by_order(0) << endl; // 10 (0th smallest)
    auto b = *s.find_by_order(2) << endl; // 30 (2nd smallest)

    int x = s.order_of_key(25) << endl;  // 2 elements < 25 (i.e., 10, 20)
    int y = s.order_of_key(30) << endl;  // 2 elements < 30

    return 0;
}