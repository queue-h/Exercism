public class LogLine {
    LogLevel level;
    String message;

    public LogLine(String logLine) {
        String code = logLine.substring(1, 4);
        this.message = logLine.substring(7);
        switch (code) {
            case "TRC":
                this.level = LogLevel.TRACE;
                break;
            case "DBG":
                this.level = LogLevel.DEBUG;
                break;
            case "INF":
                this.level = LogLevel.INFO;
                break;
            case "WRN":
                this.level = LogLevel.WARNING;
                break;
            case "ERR":
                this.level = LogLevel.ERROR;
                break;
            case "FTL":
                this.level = LogLevel.FATAL;
                break;
            default:
                this.level = LogLevel.UNKNOWN;
        }
    }

    public LogLevel getLogLevel() {
        return this.level;
    }

    public String getOutputForShortLog() {
        return String.format("%d:%s", this.level.getCode(), this.message);
    }
}
