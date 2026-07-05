// class Solution {
//   public:
//     void sortStack(stack<int> &st) {
//         stack<int> other;
        
//         while(!st.empty()){
//             int k=st.top();
//             st.pop();
//             int c=0;
            
//             while(!other.empty() && k >=other.top()){
//                 st.push(other.top());
//                 other.pop();
//                 c++;
//             }
            
//             other.push(k);
//             while(c>0){
//                 other.push(st.top());
//                 st.pop();
//                 c--;
//             }
//         }
        
//         while(!other.empty()){
//             st.push(other.top());
//             other.pop();
//         }
//     }
// };
