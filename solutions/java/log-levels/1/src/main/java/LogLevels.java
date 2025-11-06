import java.util.*;
import java.util.regex.Pattern;
import java.util.regex.Matcher;

public class LogLevels {
    
    public static String message(String logLine) {
        int startIndex = logLine.indexOf(" ") + 1;
        return logLine.substring(startIndex).trim();
    }

    public static String logLevel(String logLine) {
        int endIndex = logLine.indexOf("]");
        return logLine.substring(1, endIndex).toLowerCase();
    }

    public static String reformat(String logLine) {
        return String.format("%s (%s)", message(logLine), logLevel(logLine));
    }
}
