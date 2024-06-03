SET 1
1.	select ticketno from reserves R,passenger P where R.pid=P.pid and name='Adam';
2.	select fare from route where fromloc='delhi' and toloc='hyderabad';
3.	select bname from bus where typ='yes' and typ1='yes';
4.	select bname,maxseats from route r1,bus b where r1.fromloc='hyderabad' and r1.toloc='bangalore' and r1.bid=b.bid;
5.	select name from reserves r,passenger p where r.pid=p.pid and r.ticketno=1731;
6.	select bname from route r1,bus b where r1.fromloc='hyderabad' and r1.toloc='bangalore' and r1.bid=b.bid;
7.	select bname from bus where typ='no';
8.	select typ,avg(maxseats) from bus group by typ;
9.	select departdate from route where fromloc='hyderabad' and toloc='mumbai';
10.	select mobileno,email from passenger p,reserves r where p.pid=r.pid and r.ticketno=1642;
SET 2
1.	select * from emp;
2.	update emp set ename='queen' where sal=5000;
3.	select ename from emp where comm>300;
4.	select * from emp where deptno=20 and sal>2000;
5.	select deptno,min(sal),sum(sal),avg(sal) from emp group by deptno;
6.	select * from emp where deptno in(20,5);
7.	select * from emp where ename like '%t';
8.	select * from emp where ename like 's%';
9.	select * from emp where ename like '__e%';
10.	select ename from emp where comm is null;
SET 3
1.	create table student(rollno number(6),name varchar2(20),branch varchar(20));
2.	desc student;
3.	insert into student values(6671,'manvitha','aiml');
insert into student values(6672,'ananya','aiml');
4.	select * from student;
5.	alter table student add(class varchar(20));
6.	delete from student where rollno=6677;
7.	alter table student drop column branch;
8.	alter table student modify(rollno number(8));
9.	delete from student;
10.	select ascii('A'),chr(65),concat('abc','def'),instr('abaabcab','ab',1,2),substr('abcd',2) from dual;
select length('abcd'),lengthb('abcde'),lower('ABCD'),lpad('abcd',7,'e'),ltrim('abcd','a') from dual;
select replace('abcd','a','ef'),rtrim('abcd','d'),rpad('abcd',7,'e'),to_char(123) from dual;
select substr('abcdef',2,3),translate('abcdef','bc','ef'),upper('abcd'),initcap('abcd') from dual;
11.	select add_months(current_date,5),current_date,current_timestamp(2),to_date('10-10-2011','dd-mm-yy'),months_between('10-oct-2011','10-oct-2010'),EXTRACT(year from current_date),to_char(current_date,'mon dd yyyy') from dual;

SET 4
1.	select upper('oracle') from dual;
2.	create user user_6671 identified by user_6671;
3.	select initcap('oracle') from dual;
4.	select * from emp where ename like 'la%';
5.	select * from emp where ename like 'la%';
6.	select * from emp where mgr is not null;
7.	select * from emp where job not in('manager','salesman');
8.	select sqrt(64) from dual;
9.	select max(sal)-min(sal) from emp;
10.	select count(distinct job) from emp;
      SET 5
1.	select round(35.846,2) from dual;
2.	select trunc(75.50,2) from dual;
3.	select lower('ORACLE') from dual;
4.	select * from emp where ename like 'la%';
5.	select * from emp where ename like 'la%';
6.	select * from emp order by sal;
7.	select * from emp where ename like '__o%';
8.	select empno,ename,sal from emp where sal not between 1500 and 2000;
9.	select * from emp where comm is null;
10.	select deptno,avg(sal) from emp group by deptno;
   SET 6
1.	select * from emp;
2.	select * from emp where sal<3000;
3.	select * from emp where job='manager' or deptno=10;
4.	select * from emp where sal>2000 and deptno=20;
5.	select * from emp order by sal;
6.	select * from emp where sal<2500 order by sal desc;
7.	select * from emp where job not in('manager','salesman');
8.	select empno,ename,sal from emp where sal not between 1500 and 2000;
9.	select max(sal)-min(sal) from emp;
10.	select ename from emp where ename not in('smith','blake','scott');
SET 7
1.	create table Persons(pid number(1),firstname varchar2(20) default 'Ola',lastname varchar2(20),address varchar2(20),city varchar2 (20));
2.	alter table persons add unique(lastname);
3.	alter table persons add primary key(pid);
4.	create table orders(oid number(1) primary key,orderno number(6),pid number(2),foreign key(pid) references persons(pid));
5.	delete from persons where pid=3;
6.	select abs(4.55),ceil(4.55),floor(4.55), mod(5,4),power(2,3),sign(-10), sign(10), sqrt(9),round(4.333,2),trunc(4.333,2) from dual;



