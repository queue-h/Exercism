import java.time.LocalDate;
import java.time.LocalDateTime;
import java.time.format.DateTimeFormatter;

class AppointmentScheduler {
    public LocalDateTime schedule(String appointmentDateDescription) {
        DateTimeFormatter formatter = DateTimeFormatter.ofPattern("MM/dd/yyyy HH:mm:ss");
        return LocalDateTime.parse(appointmentDateDescription, formatter);
    }

    public boolean hasPassed(LocalDateTime appointmentDate) {
        return LocalDateTime.now().isAfter(appointmentDate);
    }

    public boolean isAfternoonAppointment(LocalDateTime appointmentDate) {
        return appointmentDate.getHour() >= 12 && appointmentDate.getHour() < 18;

    }

    public String getDescription(LocalDateTime appointmentDate) {
        int hours = appointmentDate.getHour();
        boolean amFlag = true;
        if (appointmentDate.getHour() > 12) {
            hours = appointmentDate.getHour() - 12;
            amFlag = false;
        }

        String dayString = appointmentDate.getDayOfWeek().toString();
        dayString = toTitleCase(dayString);

        String month = appointmentDate.getMonth().toString();
        month = toTitleCase(month);

        int day = appointmentDate.getDayOfMonth();
        int year = appointmentDate.getYear();
        int minute = appointmentDate.getMinute();

        String date = String.format("%s, %s %d, %d, at %d:%02d", dayString, month, day, year, hours, minute);

        if (amFlag) {
            date += " AM";
        } else {
            date += " PM";
        }

        return "You have an appointment on " + date + ".";
    }

    public LocalDate getAnniversaryDate() {
        int year = LocalDate.now().getYear();
        return LocalDate.of(year, 9, 15);
    }

    public String toTitleCase(String str) {
        str = str.toLowerCase();
        char[] arr = str.toCharArray();
        arr[0] = Character.toUpperCase(arr[0]);
        return String.valueOf(arr);
    }
}
