# Write your MySQL query statement below
select u.name, IFNULL(Sum(r.distance),0)
   as travelled_distance
From Users u left join Rides r
On u.id=r.user_id
group by u.id,u.name
order by travelled_distance desc,u.name;