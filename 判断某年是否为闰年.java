//判断某年是不是闰年
public class Test {
    public  static boolean isLeapYear(int year) {
        if(year%4==0&&year%100!=0||year%400==0){
           System.out.println("是闰年");
            return true;
        }
        System.out.println("不是闰年");
        return false;
    }
    public static void main(String[] args){

        isLeapYear(1000);
    }

}