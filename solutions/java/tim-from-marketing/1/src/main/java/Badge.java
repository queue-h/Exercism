

class Badge {
    public String print(Integer id, String name, String department) {
        String out = "";

        if (id != null) {
            out += String.format("[%d] - ", id);
        }

        out += String.format("%s", name);

        if (department != null) {
            out += String.format(" - %s", department.toUpperCase());
        } else {
            out += " - OWNER";
        }

        return out;
    }
}
