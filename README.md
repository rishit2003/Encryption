# Encryption
we are developing a new way to store passwords in a secure manner!

our language of choice is c++, because of the flexibility which allows us to manipulate the input strings.
our method of encryption will be done by converting the string input into ascii values in order to read through the character array
from the character array we will be able to insert special characters between each given char value using ascii and subsequently converting the ascii 
values into their corresponding ascii values via recursion. This method encorporates multiple levels of security by implementing 2 layers of encrytption.

ideally we would also add a mobile, web interface, or any sort of gui, in order to increase usability and make users happy.

main implementations :
incrpytion method
decryption method
password strength evaluation based on typical bad password habits :
this would display the type of vulnerbilities a user might have for a given password, so they would know how to improve it 
while also not forcing the user to change it 


User guide:

user will be prompted to create password, based on a series of parameters.
should the user fail to create a secure password they will be notified about the associated risks with a weak password.
once the password has been deemed secure the user will be notified that they have met ideal security standards.
