import java.util.HashMap;
import java.util.Map;

public class DialingCodes {

    Map<Integer, String> DialingCodes = new HashMap<>();

    public Map<Integer, String> getCodes() {
       return DialingCodes;
    }

    public void setDialingCode(Integer code, String country) {
        if (DialingCodes.containsKey(code)) {
            DialingCodes.replace(code, country);
        } else {
            DialingCodes.put(code, country);
        }
    }

    public String getCountry(Integer code) {
        return DialingCodes.get(code);
    }

    public void addNewDialingCode(Integer code, String country) {
        if (DialingCodes.containsKey(code) || DialingCodes.containsValue(country)) {
            return;
        } else {
            DialingCodes.put(code, country);
        }
    }

    public Integer findDialingCode(String country) {
        for (Map.Entry<Integer, String> entry : DialingCodes.entrySet()) {
            if (entry.getValue().equals(country)) {
                return entry.getKey();
            }
        }
        return null;
    }

    public void updateCountryDialingCode(Integer code, String country) {
        if (DialingCodes.containsValue(country)) {
            // remove old one
            int oldCode = findDialingCode(country);
            DialingCodes.remove(oldCode, country);

            // add new one
            DialingCodes.put(code, country);
        }
    }
}
