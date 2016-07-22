# fckpass
Small program for pesky passwords
#Why?
Because more and more services (like internet banking) started authenticating users by asking for certain letter in password. For more conveinience I designed this app.
#Usage
Program will output each character of input string. 
`fckpass "password"`
For showing particual letters you can use 
`fckpass "password" 3 8`
#Security 
I recommend adding fckpass to HISTIGNORE in .bashrc or .zschrc, so nobody could lookup your passwords.