public class TestItem {
    public static void main(String[] args) {
        Item item1 = new Item("A124", 10, 10.2);
        Item item2 = new Item("B555", 5, 1.59);

        System.out.println(item1.detailsString());
        System.out.println();
        System.out.println(item2.detailsString());
        System.out.println();

        int result = item1.compareTo(item2);
        System.out.println("Result Comparison : " + result);
    }
}
