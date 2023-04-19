public class Matrix {
    private int rows;
    private int cols;
    private int arr[][];

    public Matrix(int rows, int cols) {
        this.rows = rows;
        this.cols = cols;
        this.arr = new int[rows][cols];
    }
}
