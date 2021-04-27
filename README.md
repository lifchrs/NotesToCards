# NotesToCards

## What the program does
This program converts notes to flashcards by taking an input of notes and outputting a text file that can be imported into Anki. This program currently *only* supports the basic card type on Anki. Essentially, if your notes are written in a bullet-point format, with each bullet point being a question, the program converts the notes into flashcards such that each question is linked to the answer, along with all of the other notes you have for the topic.

It's confusing in words, I know. 

Here are some pictures.

![image](https://user-images.githubusercontent.com/68109717/116247508-8354aa00-a79d-11eb-98ed-355f5340a828.png)

This is an example note.

Note the following:

1. The answer to all of the bullet-point questions is written in the **first line**
2. Each question is on a different line
3. There is a ~ at the end of the note. This is necessary, and its purpose will be explained below.

What this produces on Anki:

![image](https://user-images.githubusercontent.com/68109717/116249160-1a6e3180-a79f-11eb-8ead-6c234d87a0c1.png)
The flashcard before being revealed

![image](https://user-images.githubusercontent.com/68109717/116249214-28bc4d80-a79f-11eb-8a38-80bbb64e9f8d.png)
The flashcard after being revealed. Note that you get the other questions for the topic!

**1000s (maybe even 100000, I haven't tested that) of notes can be converted to flashcards in a matter of seconds using this program**

Now that the basic functionality of the program is clear (hopefully), let's talk about some of the features that make it very cool (mainly due to Anki's features, not my code).

If you add a note to a question that you have already made into a card, using the program once more and importing into Anki will not only be able to add the new card into the deck, *all* of the scheduling information for *all* of your other cards will be preserved! This means that you can run the program on your notes as you edit them again and again without disturbing any of the scheduling information for the previous cards you have created. Remember how the flashcard's second field (in other words, what you reveal) has all of the notes for the question? When you add another note and use the program, that added note will be added to the second field of all of the pre-existing cards. 

Essentially, what makes this program so useful, si that it utilises aAnki's features to make carding **hassle-free** since it can be so dynamic.

## Downloading
Note that there are three files (other than the Readme, which is the file that you are reading right now) in this repository. The file with the extension .cpp is the code that compiles to make an executable program. However, compiling the code is annoying to set up if you haven't already set it up, so I've added two executables, which essentially means that I have already compiled it for you (saving you the pain of downloading a compiler). 

The .exe file is for Windows, and the .out file is for Mac OS. 

If you are familiar with command line, you will realise that some of the steps below can be skipped, but I've included them because I believe that they make the program a lot easier to use. Skip those steps if you wish to, but I suggest that everybody just follow all of the steps below. If you don't know what steps can be skipped, then you probably should just stick to all of the instructions below.

### Instructions for downloading the program for Windows:
1. Create a folder in your Desktop for the use of this program. If you already have a folder for whatever subject this is for, then feel free to use that.
2. Download the .exe file into the folder that you just created.

### Instructions for downloading the program for Mac OS:
1. Create a folder in your Desktop, or use an existing folder. For all of the following instructions, **I will assume that the name of your folder is "carder". If it isn't "carder", then please replace "carder" with whatever the folder name is.**
2. Download the .out file and move it to carder.
3. Open terminal and type ``cd ~/Desktop/carder`` and hit enter (switch "carder" out if necessary). You should not be getting any error messages.
4. Then type ``chmod +x a.out``. If you get any pop-up regarding the file not being safe because it was downloaded from Github, go to System Preferences->Security and Privacy and allow the file to be downloaded

## Note Formatting (IMPORTANT)

Your notes **must be in a specific format for the program to work.** There are three important things to keep in mind for the program to run properly:
1. **Every topic must be ended with a "~" on a separate line.** 
2. **At the end of your notes, you must have "\!" written on a new line.**
3. When you copy-paste into the console to run the program, you **should not be copy-pasting any bullet point characters**. When I use Google Docs, for example, when I copy it to paste into the console, the bullet points are automatically not pasted in (which should also be a feature for you).
Look at the image below as an example of both of these.
![image](https://user-images.githubusercontent.com/68109717/116254164-b306b080-a7a3-11eb-8ec2-24235fa391dc.png)

## Running the program

The following steps will need to be repeated each time you run the program. Once you learn the steps, running the program becomes next to effortless.

The first step for running the program is different for Windows and Mac OS. The rest of the steps are the same

### For Windows
Simply double click on the file. There should be some output from a console. 


### For Mac
Open Terminal and type ``~/Desktop/carder/./a.out`` switch "carder" out if necessary)

### Next Steps
1. Copy-paste your notes into the console and hit enter. Make sure that you have followed the format seen in the image above, and explained in writing above.
2. The console should automatically stop prompting you if you have followed the correct format. There should now be a file in the folder of the program called ``ankiInput.txt``. This file will be overwritten each time the program is run.
3. Open Anki and click on File -> Import.
4. Make sure that the card type is Basic.
5. Select the deck you wish to import into. Anki should detect that the fields are separated by tabs. 
6. In the dropdown menu, select ``Update existing notes where first field matches``
7. Tick the allow HTML in fields button
8. Click import
9. You are done! Make sure that everything imported correctly by browsing your deck.

Steps 4-7 will automatically be preset once you set these up the first time, so you won't have to be too careful after your first import.

If you have any questions, feel free to contact me at polavaram46361@sas.edu.sg
