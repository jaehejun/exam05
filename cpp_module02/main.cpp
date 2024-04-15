#include "ASpell.hpp"
#include "ATarget.hpp"
#include "BrickWall.hpp"
#include "Dummy.hpp"
#include "Fireball.hpp"
#include "Fwoosh.hpp"
#include "Polymorph.hpp"
#include "SpellBook.hpp"
#include "TargetGenerator.hpp"
#include "Warlock.hpp"

int main()
{
   Warlock richard("Richard", "foo");
   richard.setTitle("Hello, I'm Richard the Warlock!");
   BrickWall model1;

   std::cout << "@@@@@@@@@@@@@@@@@@@@@MODEL1@@@@@@@@@@@@@@@@@@@" <<std::endl;

   Polymorph* polymorph = new Polymorph();
   std::cout << "@@@@@@@@@@@@@@@@@@@@@NEW POLYMORPH@@@@@@@@@@@@@@@@@@@" <<std::endl;
   TargetGenerator tarGen;
   std::cout << "@@@@@@@@@@@@@@@@@@@@@TARGET GEN@@@@@@@@@@@@@@@@@@@" <<std::endl;

   tarGen.learnTargetType(&model1);
   std::cout << "@@@@@@@@@@@@@@@@@@@@@LEARN TARGET@@@@@@@@@@@@@@@@@@@" <<std::endl;
   richard.learnSpell(polymorph);
   std::cout << "@@@@@@@@@@@@@@@@@@@@@LEARN SPELL@@@@@@@@@@@@@@@@@@@" <<std::endl;

   Fireball* fireball = new Fireball();
   std::cout << "@@@@@@@@@@@@@@@@@@@@@NEW FIREBALL@@@@@@@@@@@@@@@@@@@" <<std::endl;

   richard.learnSpell(fireball);
   std::cout << "@@@@@@@@@@@@@@@@@@@@@LEARN FIREBALL@@@@@@@@@@@@@@@@@@@" <<std::endl;

   ATarget* wall = tarGen.createTarget("Inconspicuous Red-brick Wall");
   std::cout << "@@@@@@@@@@@@@@@@@@@@@CREAT TARGET@@@@@@@@@@@@@@@@@@@" <<std::endl;

   richard.introduce();
   std::cout << "@@@@@@@@@@@@@@@@@@@@@INTRODUCE@@@@@@@@@@@@@@@@@@@" <<std::endl;
   richard.launchSpell("Polymorph", *wall);
   std::cout << "@@@@@@@@@@@@@@@@@@@@@LAUCH SPELL POLY@@@@@@@@@@@@@@@@@@@" <<std::endl;
   richard.launchSpell("Fireball", *wall);
   std::cout << "@@@@@@@@@@@@@@@@@@@@@LAUCH SPELL FIRE@@@@@@@@@@@@@@@@@@@" <<std::endl;
}

//~$ ./a.out | cat -e
//Richard: This looks like another boring day.$
//Richard: I am Richard, Hello, I'm Richard the Warlock!!$
//Inconspicuous Red-brick Wall has been turned into a critter!$
//Inconspicuous Red-brick Wall has been burnt to a crisp!$
//Richard: My job here is done!$
//~$