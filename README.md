<h1 align="center">B3 - C++ Pool</h1>

<h2 align="center">B-CPP-300<h2>

<h1 align="center">Day 14 - Morning</h1>

```
language : C++
```
- The totality of your source files, except all useless files (binary, temp files, obj
    files,...), must be included in your delivery.

All your exercises will be compiled with **g++and the-Wall -Wextra -Werrorflags** , unless specified otherwise.

All output goes to the standard output, and must be ended by a newline, unless specified otherwise.

```
None of your files must contain amainfunction, unless specified otherwise.
We will use our ownmainfunctions to compile and test your code. It will include your
header files.
```
For each exercise, the files must be turned-in in a separate directory called **exXX** where XX is the exercise
number (for instanceex01), unless specified otherwise.

```
Read the examples CAREFULLY. They might require things that weren’t mentioned in
the subject...
```
If you do half the exercises because you have comprehension problems, it’s okay, it happens. But if you do
half the exercices because you’re lazy, and leave at 2PM, you **WILL** have problems.
Do not tempt the devil.

```
The*alloc,free,*printf,openandfopenfunctions, as well as theusing namespacekey-
word, are forbidden in C++.
By the way,friendis forbidden too, as well as any library except the standard one.
```

## Unit Tests

It is highly recommended to test your functions as you implement them. It is common practice to create
and use what are called **unit tests**.

From now on, we expect you to write unit tests for your functions (when possible). To do so, please follow
the instructions in the **“How to write Unit Tests”** document on the intranet, available here.


## Exercise 0 - Fruits

**Turn in** :Fruit.hpp/cpp,Lemon.hpp/cpp,Banana.hpp/cpp,FruitBox.hpp/cpp,FruitNode.hpp

Fruits are good. Eat them.
They are full of good little vitamins which do a lot of good things for your small bodies exhausted by this
hard pool.
But before you have the time to taste a delicious fruit juice full of vitamins, some work has to be done.

Implement theFruit,LemonandBananaclasses.

Be sure to have a coherent inheritance tree, and that the code below compiles:

int main()
{
Lemon l;
Banana b;

```
std::cout << l.getVitamins () << std::endl;
std::cout << b.getVitamins () << std::endl;
std::cout << l.getName () << std::endl;
std::cout << b.getName () << std::endl;
```
Fruit& f = l;
std::cout << f.getVitamins () << std::endl;
std::cout << f.getName () << std::endl;
return 0;
}

### ∇ Terminal - + x

```
∼/B-CPP-300> ./a.out | cat -e
3$
5$
lemon$
banana$
3$
lemon$
```
```
All specializations of theFruitclass must initialize anintattribute ofFruitcontaining its
number of vitamins.
This attribute must be called_vitamins.
```
ThegetNamefunction must return anstd::stringcontaining the name of the fruit.
It shouldn’t be possible to reify theFruitclass.

You now need to build aFruitBox, because we need a lot of vitamins, which means we need a lot of fruits.
Our two hands won’t be enough to carry all these fruits!

OurFruitBoxmust be aFruitcontainer, implemented as a linked list.
I want aFruitBoxwith the following member functions (constspecifiers should be added when necessary):


- FruitBox(int size);: builds aFruitBoxthat can holdsizefruits,
- int nbFruits();: returns the number ofFruitscurrently in theFruitBox,
- bool putFruit(Fruit *f);: adds aFruitto the end of theFruitBox,
- Fruit *pickFruit();: removes aFruitfrom theFruitBox(the first that comes),
- FruitNode *head();: returns the head of the linked list.

A few things to note:

- putFruit(Fruit *f)returnsfalseif theFruitBoxis full or if theFruitinstance is already in theFruitBox,
- pickFruit()returns a null pointer if theFruitBoxis empty,
- head()returns a null pointer if theFruitBoxis empty.

In order to manipulate theFruitas a linked list, you must encapsulate them in aFruitNodestructure.
The implementation of this structure is up to you, but it **needs** to have anextdata field.

I don’t want to know how theFruitBoxworks.
All I want is to carry severalFruits, as many as I can, to have more and more vitamins.

```
Be careful:FruitBoxescannot be copied.
```

## Exercise 1 - Can I have some more?

**Turn in** :Fruit.hpp/cpp,Lemon.hpp/cpp,Banana.hpp/cpp,FruitBox.hpp/cpp,FruitNode.hpp,LittleHand.hpp/cpp,
Lime.hpp/cpp

Good news: we now have a whole bunch ofFruitBoxes, enough to throw a frickin’ **Fruit Party**.

The problem is that none of our fruits are sorted...
We need a way to keep all similarFruitstogether!

First things first, you need to catch up on recent developments in our Fruit Company: we have a new type
ofFruit: theLime.
It inherits fromLemon, obviously, and is rather poor in vitamins (only 2).
Its little name is _“lime”_.

Sorting theFruitBoxesmust be done by hand.
To be more accurate, it must be done by aLittleHand.
Implement theLittleHandclass, with the following static member function:

void sortFruitBox(FruitBox &unsorted , FruitBox &lemons , FruitBox &bananas , FruitBox &
lime);

