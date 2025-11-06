public class SalaryCalculator {
    public double salaryMultiplier(int daysSkipped) {
        boolean expr = daysSkipped < 5;
        return expr ? 1 : 0.85;
    }

    public int bonusMultiplier(int productsSold) {
        boolean expr = productsSold < 20;
        return expr ? 10 : 13;
    }

    public double bonusForProductsSold(int productsSold) {
        return productsSold * bonusMultiplier(productsSold);
    }

    public double finalSalary(int daysSkipped, int productsSold) {
        double baseSalary = 1000 * salaryMultiplier(daysSkipped);
        double finalSalary = baseSalary + bonusForProductsSold(productsSold);

        boolean expr = finalSalary < 2000;
        return expr ? finalSalary : 2000;
    } 
}
