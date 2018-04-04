Exporting archive signals to database
=====================================

This folder contains the source files for the demonstration project on exporting 
archive data to database.

The ACD block archives the simulated temperature signal whenever a significant
change occurs. The significant change can be absolute (TR=off, id=2) or relative 
to the temperature trend (TR=on, id=1). 

View the archived data in the Watch mode of *REXYGEN Studio* or in the *REXYGEN Diagnostics* 
diagnostic tool. Enable the data markers to compare the data intensity of 
the two approaches. The temperature is archived 

There are also alarms which are triggered when the temperature exceeds the upper 
(id=50) or lower (id=51) limit.

The data is stored in a RAM archive. From there it is exported to the database. 
You do not have to worry about the stability of the database connection. The RAM 
archive serves as a data buffer so all unexported data gets transferred once the 
connection with the database is renewed.

## Timing of the project ##
The algorithm runs each 100 milliseconds (0.1 s). See the EXEC function block,  
tick x ntick0 = 0.05 x 2 = 0.1

The archive is exported in 10 second intervals. See the DB function block,
tick x factor = 0.05 x 200 = 10 

## Prerequisities ##

- *REXYGEN Runtime Core* and DbDrv modules must be installed and running on the target device.
- ODBC connector for MySQL database is installed on the target device.  
- MySQL database server must be available and the credentials correctly defined 
in the **.rio* file. 
- Database *dbname* and tables called *alarms_archive* and *temperature_archive* 
are assumed.

  ```sql
  CREATE DATABASE dbname;
  USE dbname;
  CREATE USER dbuser IDENTIFIED BY "dbpassword";
  GRANT ALL PRIVILEGES ON dbname.* TO dbuser;
  FLUSH PRIVILEGES;
  CREATE TABLE alarms (
    `ID` int(11) NOT NULL AUTO_INCREMENT,
    `Time` datetime,
    `AlarmID` int(11),
    `Code` int(11),
    `Level` int(11),
    `Value` double,
    PRIMARY KEY (`ID`)
  );
  ```
  ```sql
  CREATE TABLE temperatures (
    `ID` int(11) NOT NULL AUTO_INCREMENT,
    `GroupID` int(11),
    `Time` datetime,
    `temperature` double,
    PRIMARY KEY (`ID`)
  );
  ```

## Running the example ##
- Edit manually the database access credentials in the **.rio* file.
- The **exec.mdl* file is the project main file.
- Open it with *REXYGEN Studio*, compile and download it to the target device.
- Observe data which is being added to the database tables.

## Documentation ##

- **Press F1 for help** on the selected function block in the *REXYGEN Studio*.
- [DbDrv - Database access driver](https://www.rexygen.com/doc/PDF/ENGLISH/DbDrv_ENG.pdf)
- [Function blocks of REXYGEN](https://www.rexygen.com/doc/PDF/ENGLISH/BRef_ENG.pdf)
- [REXYGEN Studio User Guide](https://www.rexygen.com/doc/PDF/ENGLISH/RexygenStudio_ENG.pdf)
- [Complete documentation of REXYGEN](http://www.rexygen.com/documentation-and-support)

## Additional information ##

- Visit the [REXYGEN webpage](http://www.rexygen.com) 
for more information about the example projects and developing advanced 
automation and control solutions using REXYGEN.