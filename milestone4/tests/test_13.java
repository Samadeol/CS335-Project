public class Matrix {
    int rows;
    private int cols;
    private int arr[][];

    public Matrix() {
        int rows = 3;
        // this.rows = rows;
        // this.cols = cols;
        // this.arr = new int[rows][cols];
    }

    // public boolean isEqualTo(Matrix other) {
    //     if (this.rows != other.rows || this.cols != other.cols) {
    //         return false;
    //     }
    //     for (int i=0; i<this.rows; i++) {
    //         for (int j=0; j<this.cols; j++) {
    //             if (this.arr[i][j] != other.arr[i][j]) {
    //                 return false;
    //             }
    //         }
    //     }
    //     return true;
    // }

    // public static void main(String[] args) {
    //     Matrix m1 = new Matrix(3, 3);
    //     Matrix m2 = new Matrix(4, 4);
    //     boolean isEqual = m1.isEqualTo(m2);
    //     System.out.println(isEqual);
    // }
}