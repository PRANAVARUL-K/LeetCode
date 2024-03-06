WITH Temp AS (
    SELECT a.machine_id,(b.timestamp - a.timestamp) as total_time FROM Activity a,Activity b WHERE a.machine_id = b.machine_id AND a.process_id = b.process_id AND a.activity_type = 'start' and b.activity_type = 'end'
)
select machine_id,ROUND(avg(total_time),3) as processing_time from Temp GROUP BY machine_id;