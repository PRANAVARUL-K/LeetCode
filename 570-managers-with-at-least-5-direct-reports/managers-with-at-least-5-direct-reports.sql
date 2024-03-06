WITH Temp as( 
    SELECT managerId,count(managerId) as Mcount from Employee where managerId is not null group by managerId
),
Temp1 as( 
    SELECT b.name from Temp a,Employee b where b.id = a.managerId and a.Mcount >= 5
)
select * from Temp1;