Names: Piper O'Connell, Katherine Jesse
WPI username: proconnell, kcjesse

Author: 	 Piper O’Connell and Katherine Jesse			 
Date:		 1/19/2023	 
Version:     1			 
Project ID:	 Project 1		 
CS Class:	CS 3013		 
Programming Language:	C	 
OS/Hardware dependencies: Ubuntu 22.04  
				 
Problem Description:	            create programs that recreate the functionality of the cat and grep bash commands.	 
 
Overall Design:	                  wcat – iterate through each character in the files and print them out individually. Stop when end-of-file indicator is reached and                                     move onto the next file. 
                                  wgrep – iterate through each line of each file using the getline() function. Check if the desired string is contained in the current                                   line using the strstr() function. If the desired string is in the line, print out the line. Stop when end-of-file indicator is                                         reached and then move onto the nect file.   
	 		 
 
Program Assumptions 
and Restrictions:	 	              Arguments passed to wcat must be file paths. First argument of wgrep must be a string. 
 
Interfaces: 			 
	User			                      User gives in the arguments.  
	File/D-B		                    Files are searched for or searched through. 	  
	Program/Module                  None. 
 
Implementation Details:  
  Data			                      wcat takes in an int and a char pointer. wgrep takes in an int and a char pointer as well. 	 
	Variables	                      The key variables in wgrep include “search” which is the string we are searching the file for, and “f” which is the file being                                         searched.  
	Algorithm		                    The while loop in wcat goes through each character and prints each out individually. The for loop in wgrep goes into the file, the                                     while loop in this for loop checks to see if the string that we are looking for can be found. wgrep also checks for the cases of the                                   file argument is not given using a while loop.  
 
How to build the program:         gcc –o wcat wcat.c -Wall –Werror  
                                  gcc –o wgrep wgrep.c -Wall -Werror 
 
Program Source:	                  wcat can be found in wcat.c and wgrep will be found in wgrep.c. 		 
 
Additional Files:	                None.  
 
Results:	                        wcat will print out the ascii contents of a file onto the console. Wgrep will only print out the	 
 
Test Procedures:	                Tests were done on wcat to show it can: read the file and print that current files content, it can take in multiple files, and vary                                     the strings that are put in. Tests were done on wgrep to show it can: find one line out of a few from a file, when the file does not                                   exist, too few command line arguments, long search term, long text lines, long files with fewer matches, more than one input file,                                     and many files on the command line with many matches.   

 
Test Data:		                    No specific data was recorded other than the commands passing the tests.  
 
Performance Evaluation:	          None. 	 
 Time/Space 
 User Interface 
 
References:                       None 

