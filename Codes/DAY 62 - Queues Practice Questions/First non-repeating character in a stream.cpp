class Solution {
	public:
		string FirstNonRepeating(string A){
		  //  creating an unordered map to store the count of the alphabets
		    unordered_map<char, int> count;
		    queue<int> q;
		    string ans = "";
		    
		    for(int i = 0; i < A.length(); i++){
		        char ch = A[i];
		        
		      //  increase count of character
		      count[ch]++;
		      
		      //push to queue
		      q.push(ch);
		      
		      while(!q.empty()){
		          //repeated character
		          if(count[q.front()] > 1){
		              q.pop();
		          }
		          else{
		              ans.push_back(q.front());
		              break;
		          }
		      }
		      if(q.empty()){
		          ans.push_back('#');
		      }
		      
		    }
		    return ans;
		}

};