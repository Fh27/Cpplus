class Solution {
    public boolean judgeSquareSum(int c) {
        int high= (int) Math.sqrt(c);
        HashSet<Integer> hs=new HashSet<>();
            for(int i=0;i<=high;i++){
                hs.add(i*i);
            }
            for(int i=0;i<=high;i++){
                int want=c-(i*i);
                if(hs.contains(want)){
                    return true;
                }
            }
            return false;
    }
}