This function moves all theFruitsfromunsortedinto the correspondingFruitBoxes.
All theFruitswhich don’t fit in any of theFruitBoxes(either because they do not have the right type, or their
FruitBoxis full) must simply be placed back intounsorted.


## Exercise 2 - Eat it

**Turn in** :Fruit.hpp/cpp,Lemon.hpp/cpp,Banana.hpp/cpp,FruitBox.hpp/cpp,FruitNode.hpp,LittleHand.hpp/cpp,
Lime.hpp/cpp,Coconut.hpp/cpp

While you were having your Fruit Party, I went ahead and got a great deal on some unsortedFruitsfrom a
really cheap shop for you.

He also offered a newFruit, theCoconut.
Its milk provides us with 15 wonderful vitamins, and its beautiful name, _“coconut”_ , makes it fit right in with
our other fruit juices.
I asked the seller to send us a large batch ofCoconuts.
Since they’ll arrive all jumbled up, you’ll have to arrange them intoFruitBoxes.

Once again, yourLittleHandswill get the work done.
Add a new static member function to the class, taking a pack ofCoconutsas parameter and returning an
array ofFruitBoxes.
EachFruitBoxcan contain 6Coconuts.
Here is the function’s prototype:

```
FruitBox * const *organizeCoconut(Coconut const * const *coconuts);
```
- coconutsis a null-terminated array ofCoconutpointers,
- the function returns a dynamically-allocated, null-terminated array of pointers to dynamically-allocated
    FruitBoxes.

```
Just to be clear: if theLittleHandis given an array of 25 (pointers to)Coconuts, it must
return an array of 5 (pointers to)FruitBoxes. The first 4 must be full, and the last will
contain a singleCoconut.
```
Hurry up and get to work now, all these vitamins are fading faster than you might think!


## Exercise 3 - Mix it up

**Turn in** :Fruit.hpp/cpp,Lemon.hpp/cpp,Banana.hpp/cpp,FruitBox.hpp/cpp,FruitNode.hpp,LittleHand.hpp/cpp,
Lime.hpp/cpp,Coconut.hpp/cpp,Mixer.hpp/cpp

We finally have everything we need to manage our fruits full of vitamins.
Let’s mix them all together and start producing quality fruit juice!
To do so, we’ll need... aMixer!

All we have now is an old mixer we found in the dumpster.
Its interface is not quite clear, and you’ll need to do some manual labour to connect it electrically.

So, we have aMixerBase, the core part of our completely brokenMixer, which doesn’t have any wiring or even
a mixing blade...
We’ll have to fix that.

```
This class is declared inMixerBase.hpp.
You mustn’t modify it, as the correction script will use its own version anyway.
```
Here is how the visible part of our poorMixerBaselooks like:
class MixerBase
{
public:
MixerBase ();
int mix(FruitBox &fruits) const;

protected:
bool _plugged;
int (* _mixfunc)(FruitBox &fruits);
};

We know that, by default, the mixer isn’t plugged in and has no way to mix.

We’ll have to specialize all this in order to:

- initialize the function pointer with a function that will take care of mixing theFruitsfrom theFruitBox,
- provide a way to electrically connect theMixer.

TheMixermust have a member function which electrically connects it.
The mixing function itself must return the sum of all vitamins held in theFruitspassed as parameter.

Even if theMixerprovides a way to be connected, it will be up to theLittleHandsto plug it in.
Add a static member function to theLittleHandclass with the following prototype:
void plugMixer(MixerBase &mixer);

```
Provided that you have only crafted one type ofMixerBase, you can be sureplugMixer’s
parameter will be a reference to your ownMixerclass.
```

## Exercise 4 - The Help

**Turn in** :Fruit.hpp/cpp,Lemon.hpp/cpp,Banana.hpp/cpp,FruitBox.hpp/cpp,FruitNode.hpp,LittleHand.hpp/cpp,
Lime.hpp/cpp,Coconut.hpp/cpp,Mixer.hpp/cpp

Doesn’t it make you feel kinda weird to be ingesting so many vitamins?
I don’t know about you, but it makes me wish I could change the world, create something new...
But unlike the genetic modifications from **BioShock** , I promise to make them abide by **Google** ’s motto:
_“Don’t be evil”_.

I want these fruit to make the world a better, healthier place, where people can be truly happy.
I want to modifyFruits, as you mya have guessed, to increase their vitaminic potential.
I want more vitamins, always more! We’ll have so many vitamins that our chakras will open, and just like
when your mom tucks you into bed, the world will slowly be covered by a sweet and peaceful layer of
whipped cream, topped with strawberries.

We’ll find a way to modify ourFruitsdirectly and conquer the world!

Once again, you’ll use yourLittleHandsto perform this delicate operation.
Add the following static member function to them:

void injectVitamin(Fruit &f, int quantity);

This function must inject (replace)quantityvitamins intof.
Try using the following structure to modify matter itself, like **Neo** :

struct InTheMatrixFruit
{
virtual ~InTheMatrixFruit ();
int vitamins;
};

You are now almost equal to the great gods of C++!
You have the power to modify matter!
The world and future are yours!


