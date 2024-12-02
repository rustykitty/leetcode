# 193. Valid Phone Numbers

# Submitted: December 1, 2024

# Runtime: 66 ms (beats 50.05%)
# Memory: 3.56 MB (beats 8.13%)

# Read from the file file.txt and output all valid phone numbers to stdout.
while read REPLY; do # read line into $REPLY until EOF
    [[ $REPLY =~ ^[0-9]{3}-[0-9]{3}-[0-9]{4}$ ]] || # if $REPLY matches regex for nnn-nnn-nnnn
    [[ $REPLY =~ ^\([0-9]{3}\)\ [0-9]{3}\-[0-9]{4}$ ]] && # if $REPLY matches regex for (nnn) nnn-nnnn
    echo $REPLY 
done < file.txt # redirect stdin to read from file.txt
# all in one line:
# while read REPLY; do [[ $REPLY =~ ^[0-9]{3}-[0-9]{3}-[0-9]{4}$ ]] || [[ $REPLY =~ ^\([0-9]{3}\)\ [0-9]{3}\-[0-9]{4}$ ]] && echo $REPLY; done < file.txt
