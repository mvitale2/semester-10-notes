Given relation:
Student_Courses(StudentID, StudentName, CourseID, CourseName, Instructor, Grades)
# Identify Functional Dependencies
StudentID → StudentName, Grades
CourseID → CourseName, Instructor, Grades

The StudentID is unique for each student, so knowing the ID means you can find the student's name. 

The CourseID is unique for each course, so you can find the CourseName and Instructor for that course. 
## Convert to 1NF
The column name `Grades` implies that it stores multiple values for one row. This data needs to be separated into its own table in order to convert to 1NF. 

Student_Courses(StudentID, StudentName, CourseID, CourseName, Instructor)
Student_Grades(StudentID, CourseID, AssignmentName, Grade)
## Convert to 2NF
CourseID does not depend on StudentID, so they should not be contained within the same table. CourseID and all of its dependencies are separated into their own table, and another table is created to bridge StudentID and CourseID. 

Students(StudentID, StudentName)
Courses(CourseID, CourseName, Instructor)
Enrollments(StudentID, CourseID)
Student_Grades(StudentID, CourseID, AssignmentName, Grade)
## Convert to 3NF
A transitive dependency is present since Instructor depends on CourseName; thus, a new table is created for instructors. 

Students(StudentID, StudentName)
Courses(CourseID, CourseName)
Instructors(CourseName, Instructor)
Enrollments(StudentID, CourseID)
Student_Grades(StudentID, CourseID, AssignmentName, Grade)
## Convert to BCNF
The instructors table needs to have a primary key.

Students(StudentID, StudentName)
Courses(CourseID, CourseName)
Instructors(CourseID, Instructor)
Enrollments(StudentID, CourseID)
Student_Grades(StudentID, CourseID, AssignmentName, Grade)
## Convert to 4NF
Here is an example of data using a new multi-valued dependency called Skills:

| StudentID | Skill       |
| --------- | ----------- |
| 0         | Coding      |
| 0         | Chess       |
| 1         | Drawing     |
| 1         | Mathematics |
| 2         | Chess       |
By keeping this new table separate from the others, multi-valued dependencies are eliminated. 

Students(StudentID, StudentName)
Skills(StudentID, Skill)
Courses(CourseID, CourseName)
Instructors(CourseID, Instructor)
Enrollments(StudentID, CourseID)
Student_Grades(StudentID, CourseID, AssignmentName, Grade)