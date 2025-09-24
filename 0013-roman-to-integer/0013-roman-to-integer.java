class Solution {
    public int romanToInt(String st) {
        Map<Character,Integer> s=new HashMap<>();
        s.put('I',1);
        s.put('V',5);
        s.put('X',10);
        s.put('L',50);
        s.put('C',100);
        s.put('D',500);
        s.put('M',1000);
        int sum=0;
        for(int i=0;i<st.length();i++){
            int cur=s.get(st.charAt(i));
            int next=(i+1<st.length())? s.get(st.charAt(i+1)):0;
            if(cur<next){
                sum-=cur;
            }else{
                sum+=cur;
            }
        }
        return sum;
    }

}