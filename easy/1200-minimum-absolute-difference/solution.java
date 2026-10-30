class Solution {
    public List<List<Integer>> minimumAbsDifference(int[] arr) {
        int min = Integer.MAX_VALUE;
       
        Arrays.sort(arr);
      List<List<Integer>> list = new ArrayList<List<Integer>>();
        for (int i =0; i<arr.length-1; i++){
            int diff = arr[i+1] - arr[i];
            if (diff < min){
                min = diff;
            }
        }

        for (int i =0; i<arr.length-1; i++){
           int diff = arr[i+1] - arr[i];
            if (diff == min){
                list.add(Arrays.asList(arr[i],arr[i+1]));
            } 
        }
        return list;


    }
}