

import java.util.PriorityQueue;

class Student implements Comparable<Student> {
    int id;
    String name;
    double cgpa;

    public int compareTo(Student o) {
        int marksCompare = Double.compare(cgpa, o.cgpa);
        if (marksCompare == 0) {
            int stringCompare = name.compareTo(o.name);
            if (stringCompare == 0)
                return Integer.compare(id, o.id);
            else
                return stringCompare;
        } else
            return -marksCompare;

    }

    public String getName() {
        // TODO Auto-generated method stub
        return name;
    }

}

class Priorities {

    List<Student> getStudents(List<String> events) {
        PriorityQueue<Student> pq = new PriorityQueue<>();
        List<Student> list = new ArrayList<>();
//        int serve = 0;
        for (String event : events) {
            String tokens[] = event.split(" ");

            if (tokens[0].equals("SERVED")) {
                pq.poll();
            } else {
                Student s = new Student();
                s.name = tokens[1];
                s.cgpa = Double.parseDouble(tokens[2]);
                s.id = Integer.parseInt(tokens[3]);
                pq.add(s);
            }

        }
        while(pq.size()>0)
            list.add(pq.poll());
        return list;

    }

}

