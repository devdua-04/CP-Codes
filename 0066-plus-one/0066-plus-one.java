class Solution {
    public int[] plusOne(int[] digits) {
        int c=1;
        for(int i=digits.length-1;i>=0;i--){
            c=(digits[i]+c)/10;
            digits[i]=(digits[i]+1)%10;
            if(c==0) break;
        }
        System.out.println(c);
        if(c!=0){
            int[] b=new int[digits.length+1];
            b[0]=c;
            for(int i=0;i<digits.length;i++){
                b[i+1]=digits[i];
            }
            return b;
        }
        return digits;
    }
}