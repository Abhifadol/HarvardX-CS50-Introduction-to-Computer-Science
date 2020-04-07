from cs50 import get_string
letter=0
sentence=0
word=0
text = get_string("Text: ")
n = len(text)
for i in range(n):
    if text[i].isalnum()==True:
        letter=letter+1
for i in range(n):
    if text[i].isspace()==True and text[i+1].isalnum()==True:
        word=word+1
for i in range(n):
    if text[i]=="?" or text[i]=="." or text[i]=="!":
        sentence=sentence+1
grade = round (0.0588 * ((100 * letter) / word) - 0.296 * ((100 * sentence) / word) - 15.8)
if grade<1:
    print("Before Grade 1")
elif grade < 16:
    print(f"Grade {grade-1}")
else :
    print("Grade 16+");
