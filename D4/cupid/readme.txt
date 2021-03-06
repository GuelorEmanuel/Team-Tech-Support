Project: cuPID

Overview:

The Carleton University Project Partner Identifier(cuPID) is designed to 
help professors to match students for group projects.

How to use:

Installation:

1. Download program .tar file, untar.
2. Open QT Creator and open the cuPID.pro project.
3. Build project.
4. Copy mydb.sqlite into the build directory.
5. Run binary in the build directory.

Usage:
1. At the start of the program user sees the login window. There is two choices:
    1.1 Login using existing profile. Right now the program contains several admin
    accounts and over 30 students. Here you can see some login examples, 
    that can be used to log into the system.

    1.2 List of Users
    
    Admins:
		
        jeanlucpicard
        samthegreat
        sarek
        jameskirk
        guinan
        tommulcair
        admin

	Student:
	
        darthbieber
        wesleycrusher
        geordilaforge
        data
        beverleycrusher
        worf
        deannatroi
        reginaldbarclay
        rolaren
        willriker
        roxannetroi
        spock
        benjaminsisko
        kathrynjaneway
        summerglau
        tashayar
        julianbashir
        milesobrien
        keikoobrien
        thedoctor
        thetwelfthdoctor
        tuvok
        jakesisko
        sevenofnine
        hugh
        palpatine
        taylorswift
        uhura
        borgqueen
        captaincrunch
        landocalrissian

1.2 Create New Account

User can select one of two choices given to him/her in appeared window: create
new administrator account or create new student account.

1.2.1 Create Admin Account

First, press Administrator button.
You will see another dialog window opened. It has two fields:
    1. Full Name
    2. Desired Username

In order to create account, user has to fill in both fields. Username which he/she
entered will be the username you will use to log into the program.

Then, press submit and close create account window.

1.2.2 Create Student Account

Creation of student account consist of two parts: first, you create a user account
, then you profile.

The first dialog window you see after selecting create student account option is
create user window. Here, you have to fill in three fields:
    1. Your first name
    2. Your last name
    3. Your student ID

Your username will be created by combining your first and last name in a form:
    firstnamelastname( for example Han Solo -> hansolo).

After user have entered information, he/she can press submit. 

User will be transfered to create profile window. Create Profile consist of 28
question user have to answer. Those answers will be used later for matching
student into groups. 

For every question, user have to select three answers: the "You" answer is the answer that describes user the best. The "Partner Max Range" is the value user would like to see in his partners at most. The "Partner Min Range" is the value 
user would like to see in his partners at least.

The last page is the page with 28th question. By pressing next on this page you
submit the settings for your profile.


2 User accounts

2.1 Administrator account

After user logged into his/her account, he/she will see new window which 
represents their account and the features they can use.

2.1.1 Create Project

When user presses Create Project button, he/she will see new dialog window.

The field "Project Name" is the name of the project user wants to create.
The field "Max Team Size" is the max number of students user wants to be in one 
group.
The field "Min Team Size" is the min number of students user wants to be in
one group.
The "Project Description" field is the place where user can describe his/her
project and specify what he/she expects from students.

Every field has to be filled.

At the end, press Create. If you don't want to create a project and/or
don't want to save entered information, press Cancel.

2.1.2 Edit Project

Administrator user can see a combo box at his profile, saying "Select a project".
If user wants to modify one of the projects, he/she should select one of the listed projects and press Edit button.

User will see opened dialog window with editable information of a project
he/she have selected. If user doesn't want to modify the project, he/she can
press Cancel button. If user want to modify project information, he/she presses
Update button.

2.1.3 Run algorithm
Once Administrator has selected a project on the combo box at his profile, admin can elect to run The algorithm . If admin select to run the algorithm a dialog box will show of the results. Admin can elect to show a summary of the matched group or a detailed breakdown of the matched group.

2.1.4 Sign Out

If user wants to sign out from the account, he/she can press Sign Out
button at the top right corner of their profile.


2.2 Student account

Similar to Administrator account, student user will be transfered to a new
window where he/she can see her profile and available options.

2.2.1 Edit profile

If Student decided that the information in his/her profile has to be changed, 
user can select Edit profile option by pressing Edit Profile button.

User will see new window which is basically the same window he/she have seen when
created an account. User can change any information he wants and his/her profile
will be updated ones he/she presses Next button on the last page. 

If user wants to return to the previous page, he/she can find previous button at the bottom right corner.

Left from previous button, there is an exit button which user can press if he/she wants to quit without modifying profile.  

2.2.2 Join Project

Student can see all of the projects he/she haven't joined in a combo box
saying "Select a project to join". When one of the project chosen, 
user can press Open Project button located on the right from combo box.

By pressing, user will see new dialog window showing project page and
description.

2.2.3 List of joined project

In a field on the left user can see the list of projects he/she joined before.

2.2.4 Sign out

If user wants to sign out, he/she can press Sign Out button on the top right 
corner.   

