// You are given an array time where time[i] denotes the time taken by the ith bus to complete one trip.
// Each bus can make multiple trips successively; that is, the next trip can start immediately after completing the current trip. Also, each bus operates independently; that is, the trips of one bus do not influence the trips of any other bus.
// You are also given an integer totalTrips, which denotes the number of trips all buses should make in total. Return the minimum time required for all buses to complete at least totalTrips trips

// class Solution {
// public:
// bool check (long long mid, vector<int>& time, int totalTrips ){
//     int n = time.size();
//     long long trips =0;    // mid means hours here
//     for(int i=0;i<n;i++){
//         trips+=mid/(long long)time[i];
//        }
//      if(trips<(long long)totalTrips) return false;
//      else return true;
// }
//     long long minimumTime(vector<int>& time, int totalTrips) {
//        int n = time.size();
//        long long lo = 1;
//       int mx = -1;
//        for(int i=0;i<n;i++){
//         mx = max(mx,time[i]);
//        }
//        long long hi =(long long) mx*(long long)totalTrips ; // have to keep a big no.
//        long long ans = -1;
//        while(lo<=hi){
//         long long mid = lo +(hi-lo)/2;
//         if(check(mid,time,totalTrips)== true){
//             ans = mid;
//             hi = mid-1;
//         }
//         else lo = mid+1;
//        } 
//        return ans;
//     }
// };