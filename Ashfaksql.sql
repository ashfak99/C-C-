use ashfak;
create table student(
id int primary key,
roll_no INT NOT NULL,
name varchar(50),
course varchar(50),
father_name char(50),
address char(150)
);
drop table student;
insert into student values('1','801','Ashfak Alam','Diploma','Ali Akbar','Gopalganj, Bihar');
insert into student values('2','802','Asrar Alam','Diploma','Ali Akbar','Gopalganj, Bihar');
insert into student values('3','803','Atif Alam','K.G','Parwez Alam','Gopalganj, Bihar');
insert into student values('4','804','Imteyaz Ali','B.tech','Ashfak Alam','Gopalganj, Bihar');
insert into student values('5','805','Farhin Ashraf','Diploma','Ashraf','Siwan, Bihar');
insert into student values('6','806','Mohammad Kasim','Diploma','Nazim','Gopalganj, Bihar');
insert into student values('7','807','Alam','D.Ed','Ali','Gopalganj, Bihar');
insert into student values('8','808','Atif','M.tech','Akbar','Delhi');
insert into student values('9','809','Imteyaz Gandhi','Diploma','Munna Gandhi','Uttar Pradesh');
insert into student values('10','810','Rahul','BBA','Sanjay','Haryana');
insert into student values('11','811','Narendra Modi','ITUS','Amit Shah','Gujrat');
insert into student values('12','812','Amit Shah','Pagal','Adityanath Yogi','Rajsthan');
insert into student values('13','813','Adityanath Yogi','Dumb','Narendra Modi','Mandir');
insert into student values('14','814','Tej Pratap Yadav','9th Fail','Lalu Yadav','Gopalganj, Bihar');
insert into student values('15','815','Tej Shawi Yadav','9th Fail','Lalu Yadav','Gopalganj, Bihar');
insert into student values('16','816','Diploma','9th Fail','B. tech','Kerala');
delete from student where id=9;
select * from student;
Alter table student add Email varchar(50);
insert into student values('18','818','Al','Phd','Alam','Bhopal','ashfak@gmail.com');
update student set email=('alam@gmail.com') where id=1;