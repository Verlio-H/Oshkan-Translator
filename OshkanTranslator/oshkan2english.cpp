
#include "oshkan2english.h"

string result2 = " ";

string oshkanenglish(string input) {
    string result = input;
    long reader2 = 0;
    string endPunctuation;
    while (reader2 < result.length()) { //loop to remove capitals and detect punctuation
        result.at(reader2) = tolower(result.at(reader2));
        if ((result.at(reader2) == ',') || (result.at(reader2) == '.') || (result.at(reader2) == '?') || (result.at(reader2) == '!')){
            endPunctuation = result.substr(reader2);
            result = result.substr(0, result.length() - endPunctuation.length()); //creates a substring with the punctuation
            reader2 = result.length() - 1; //used to exit loop
        }
        reader2++;
    }
    if (result.at(0) == 'a') { //if statements to find and replace word
        if (result == "adgang") {
            result = "access";
        } else if (result == "adgangfoit") {
            result = "accessable";
        } else if (result == "aksenti") {
            result = "accent";
        } else if (result == "allep") {
            result = "academic";
        } else if (result == "anehon") {
            result = "advance";
        } else if (result == "anehonde") {
            result = "advanced";
        } else if (result == "anehonsok") {
            result = "advancing";
        } else if (result == "anehonfer") {
            result = "will advance";
        } else if (result == "annen") {
            result = "other";
        } else if (result == "asber") {
            result = "from";
        }
    } else if (result.at(0) == 'b') {
        if (result == "bara") {
            result = "just";
        } else if (result == "beg") {
            result = "use";
        } else if (result == "begde") {
            result = "used";
        } else if (result == "begsok") {
            result = "using";
        } else if (result == "begfer") {
            result = "will use";
        } else if (result == "boikken") {
            result = "acquire";
        } else if (result == "boikkende") {
            result = "acquired";
        } else if (result == "boikkensok") {
            result = "acquiring";
        } else if (result == "boikkenfer") {
            result = "will acquire";
        } else if (result == "") {
            result = "from";
        } else if (result == "boiklo") {
            result = "actual";
        } else if (result == "boiklol") {
            result = "actually";
        } else if (result == "boiko") {
            result = "many";
        }
    } else if (result.at(0) == 'c'){
        if (result == "ceiva") {
            result = "accord";
        } else if (result == "ceivsok") {
            result = "according";
        } else if (result == "cho") {
            result = "are";
        } else if (result == "chohco") {
            result = "art"; //nice
        } else if (result == "codo") {
            result = "ever";
        } else if (result == "coit") {
            result = "number";
        } else if (result == "coivolde") {
            result = "put";
        } else if (result == "coivolosok") {
            result = "puting";
        } else if (result == "coivolfer") {
            result = "will put";
        }
    } else if (result.at(0) == 'd') {
        if (result == "da") {
            result = "of";
        } else if (result == "datde") {
            result = "dated";
        } else if (result == "datesok") {
            result = "dating";
        } else if (result == "det") {
            result = "the";
        } else if (result == "dette") {
            result = "this";
        } else if (result == "detzoikdamoksok") {
            result = "addition";
        } else if (result == "devvel") {
            result = "absolutely";
        } else if (result == "devver") {
            result = "absolute";
        } else if (result == "dey") {
            result = "say";
        } else if (result == "deyde") {
            result = "said";
        } else if (result == "deysok") {
            result = "saying";
        } else if (result == "deyyeta") {
            result = "speak";
        } else if (result == "deyyetde") {
            result = "spoke";
        } else if (result == "deyyetasok") {
            result = "speaking";
        } else if (result == "deyyetfer") {
            result = "will speak";
        } else if (result == "dikke") {
            result = "these";
        } else if (result == "disse") {
            result = "there";
        } else if (result == "do") {
            result = "yall";
        } else if (result == "du") {
            result = "you";
        } else if (result == "dupper") {
            result = "did";
        } else if (result == "dwee") {
            result = "abandon";
        } else if (result == "dweede") {
            result = "abandoned";
        } else if (result == "dweesok") {
            result = "abandoning";
        } else if (result == "dweefer") {
            result = "will abandon";
        }
    } else if (result.at(0) == 'e') {
        if (result == "eed") {
            result = "three";
        } else if (result == "epper") {
            result = "cat";
        } else if (result == "et") {
            result = "it";
        }
    } else if (result.at(0) == 'f') {
        if (result == "feed") {
            result = "if";
        } else if (result == "feepo") {
            result = "abroad";
        } else if (result == "felp") {
            result = "accident";
        } else if (result == "felpal") {
            result = "accidental";
        } else if (result == "florp") {
            result = "acid";
        } else if (result == "fode") {
            result = "now";
        } else if (result == "foit") {
            result = "can";
        } else if (result == "foiver") {
            result = "adapt";
        } else if (result == "foss") {
            result = "new";
        } else if (result == "foy") {
            result = "is";
        }
    } else if (result.at(0) == 'g') {
        if (result == "geduro") {
            result = "play";
        } else if (result == "gedurde") {
            result = "played";
        } else if (result == "gedurosok") {
            result = "playing";
        } else if (result == "gedurfer") {
            result = "will play";
        } else if (result == "geeohper") {
            result = "with";
        } else if (result == "geeohperüt") {
            result = "without";
        } else if (result == "geito") {
            result = "child";
        } else if (result == "geru") {
            result = "really";
        } else if (result == "gevver") {
            result = "acknowledge";
        } else if (result == "gevverde") {
            result = "acknowledged";
        } else if (result == "gevversok") {
            result = "acknowledging";
        } else if (result == "gevverfer") {
            result = "will acknowledge";
        } else if (result == "gleypah") {
            result = "absorb";
        } else if (result == "gleypahde") {
            result = "absorbed";
        } else if (result == "gleypahsok") {
            result = "absorbing";
        } else if (result == "gleypahfer") {
            result = "will absorb";
        } else if (result == "gohkel") {
            result = "call";
        } else if (result == "gohkelde") {
            result = "called";
        } else if (result == "gohkelsok") {
            result = "calling";
        } else if (result == "gohkelfer") {
            result = "will call";
        } else if (result == "goiklohgoss") {
            result = "language";
        } else if (result == "goit") {
            result = "would";
        } else if (result == "gu") {
            result = "a";
        } else if (result == "güannen") {
            result = "another";
        } else if (result == "gute") {
            result = "how";
        }
    } else if (result.at(0) == 'h') {
        if (result == "ha") {
            result = "have";
        } else if (result == "hasok") {
            result = "having";
        } else if (result == "heed") {
            result = "had";
        } else if (result == "hette") {
            result = "tree";
        } else if (result == "heiynel") {
            result = "actively";
        } else if (result == "hieynen") {
            result = "active";
        } else if (result == "hieynenoinok") {
            result = "activity";
        } else if (result == "hoifa") {
            result = "give";
        } else if (result == "hoifde") {
            result = "gave";
        } else if (result == "hoifasok") {
            result = "giving";
        } else if (result == "hoiffer") {
            result = "will give";
        } else if (result == "hoigen") {
            result = "much";
        } else if (result == "hoit") {
            result = "stop";
        } else if (result == "hufak") {
            result = "zoo";
        } else if (result == "hüpa") {
            result = "like";
        } else if (result == "hüpde") {
            result = "liked";
        } else if (result == "hüpasok") {
            result = "liking";
        } else if (result == "hüpfer") {
            result = "will like";
        } else if (result == "huri") {
            result = "bad";
        }
    } else if (result.at(0) == 'i') {
        if (result == "idohven") {
            result = "because";
        } else if (result == "igudyg") {
            result = "god";
        } else if (result == "ine") {
            result = "know";
        } else if (result == "ipo") {
            result = "stone";
        } else if (result == "isa") {
            result = "dad";
        } else if (result == "iseta") {
            result = "bye";
        } else if (result == "iseto") {
            result = "hello";
        } else if (result == "issen") {
            result = "whole";
        } else if (result == "ive") {
        result = "five";
        }
    } else if (result.at(0) == 'j') {
        if (result == "jine") {
            result = "account";
        } else if (result == "jinde") {
            result = "accounted";
        } else if (result == "jinesok") {
            result = "accounting";
        } else if (result == "jinfer") {
            result = "will account";
        } else if (result == "johhi") {
            result = "ability";
        } else if (result == "joi") {
            result = "will";
        } else if (result == "joisok") {
            result = "willing";
        } else if (result == "joik") {
            result = "dead";
        } else if (result == "ju") {
            result = "way";
        }
    } else if (result.at(0) == 'k') {
        if (result == "kego") {
            result = "why";
        } else if (result == "kepa") {
            result = "homo";
        } else if (result == "kepu") {
            result = "gay";
        } else if (result == "kesover") {
            result = "across";
        } else if (result == "ki") {
            result = "a";
        } else if (result == "kiannen") {
            result = "another";
        } else if (result == "koh") {
            result = "no";
        } else if (result == "kohna") {
            result = "opposite of";
        } else if (result == "koi") {
            result = "yes";
        } else if (result == "koik") {
            result = "write";
        } else if (result == "kol") {
            result = "sense";
        } else if (result == "kot") {
            result = "not";
        } else if (result == "ku") {
            result = "thank";
        } else if (result == "kde") {
            result = "thanked";
        } else if (result == "kusok") {
            result = "thanking";
        } else if (result == "kfer") {
            result = "will thank";
        }
    } else if (result.at(0) == 'l') {
        if (result == "lake") {
            result = "than";
        } else if (result == "lap") {
            result = "woman";
        } else if (result == "laq") {
            result = "was";
        } else if (result == "lavvet") {
            result = "made";
        } else if (result == "law") {
            result = "live";
        } else if (result == "leeah") {
            result = "she";
        } else if (result == "leeal") {
            result = "her";
        } else if (result == "lep") {
            result = "women";
        } else if (result == "lohpa") {
            result = "help";
        } else if (result == "loibel") {
            result = "accurately";
        } else if (result == "loiber") {
            result = "accurate";
        } else if (result == "loig") {
            result = "big";
        } else if (result == "loillüj") {
            result = "allied";
        } else if (result == "loip") {
            result = "each";
        } else if (result == "loke") {
            result = "then";
        } else if (result == "lokop") {
            result = "age";
        } else if (result == "lokopde") {
            result = "aged";
        } else if (result == "lokopsok") {
            result = "aging";
        } else if (result == "lokopfer") {
            result = "will age";
        } else if (result == "lu") {
            result = "to";
        } else if (result == "lüj") {
            result = "ally";
        } else if (result == "lümaskwar") {
            result = "admiration";
        } else if (result == "lüsoitpokoinok") {
            result = "approval";
        }
    } else if (result.at(0) == 'm') {
        if (result == "maken") {
            result = "make";
        } else if (result == "makende") {
            result = "made";
        } else if (result == "makensok") {
            result = "making";
        } else if (result == "makenfer") {
            result = "will make";
        } else if (result == "meda") {
            result = "I";
        } else if (result == "meh") {
            result = "go";
        } else if (result == "mehsok") {
            result = "going";
        } else if (result == "mehfer") {
            result = "will go";
        } else if (result == "misbruke") {
            result = "abuse";
        } else if (result == "misbrukde") {
            result = "abused";
        } else if (result == "misbrukesok") {
            result = "abusing";
        } else if (result == "misbrukfer") {
            result = "will abuse";
        } else if (result == "moiba") {
            result = "accompany";
        } else if (result == "moik") {
            result = "could";
        } else if (result == "moilop") {
            result = "any";
        } else if (result == "moit") {
            result = "eight";
        } else if (result == "moizer") {
            result = "world";
        } else if (result == "mok") {
            result = "add";
        } else if (result == "mokde") {
            result = "added";
        } else if (result == "moksok") {
            result = "adding";
        } else if (result == "mokfer") {
            result = "will add";
        } else if (result == "mokdepogzole") {
            result = "additional";
        } else if (result == "molko") {
            result = "so";
        } else if (result == "mor") {
            result = "mom";
        } else if (result == "müsa") {
            result = "that";
        }
    } else if (result.at(0) == 'n') {
        if (result == "niehetu") {
            result = "family";
        } else if (result == "nifty") {
            result = "been";
        } else if (result == "noho") {
            result = "chair";
        } else if (result == "noi") {
            result = "ad";
        } else if (result == "noin") {
            result = "about";
        } else if (result == "noit") {
            result = "bet";
        } else if (result == "noitde") {
            result = "bet";
        } else if (result == "noitsok") {
            result = "betting";
        } else if (result == "noitfer") {
            result = "will bet";
        }
    } else if (result.at(0) == 'o') {
        if (result == "och") {
            result = "and";
        } else if (result == "ohpüsa") {
            result = "stupid";
        } else if (result == "oid") {
            result = "oil";
        } else if (result == "oilop") {
            result = "nice";
        } else if (result == "oin") {
            result = "by";
        } else if (result == "oinok") {
            result = "thing";
        } else if (result == "open") {
            result = "zero";
        } else if (result == "opp") {
            result = "up";
        } else if (result == "oppdate") {
            result = "update";
        } else if (result == "oppdatde") {
            result = "updated";
        } else if (result == "oppdatesok") {
            result = "updating";
        } else if (result == "oppdatfer") {
            result = "will update";
        } else if (result == "ord") {
            result = "four";
        } else if (result == "overnating") {
            result = "accommodation";
        }
    } else if (result.at(0) == 'p') {
        if (result == "pap") {
            result = "men";
        } else if (result == "peeah") {
            result = "he";
        } else if (result == "peeal") {
            result = "him";
        } else if (result == "peeals") {
            result = "his";
        } else if (result == "pep") {
            result = "man";
        } else if (result == "pog") {
            result = "on";
        } else if (result == "poglu") {
            result = "onto";
        } else if (result == "pohki") {
            result = "few";
        } else if (result == "poi") {
            result = "people";
        } else if (result == "poiser") {
            result = "hundred";
        } else if (result == "pok") {
            result = "some";
        } else if (result == "pokoinok") {
            result = "something";
        } else if (result == "pokoinokanehonde") {
            result = "advancement";
        } else if (result == "pokoinokgevverde") {
            result = "acknowledgement";
        } else if (result == "pokoinokmüsaweko") {
            result = "advertisement";
        } else if (result == "pokoinokvornumde") {
            result = "achievement";
        } else if (result == "poksoiko") {
            result = "sometime";
        } else if (result == "poktoivel") {
            result = "somebody";
        } else if (result == "poktoivelmakenchohco") {
            result = "artist";
        } else if (result == "pommeh") {
            result = "good";
        } else if (result == "proporth") {
            result = "founder";
        } else if (result == "püni") {
            result = "year";
        } else if (result == "purik") {
            result = "amaze";
        } else if (result == "purikde") {
            result = "amazed";
        } else if (result == "puriksok") {
            result = "amazing";
        } else if (result == "purikfer") {
            result = "will amaze";
        } else if (result == "püt") {
            result = "which";
        }
    } else if (result.at(0) == 'q') {
        if (result == "qhe") {
            result = "or";
        } else if (result == "qimmeq") {
            result = "dog";
        } else if (result == "quip") {
            result = "okay";
        }
    } else if (result.at(0) == 'r') {
        if (result == "retto") {
            result = "day";
        } else if (result == "rettde") {
            result = "yesterday";
        } else if (result == "rettosok") {
            result = "today";
        } else if (result == "rettfer") {
            result = "tomorrow";
        }
    } else if (result.at(0) == 's') {
        if (result == "seinover") {
            result = "accent";
        } else if (result == "sep") {
            result = "what";
        } else if (result == "sepper") {
            result = "every";
        } else if (result == "seppertoivel") {
            result = "everybody";
        } else if (result == "sepperoinok") {
            result = "everything";
        } else if (result == "serku") {
            result = "above";
        } else if (result == "shau") {
            result = "for";
        } else if (result == "sieh") {
            result = "they";
        } else if (result == "singpo") {
            result = "money";
        } else if (result == "so") {
            result = "all";
        } else if (result == "soiko") {
            result = "time";
        } else if (result == "soikde") {
            result = "past";
        } else if (result == "soikosok") {
            result = "present";
        } else if (result == "soikfer") {
            result = "future";
        } else if (result == "soit") {
            result = "approve";
        } else if (result == "sond") {
            result = "ground";
        } else if (result == "sonle") {
            result = "actress";
        } else if (result == "sonpe") {
            result = "actor";
        } else if (result == "su") {
            result = "do";
        } else if (result == "subsito") {
            result = "halt";
        } else if (result == "sünum") {
            result = "accept";
        } else if (result == "sünumde") {
            result = "accepted";
        } else if (result == "sünumsok") {
            result = "accepting";
        } else if (result == "sünumfer") {
            result = "will accept";
        } else if (result == "süvres") {
            result = "snow";
        }
    } else if (result.at(0) == 't') {
        if (result == "tepa") {
            result = "hetero";
        } else if (result == "tilkrekke") {
            result = "attract";
        } else if (result == "tilkrekkde") {
            result = "attracted";
        } else if (result == "tilkrekkesok"){
            result = "attracting";
        } else if (result == "tilkrekkfer") {
            result = "will attract";
        } else if (result == "toi") {
            result = "as";
        } else if (result == "toivvel") {
            result = "body";
        } else if (result == "toi") {
            result = "as";
        }
    } else if (result.at(0) == 'u') {
        if (result == "ude") {
            result = "accuse";
        } else if (result == "und") {
            result = "one";
        } else if (result == "undevver") {
            result = "first";
        } else if (result == "up") {
            result = "comma";
        }
    } else if (result.at(0) == 'v') {
        if (result == "veet") {
            result = "we";
        } else if (result == "veeta") {
            result = "us";
        } else if (result == "velcomme") {
            result = "welcome";
        } else if (result == "velcommde") {
            result = "welcomed";
        } else if (result == "velcommesok") {
            result = "welcoming";
        } else if (result == "velcommfer") {
            result = "will welcome";
        } else if (result == "velp") {
            result = "them";
        } else if (result == "vend") {
            result = "land";
        } else if (result == "venop") {
            result = "only";
        } else if (result == "vern") {
            result = "more";
        } else if (result == "vimme") {
            result = "month";
        } else if (result == "vobber") {
            result = "apart";
        } else if (result == "voit") {
            result = "but";
        } else if (result == "vornum") {
            result = "achieve";
        } else if (result == "vornumde") {
            result = "achieved";
        } else if (result == "vornumsok") {
            result = "achieving";
        } else if (result == "vornumfer") {
            result = "will achieve";
        } else if (result == "voru") {
            result = "were";
        }
    } else if (result.at(0) == 'w') {
        if (result == "wann") {
            result = "when";
        } else if (result == "wedoi") {
            result = "want";
        } else if (result == "wej") {
            result = "look";
        } else if (result == "wejde") {
            result = "looked";
        } else if (result == "wejsok") {
            result = "looking";
        } else if (result == "wejfer") {
            result = "will look";
        } else if (result == "weko") {
            result = "advertise";
        } else if (result == "welop") {
            result = "article";
        } else if (result == "wen") {
            result = "at";
        } else if (result == "werp") {
            result = "absent";
        } else if (result == "woik") {
            result = "who";
        }
    } else if (result.at(0) == 'y') {
        if (result == "yaw") {
            result = "has";
        } else if (result == "ye") {
            result = "see";
        } else if (result == "yde") {
            result = "saw";
        } else if (result == "yesok") {
            result = "seeing";
        } else if (result == "yfer") {
            result = "will see";
        } else if (result == "yohgret") {
            result = "yogurt";
        } else if (result == "yoi") {
            result = "please";
        } else if (result == "yoik") {
            result = "need";
        } else if (result == "yoin") {
            result = "word";
        }
    } else if (result.at(0) == 'z') {
        if (result == "zepperzop") {
            result = "here";
        } else if (result == "zoik") {
            result = "act";
        } else if (result == "zoin") {
            result = "six";
        } else if (result == "zoit") {
            result = "nine";
        } else if (result == "zole") {
            result = "top";
        } else if (result == "zülu") {
            result = "water";
        }
    } else { //else is here because ü and ꝥ are multi byte characters
        if (result == "ü") {
            result = "in";
        } else if (result == "ülu") {
            result = "into";
        } else if (result == "ün") {
            result = "two";
        } else if (result == "üt") {
            result = "out";
        } else if (result == "ꝥ") {
            result = "that";
        }
    }
    result2 = result2 + result + endPunctuation + " "; //adding the word to previous words and the punctuation
return result2;
}

void reset() {
    result2 = " ";
}
