
from mutagen.oggvorbis import OggVorbis


wronginp = True


while wronginp == True:
 

 audlen = input("Give me the length of audio you want:")
 
 try:
  audlen = float(audlen)
  wronginp = False
 except:
  print("There was an error, try again.")

print("thank") 


audiomeasured = OggVorbis("Quran/AbuBakrAlShatri/1.ogg")

lengh = audiomeasured.info.length

print(lengh)