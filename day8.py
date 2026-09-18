from PIL import Image 
Image.open("photo.jpg").crop((50,10,350,500)).resize((413,531)).saved("passport.jpg")
