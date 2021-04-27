# NotesToCards

##What the program does
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
