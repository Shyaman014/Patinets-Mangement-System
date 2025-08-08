# 🏥 Patients Management System (C++)

A simple **C++ menu-driven program** to manage a clinic's patient waiting list.  
Supports **Adding**, **Displaying**, **Deleting**, **Searching**, and **Updating** patient IDs using arrays.

---

## 🚀 Features
✅ Add new patient (Insert at End)  
✅ Call next patient (Delete from Front)  
✅ Cancel appointment (Delete by ID)  
✅ Display waiting list  
✅ Search patient by ID  
✅ Update patient ID  

==== Clinic Waiting List System ====
1. Add new patient (Insert at End)
2. Call next patient (Delete from Front)
3. Cancel appointment (Delete by ID)
4. Display waiting list
5. Search patient by ID
6. Update# 🏥 Patients Management System (C++)

A simple **C++ menu-driven program** to manage a clinic's patient waiting list using arrays.

## 🚀 Features
- Add new patient (Insert at End)
- Call next patient (Delete from Front)
- Cancel appointment (Delete by ID)
- Display waiting list
- Search patient by ID
- Update patient ID

## 💻 How to Run
```bash
g++ main.cpp -o clinic
./clinic
```

## 📋 Menu
```
==== Clinic Waiting List System ====
1. Add new patient (Insert at End)
2. Call next patient (Delete from Front)
3. Cancel appointment (Delete by ID)
4. Display waiting list
5. Search patient by ID
6. Update patient ID
0. Exit
```

## 🖥 Sample Output
```
==== Clinic Waiting List System ====
Enter your choice: 1
Enter patient ID: 101
Patient added to the waiting list.

==== Clinic Waiting List System ====
Enter your choice: 1
Enter patient ID: 102
Patient added to the waiting list.

==== Clinic Waiting List System ====
Enter your choice: 4
Current Waiting List: 101 102

==== Clinic Waiting List System ====
Enter your choice: 5
Enter patient ID to search: 102
Patient found at position 2.

==== Clinic Waiting List System ====
Enter your choice: 6
Enter old ID to update: 101
Enter new ID: 201
Patient ID updated.

==== Clinic Waiting List System ====
Enter your choice: 4
Current Waiting List: 201 102

==== Clinic Waiting List System ====
Enter your choice: 2
Calling patient with ID: 201

==== Clinic Waiting List System ====
Enter your choice: 4
Current Waiting List: 102

==== Clinic Waiting List System ====
Enter your choice: 3
Enter patient ID to cancel: 102
Appointment cancelled.

==== Clinic Waiting List System ====
Enter your choice: 4
Waiting list is empty.

==== Clinic Waiting List System ====
Enter your choice: 0
Exiting system.
```

