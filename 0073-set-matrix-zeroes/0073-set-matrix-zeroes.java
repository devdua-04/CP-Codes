class Solution {
    public void setZeroes(int[][] matrix) {
        List<int[]> zeros = new ArrayList<>();

        int rows = matrix.length;
        int cols = matrix[0].length;

        // Step 1: Record all zero positions
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (matrix[i][j] == 0) {
                    zeros.add(new int[]{i, j});
                }
            }
        }

        // Step 2: Set corresponding rows and columns to zero
        for (int[] pos : zeros) {
            int r = pos[0];
            int c = pos[1];

            for (int i = 0; i < cols; i++) matrix[r][i] = 0;  // Row
            for (int i = 0; i < rows; i++) matrix[i][c] = 0;  // Column
        }
    }
}