SELECT b.unique_id, a.name
FROM EmployeeUNI b
RIGHT JOIN Employees a ON a.id = b.id;