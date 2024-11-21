FIXED-POINT REPRESENTATION

basically a way to represent both whole numbers and fractions using an integer 

BASIC STUFF
-today, in most systems, an int takes 32bits (though you can declare it to take less or more memory)
-32bits in binary is 00000000 00000000 00000000 00000000 where the 0's could be either 0 or 1
-floats are a bit trickier, usually represented in the following format: seeeeeeeemmmmmmmmmmmmmmmmmmmmmmm (1 s ie sign, 8 e's ie exponents, 23 m's ie that's the fraction itself)
-fixed point representation looks like this <32, 8> where the total int takes 32 bits, out of which 8 are 'reserved' for the fractional part of the number

FORMULA
int fixedpointValue = realNumber * 2^numberOfFractionalBits

INT TO FIXED-POINT
- to convert from an integer value to fixedpoint representation, 
all that needs to be done is to *left bit shift the real number 
by the number of fractional part bits*
- this moves the integer part to the first 24 bits of the int value
as opposed how it was originally -- the integer part 'using up'
all 32 bits of the integer 

EXAMPLE for fixedpoint <32, 8>
int fractionalBits = 8;
int num = 16; //binary ==> 00000000 00000000 00000000 00010000
fixedpointValue = num << fractionalBits; //resulting in 00000000 00000000 00010000 00000000 ie 4096
OR
fixedpointValue = num * pow(2,fractionalBits); //ie 16 * 256 ie 4096


FLOAT TO FIXED-POINT 
- this one might seem trickier but it is based on the same principle as the int conversion
- to convert from a float value to fixedpoint representation, 
all that needs to be done is to multiply the real number by the scaling factor
for floats, this value is rounded and typecast into int
- you can't bit shift with a float because they are represented differently (see above under Basic Stuff)

EXAMPLE for fixed point <32, 8>
int fractionalBits = 8;
float num = 2.25
fixedpointValue = (int)roundf((num) * (1 << bits));
OR
fixedpointValue = (int)roundf(num * pow(2,fractionalBits));
//fixedpointValue = 576


FIXEDPOINT TO FLOAT (num = 2.25, fixed point <32, 8>)

Step 1: Understand the Fixed-Point Value

The fixed-point value is 576 (in decimal), which in binary looks like this:
00000000 00000000 00000010 01000000

    The left 24 bits are the integer part.
    The right 8 bits are the fractional part:
    00000000 00000000 00000010∣01000000

Step 2: Mask the fractional Bits

We ISOLATE the right 8 bits using a bitwise AND operation and a 'mask'.

The mask has 1's in the positions we want to keep and 0's elsewhere.
So, to isolate the last 8 bits, we need mask that has 1's at the last 8 bits and 0's elsewhere.

    00000000 00000000 00000000 11111111
    //or the number 255

Perform the AND operation:
553&255
00000000 00000000 00000010 01000000 & 00000000 00000000 00000000 11111111

Result:
00000000 00000000 00000000 01000000

In decimal:
576&255=64

So, the fractional part (raw bits) is 64.

Step 3: Convert Raw Bits to Fractional Value

The raw bits 64 represent a fractional value in the fixed-point representation.

To convert these raw bits into the fractional part of the real number:
Fractional value = Raw bits / 2 ^ Fractional bits

So:
64 / 256 = 0.25

NOW

technically, Step 4: Sum up the fractional value with the integer value

which can be done by simply doing
integer value = fixedpoint value >> fractional bits
ie


