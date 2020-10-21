# Oshkan-Translator
This is a translator to english for the constructed language of Oshkan.

How to use:
Once you run the application you type in your input for Oshkan -> English then you type enter to convert it, if you would like to translate again you can press enter, if not you can type exit then enter.

How to install:
Windows: Install the .exe from the releases section and run it
Macos: Install the .dmg from the releases section and open it, move the OshkanTranslator executable to the applications folder and then eject the disk image (move the readme somewhere else if you want to keep it)
Linux: Download the source and then consult your favorite search engine on compiling c++

Most Recent Update: 0.1
This is the first update and includes:
• Simple Oshkan -> English translations
• Support for puncuation at the end of words
• Support for doing multiple translations

Known Bugs:
• Ü and Ꝥ don't translate, this is because the tolower() function does not support these and they are multi-byte characters so I will have to look into this and fix it in a later version
Please report any other bugs.

Next Planned Update: 0.2
This update will include:
• Simple English -> Oshkan translations
• Limited support for multi word phrases for Oshkan -> English (stuff like "lon du" -> "your" and "kohna retto" -> "night")
• Support for /'s and -'s in the middle of 2 words
Posible features:
• þ support
• Converting a to an
