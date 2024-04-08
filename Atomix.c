//Modern Periodic Table
#include<stdio.h>

int main()
{
    int a;

    printf("Welcome to Modern Periodic Table\n\n");

    printf("> Enter the atomic number of the element to be searched:\n");
    printf("> Enter 0 to close the periodic table\n\n");
    scanf("%d",&a);

    while(a != 0)
    {
        if(a == 1)
        {
            printf("Name: Hydrogen\n");
            printf("Symbol: H\n");
            printf("Atomic Number: 1\n");
            printf("Electronic Configuration: 1s^1\n");
            printf("Discovered By: Henry Cavendish\n");
        }
        else if(a == 2) 
        {
            printf("Name: Helium\n");
            printf("Symbol: He\n");
            printf("Atomic Number: 2\n");
            printf("Electronic Configuration: 1s^2\n");
            printf("Discovered By: Pierre Janssen\n");
        }
        else if(a == 3)
        {
            printf("Name: Lithium\n");
            printf("Symbol: Li\n");
            printf("Atomic Number: 3\n");
            printf("Electronic Configuration: 1s^2 2s^1\n");
            printf("Discovered By: Johan August Arfwedson\n");
        }
        else if(a == 4) 
        {
            printf("Name: Beryllium\n");
            printf("Symbol: Be\n");
            printf("Atomic Number: 4\n");
            printf("Electronic Configuration: 1s^2 2s^2\n");
            printf("Discovered By: Louis Nicolas Vauquelin\n");
        }
        else if(a == 5)
        {
            printf("Name: Boron\n");
            printf("Symbol: B\n");
            printf("Atomic Number: 5\n");
            printf("Electronic Configuration: 1s^2 2s^2 2p^1\n");
            printf("Discovered By: Joseph Louis Gay-Lussac\n");
        }
        else if(a == 6) 
        {
            printf("Name: Carbon\n");
            printf("Symbol: C\n");
            printf("Atomic Number: 6\n");
            printf("Electronic Configuration: 1s^2 2s^2 2p^2\n");
            printf("Discovered By: Ancient Civilizations\n");
        }
        else if(a == 7)
        {
            printf("Name: Nitrogen\n");
            printf("Symbol: N\n");
            printf("Atomic Number: 7\n");
            printf("Electronic Configuration: 1s^2 2s^2 2p^3\n");
            printf("Discovered By: Daniel Rutherford\n");   
        }
        else if(a == 8) 
        {
            printf("Name: Oxygen\n");
            printf("Symbol: O\n");
            printf("Atomic Number: 8\n");
            printf("Electronic Configuration: 1s^2 2s^2 2p^4\n");
            printf("Discovered By: Joseph Priestley\n");
        }
        else if(a == 9) 
        {
            printf("Name: Fluorine\n");
            printf("Symbol: F\n");
            printf("Atomic Number: 9\n");
            printf("Electronic Configuration: 1s^2 2s^2 2p^5\n");
            printf("Discovered By: Henri Moissan\n");
        }
        else if(a == 10) 
        {
            printf("Name: Neon\n");
            printf("Symbol: Ne\n");
            printf("Atomic Number: 10\n");
            printf("Electronic Configuration: 1s^2 2s^2 2p^6\n");
            printf("Discovered By: Morris Travers, William Ramsay\n");
        }
        else if(a == 11) 
        {
            printf("Name: Sodium\n");
            printf("Symbol: Na\n");
            printf("Atomic Number: 11\n");
            printf("Electronic Configuration: [Ne] 3s^1\n");
            printf("Discovered By: Humphry Davy\n");
        }
        else if(a == 12) 
        {
            printf("Name: Magnesium\n");
            printf("Symbol: Mg\n");
            printf("Atomic Number: 12\n");
            printf("Electronic Configuration: [Ne] 3s^2\n");
            printf("Discovered By: Joseph Black\n");
        }
        else if(a == 13) 
        {
            printf("Name: Aluminum\n");
            printf("Symbol: Al\n");
            printf("Atomic Number: 13\n");
            printf("Electronic Configuration: [Ne] 3s^2 3p^1\n");
            printf("Discovered By: Hans Christian Oersted\n");
        }
        else if(a == 14)
        {
            printf("Name: Silicon\n");
            printf("Symbol: Si\n");
            printf("Atomic Number: 14\n");
            printf("Electronic Configuration: [Ne] 3s^2 3p^2\n");
            printf("Discovered By: Jöns Jacob Berzelius\n");
        }
        else if(a == 15) 
        {
            printf("Name: Phosphorus\n");
            printf("Symbol: P\n");
            printf("Atomic Number: 15\n");
            printf("Electronic Configuration: [Ne] 3s^2 3p^3\n");
            printf("Discovered By: Hennig Brand\n");
        }
        else if(a == 16)
        {
            printf("Name: Sulphur\n");
            printf("Symbol: S\n");
            printf("Atomic Number: 16\n");
            printf("Electronic Configuration: [Ne] 3s^2 3p^4\n");
            printf("Discovered By: Ancient\n");
        }
        else if(a == 17) 
        {
            printf("Name: Chlorine\n");
            printf("Symbol: Cl\n");
            printf("Atomic Number: 17\n");
            printf("Electronic Configuration: [Ne] 3s^2 3p^5\n");
            printf("Discovered By: Carl Wilhelm Scheele\n");
        }
        else if(a == 18) 
        {
            printf("Name: Argon\n");
            printf("Symbol: Ar\n");
            printf("Atomic Number: 18\n");
            printf("Electronic Configuration: [Ne] 3s^2 3p^6\n");
            printf("Discovered By: Lord Rayleigh, Sir William Ramsay\n");
        }
        else if(a == 19) 
        {
            printf("Name: Potassium\n");
            printf("Symbol: K\n");
            printf("Atomic Number: 19\n");
            printf("Electronic Configuration: [Ar] 4s^1\n");
            printf("Discovered By: Humphry Davy\n");
        }
        else if(a == 20) 
        {
            printf("Name: Calcium\n");
            printf("Symbol: Ca\n");
            printf("Atomic Number: 20\n");
            printf("Electronic Configuration: [Ar] 4s^2\n");
            printf("Discovered By: Humphry Davy\n");
        }
        else if(a == 21) 
        {
            printf("Name: Scandium\n");
            printf("Symbol: Sc\n");
            printf("Atomic Number: 21\n");
            printf("Electronic Configuration: [Ar] 3d^1 4s^2\n");
            printf("Discovered By: Lars Fredrik Nilson\n");
        }
        else if(a == 22) 
        {
            printf("Name: Titanium\n");
            printf("Symbol: Ti\n");
            printf("Atomic Number: 22\n");
            printf("Electronic Configuration: [Ar] 3d^2 4s^2\n");
            printf("Discovered By: William Gregor\n");
        }
        else if(a == 23) 
        {
            printf("Name: Vanadium\n");
            printf("Symbol: V\n");
            printf("Atomic Number: 23\n");
            printf("Electronic Configuration: [Ar] 3d^3 4s^2\n");
            printf("Discovered By: Andrés Manuel del Río\n");
        }
        else if(a == 24) 
        {
            printf("Name: Chromium\n");
            printf("Symbol: Cr\n");
            printf("Atomic Number: 24\n");
            printf("Electronic Configuration: [Ar] 3d^5 4s^1\n");
            printf("Discovered By: Louis Nicolas Vauquelin\n");
        }
        else if(a == 25) 
        {
            printf("Name: Manganese\n");
            printf("Symbol: Mn\n");
            printf("Atomic Number: 25\n");
            printf("Electronic Configuration: [Ar] 3d^5 4s^2\n");
            printf("Discovered By: Johan Gottlieb Gahn\n");
        }
        else if(a == 26) 
        {
            printf("Name: Iron\n");
            printf("Symbol: Fe\n");
            printf("Atomic Number: 26\n");
            printf("Electronic Configuration: [Ar] 3d^6 4s^2\n");
            printf("Discovered By: Ancient\n");
        }
        else if(a == 27)
        {
            printf("Name: Cobalt\n");
            printf("Symbol: Co\n");
            printf("Atomic Number: 27\n");
            printf("Electronic Configuration: [Ar] 3d^7 4s^2\n");
            printf("Discovered By: Ancient\n");
        }
        else if(a == 28) 
        {
            printf("Name: Nickel\n");
            printf("Symbol: Ni\n");
            printf("Atomic Number: 28\n");
            printf("Electronic Configuration: [Ar] 3d^8 4s^2\n");
            printf("Discovered By: Axel Fredrik Cronstedt\n");
        }
        else if(a == 29) 
        {
            printf("Name: Copper\n");
            printf("Symbol: Cu\n");
            printf("Atomic Number: 29\n");
            printf("Electronic Configuration: [Ar] 3d^10 4s^1\n");
            printf("Discovered By: Ancient\n");
        }
        else if(a == 30) 
        {
            printf("Name: Zinc\n");
            printf("Symbol: Zn\n");
            printf("Atomic Number: 30\n");
            printf("Electronic Configuration: [Ar] 3d^10 4s^2\n");
            printf("Discovered By: Andreas Sigismund Marggraf\n");
        }
        else if(a == 31) 
        {
            printf("Name: Gallium\n");
            printf("Symbol: Ga\n");
            printf("Atomic Number: 31\n");
            printf("Electronic Configuration: [Ar] 3d^10 4s^2 4p^1\n");
            printf("Discovered By: Lecoq de Boisbaudran\n");
        }
        else if(a == 32) 
        {
            printf("Name: Germanium\n");
            printf("Symbol: Ge\n");
            printf("Atomic Number: 32\n");
            printf("Electronic Configuration: [Ar] 3d^10 4s^2 4p^2\n");
            printf("Discovered By: Clemens Winkler\n");
        }
        else if(a == 33) 
        {
            printf("Name: Arsenic\n");
            printf("Symbol: As\n");
            printf("Atomic Number: 33\n");
            printf("Electronic Configuration: [Ar] 3d^10 4s^2 4p^3\n");
            printf("Discovered By: Albertus Magnus\n");
        }
        else if(a == 34)
        {
            printf("Name: Selenium\n");
            printf("Symbol: Se\n");
            printf("Atomic Number: 34\n");
            printf("Electronic Configuration: [Ar] 3d^10 4s^2 4p^4\n");
            printf("Discovered By: Jöns Jacob Berzelius\n");
        }
        else if(a == 35)
        {
            printf("Name: Bromine\n");
            printf("Symbol: Br\n");
            printf("Atomic Number: 35\n");
            printf("Electronic Configuration: [Ar] 3d^10 4s^2 4p^5\n");
            printf("Discovered By: Antoine Jérôme Balard\n");
        }
        else if(a == 36) 
        {
            printf("Name: Krypton\n");
            printf("Symbol: Kr\n");
            printf("Atomic Number: 36\n");
            printf("Electronic Configuration: [Ar] 3d^10 4s^2 4p^6\n");
            printf("Discovered By: William Ramsay, Morris Travers\n");
        }
        else if(a == 37)
        {
            printf("Name: Rubidium\n");
            printf("Symbol: Rb\n");
            printf("Atomic Number: 37\n");
            printf("Electronic Configuration: [Kr] 5s^1\n");
            printf("Discovered By: Robert Bunsen, Gustav Kirchhoff\n");
        }
        else if(a == 38)
        {
            printf("Name: Strontium\n");
            printf("Symbol: Sr\n");
            printf("Atomic Number: 38\n");
            printf("Electronic Configuration: [Kr] 5s^2\n");
            printf("Discovered By: Adair Crawford, William Cruickshank\n");
        }
        else if(a == 39) 
        {
            printf("Name: Yttrium\n");
            printf("Symbol: Y\n");
            printf("Atomic Number: 39\n");
            printf("Electronic Configuration: [Kr] 4d^1 5s^2\n");
            printf("Discovered By: Johan Gadolin\n");
        }
        else if(a == 40) 
        {
            printf("Name: Zirconium\n");
            printf("Symbol: Zr\n");
            printf("Atomic Number: 40\n");
            printf("Electronic Configuration: [Kr] 4d^2 5s^2\n");
            printf("Discovered By: Martin Heinrich Klaproth\n");
        }
        else if(a == 41) 
        {
            printf("Name: Niobium\n");
            printf("Symbol: Nb\n");
            printf("Atomic Number: 41\n");
            printf("Electronic Configuration: [Kr] 4d^4 5s^1\n");
            printf("Discovered By: Charles Hatchett\n");
        }
        else if(a == 42) 
        {
            printf("Name: Molybdenum\n");
            printf("Symbol: Mo\n");
            printf("Atomic Number: 42\n");
            printf("Electronic Configuration: [Kr] 4d^5 5s^1\n");
            printf("Discovered By: Carl Wilhelm Scheele\n");
        }
        else if(a == 43)
        {
            printf("Name: Technetium\n");
            printf("Symbol: Tc\n");
            printf("Atomic Number: 43\n");
            printf("Electronic Configuration: [Kr] 4d^5 5s^2\n");
            printf("Discovered By: Carlo Perrier, Emilio Segrè\n");
        }
        else if(a == 44) 
        {
            printf("Name: Ruthenium\n");
            printf("Symbol: Ru\n");
            printf("Atomic Number: 44\n");
            printf("Electronic Configuration: [Kr] 4d^7 5s^1\n");
            printf("Discovered By: Karl Ernst Claus\n");
        }
        else if(a == 45) 
        {
            printf("Name: Rhodium\n");
            printf("Symbol: Rh\n");
            printf("Atomic Number: 45\n");
            printf("Electronic Configuration: [Kr] 4d^8 5s^1\n");
            printf("Discovered By: William Hyde Wollaston\n");
        }
        else if(a == 46) 
        {
            printf("Name: Palladium\n");
            printf("Symbol: Pd\n");
            printf("Atomic Number: 46\n");
            printf("Electronic Configuration: [Kr] 4d^10\n");
            printf("Discovered By: William Hyde Wollaston\n");
        }
        else if(a == 47)
        {
            printf("Name: Silver\n");
            printf("Symbol: Ag\n");
            printf("Atomic Number: 47\n");
            printf("Electronic Configuration: [Kr] 4d^10 5s^1\n");
            printf("Discovered By: Ancient\n");
        }
        else if(a == 48) 
        {
            printf("Name: Cadmium\n");
            printf("Symbol: Cd\n");
            printf("Atomic Number: 48\n");
            printf("Electronic Configuration: [Kr] 4d^10 5s^2\n");
            printf("Discovered By: Karl Samuel Leberecht Hermann\n");
        }
        else if(a == 49) 
        {
            printf("Name: Indium\n");
            printf("Symbol: In\n");
            printf("Atomic Number: 49\n");
            printf("Electronic Configuration: [Kr] 4d^10 5s^2 5p^1\n");
            printf("Discovered By: Ferdinand Reich, Hieronymous Theodor Richter\n");
        }
        else if(a == 50) 
        {
            printf("Name: Tin\n");
            printf("Symbol: Sn\n");
            printf("Atomic Number: 50\n");
            printf("Electronic Configuration: [Kr] 4d^10 5s^2 5p^2\n");
            printf("Discovered By: Ancient\n");
        }
        else if(a == 51) 
        {
            printf("Name: Antimony\n");
            printf("Symbol: Sb\n");
            printf("Atomic Number: 51\n");
            printf("Electronic Configuration: [Kr] 4d^10 5s^2 5p^3\n");
            printf("Discovered By: Ancient\n");
        }
        else if(a == 52) 
        {
            printf("Name: Tellurium\n");
            printf("Symbol: Te\n");
            printf("Atomic Number: 52\n");
            printf("Electronic Configuration: [Kr] 4d^10 5s^2 5p^4\n");
            printf("Discovered By: Franz-Joseph Müller von Reichenstein\n");
        }
        else if(a == 53) 
        {
            printf("Name: Iodine\n");
            printf("Symbol: I\n");
            printf("Atomic Number: 53\n");
            printf("Electronic Configuration: [Kr] 4d^10 5s^2 5p^5\n");
            printf("Discovered By: Bernard Courtois\n");
        }
        else if(a == 54) 
        {
            printf("Name: Xenon\n");
            printf("Symbol: Xe\n");
            printf("Atomic Number: 54\n");
            printf("Electronic Configuration: [Kr] 4d^10 5s^2 5p^6\n");
            printf("Discovered By: William Ramsay, Morris Travers\n");
        }
        else if(a == 55) 
        {
            printf("Name: Cesium\n");
            printf("Symbol: Cs\n");
            printf("Atomic Number: 55\n");
            printf("Electronic Configuration: [Xe] 6s^1\n");
            printf("Discovered By: Robert Bunsen, Gustav Kirchhoff\n");
        }
        else if(a == 56) 
        {
            printf("Name: Barium\n");
            printf("Symbol: Ba\n");
            printf("Atomic Number: 56\n");
            printf("Electronic Configuration: [Xe] 6s^2\n");
            printf("Discovered By: Carl Wilhelm Scheele\n");
        }
        else if(a == 57)
        {
            printf("Name: Lanthanum\n");
            printf("Symbol: La\n");
            printf("Atomic Number: 57\n");
            printf("Electronic Configuration: [Xe] 5d^1 6s^2\n");
            printf("Discovered By: Carl Gustaf Mosander\n");
        }
        else if(a == 58) 
        {
            printf("Name: Cerium\n");
            printf("Symbol: Ce\n");
            printf("Atomic Number: 58\n");
            printf("Electronic Configuration: [Xe] 4f^1 5d^1 6s^2\n");
            printf("Discovered By: Martin Heinrich Klaproth, Jöns Jakob Berzelius\n");
        }
        else if(a == 59) 
        {
            printf("Name: Praseodymium\n");
            printf("Symbol: Pr\n");
            printf("Atomic Number: 59\n");
            printf("Electronic Configuration: [Xe] 4f^3 6s^2\n");
            printf("Discovered By: Carl Auer von Welsbach\n");
        }
        else if(a == 60) 
        {
            printf("Name: Neodymium\n");
            printf("Symbol: Nd\n");
            printf("Atomic Number: 60\n");
            printf("Electronic Configuration: [Xe] 4f^4 6s^2\n");
            printf("Discovered By: Carl Auer von Welsbach\n");
        }
        else if(a == 61) 
        {
            printf("Name: Promethium\n");
            printf("Symbol: Pm\n");
            printf("Atomic Number: 61\n");
            printf("Electronic Configuration: [Xe] 4f^5 6s^2\n");
            printf("Discovered By: Chien Shiung Wu\n");
        }
        else if(a == 62)
        {
            printf("Name: Samarium\n");
            printf("Symbol: Sm\n");
            printf("Atomic Number: 62\n");
            printf("Electronic Configuration: [Xe] 4f^6 6s^2\n");
            printf("Discovered By: Paul Émile Lecoq de Boisbaudran\n");
        }
        else if(a == 63)
        {
            printf("Name: Europium\n");
            printf("Symbol: Eu\n");
            printf("Atomic Number: 63\n");
            printf("Electronic Configuration: [Xe] 4f^7 6s^2\n");
            printf("Discovered By: Eugène-Anatole Demarçay\n");
        }
        else if(a == 64) 
        {
            printf("Name: Gadolinium\n");
            printf("Symbol: Gd\n");
            printf("Atomic Number: 64\n");
            printf("Electronic Configuration: [Xe] 4f^7 5d^1 6s^2\n");
            printf("Discovered By: Jean Charles Galissard de Marignac\n");
        }
        else if(a == 65) 
        {
            printf("Name: Terbium\n");
            printf("Symbol: Tb\n");
            printf("Atomic Number: 65\n");
            printf("Electronic Configuration: [Xe] 4f^9 6s^2\n");
            printf("Discovered By: Carl Gustaf Mosander\n");
        }
        else if(a == 66) 
        {
            printf("Name: Dysprosium\n");
            printf("Symbol: Dy\n");
            printf("Atomic Number: 66\n");
            printf("Electronic Configuration: [Xe] 4f^10 6s^2\n");
            printf("Discovered By: Lecoq de Boisbaudran\n");
        }
        else if(a == 67) 
        {
            printf("Name: Holmium\n");
            printf("Symbol: Ho\n");
            printf("Atomic Number: 67\n");
            printf("Electronic Configuration: [Xe] 4f^11 6s^2\n");
            printf("Discovered By: Per Teodor Cleve\n");
        }
        else if(a == 68) 
        {
            printf("Name: Erbium\n");
            printf("Symbol: Er\n");
            printf("Atomic Number: 68\n");
            printf("Electronic Configuration: [Xe] 4f^12 6s^2\n");
            printf("Discovered By: Carl Gustaf Mosander\n");
        }
        else if(a == 69) 
        {
            printf("Name: Thulium\n");
            printf("Symbol: Tm\n");
            printf("Atomic Number: 69\n");
            printf("Electronic Configuration: [Xe] 4f^13 6s^2\n");
            printf("Discovered By: Per Teodor Cleve\n");
        }
        else if(a == 70) 
        {
            printf("Name: Ytterbium\n");
            printf("Symbol: Yb\n");
            printf("Atomic Number: 70\n");
            printf("Electronic Configuration: [Xe] 4f^14 6s^2\n");
            printf("Discovered By: Jean Charles Galissard de Marignac\n");
        }
        else if(a == 71)
        {
            printf("Name: Lutetium\n");
            printf("Symbol: Lu\n");
            printf("Atomic Number: 71\n");
            printf("Electronic Configuration: [Xe] 4f^14 5d^1 6s^2\n");
            printf("Discovered By: Georges Urbain, Carl Auer von Welsbach\n");
        }
        else if(a == 72)
        {
            printf("Name: Hafnium\n");
            printf("Symbol: Hf\n");
            printf("Atomic Number: 72\n");
            printf("Electronic Configuration: [Xe] 4f^14 5d^2 6s^2\n");
            printf("Discovered By: Dirk Coster, George de Hevesy\n");
        }
        else if(a == 73) 
        {
            printf("Name: Tantalum\n");
            printf("Symbol: Ta\n");
            printf("Atomic Number: 73\n");
            printf("Electronic Configuration: [Xe] 4f^14 5d^3 6s^2\n");
            printf("Discovered By: Anders Gustaf Ekeberg\n");
        }
        else if(a == 74)
        {
            printf("Name: Tungsten\n");
            printf("Symbol: W\n");
            printf("Atomic Number: 74\n");
            printf("Electronic Configuration: [Xe] 4f^14 5d^4 6s^2\n");
            printf("Discovered By: Fausto and Juan José de Elhuyar\n");
        }
        else if(a == 75)
        {
            printf("Name: Rhenium\n");
            printf("Symbol: Re\n");
            printf("Atomic Number: 75\n");
            printf("Electronic Configuration: [Xe] 4f^14 5d^5 6s^2\n");
            printf("Discovered By: Masataka Ogawa, Nils Erik Nordenskiöld\n");
        }
        else if(a == 76) 
        {
            printf("Name: Osmium\n");
            printf("Symbol: Os\n");
            printf("Atomic Number: 76\n");
            printf("Electronic Configuration: [Xe] 4f^14 5d^6 6s^2\n");
            printf("Discovered By: Smithson Tennant\n");
        }
        else if(a == 77) 
        {
            printf("Name: Iridium\n");
            printf("Symbol: Ir\n");
            printf("Atomic Number: 77\n");
            printf("Electronic Configuration: [Xe] 4f^14 5d^7 6s^2\n");
            printf("Discovered By: Smithson Tennant\n");
        }
        else if(a == 78) 
        {
            printf("Name: Platinum\n");
            printf("Symbol: Pt\n");
            printf("Atomic Number: 78\n");
            printf("Electronic Configuration: [Xe] 4f^14 5d^9 6s^1\n");
            printf("Discovered By: Antonio de Ulloa\n");
        }
        else if(a == 79) 
        {
            printf("Name: Gold\n");
            printf("Symbol: Au\n");
            printf("Atomic Number: 79\n");
            printf("Electronic Configuration: [Xe] 4f^14 5d^10 6s^1\n");
            printf("Discovered By: Ancient\n");
        }
        else if(a == 80)
        {
            printf("Name: Mercury\n");
            printf("Symbol: Hg\n");
            printf("Atomic Number: 80\n");
            printf("Electronic Configuration: [Xe] 4f^14 5d^10 6s^2\n");
            printf("Discovered By: Ancient\n");
        }
        else if(a == 81) 
        {
            printf("Name: Thallium\n");
            printf("Symbol: Tl\n");
            printf("Atomic Number: 81\n");
            printf("Electronic Configuration: [Xe] 4f^14 5d^10 6s^2 6p^1\n");
            printf("Discovered By: William Crookes\n");
        }
        else if(a == 82) 
        {
            printf("Name: Lead\n");
            printf("Symbol: Pb\n");
            printf("Atomic Number: 82\n");
            printf("Electronic Configuration: [Xe] 4f^14 5d^10 6s^2 6p^2\n");
            printf("Discovered By: Ancient\n");
        }
        else if(a == 83) 
        {
            printf("Name: Bismuth\n");
            printf("Symbol: Bi\n");
            printf("Atomic Number: 83\n");
            printf("Electronic Configuration: [Xe] 4f^14 5d^10 6s^2 6p^3\n");
            printf("Discovered By: Claude François Geoffroy\n");
        }
        else if(a == 84) 
        {
            printf("Name: Polonium\n");
            printf("Symbol: Po\n");
            printf("Atomic Number: 84\n");
            printf("Electronic Configuration: [Xe] 4f^14 5d^10 6s^2 6p^4\n");
            printf("Discovered By: Marie Curie, Pierre Curie\n");
        }
        else if(a == 85)
        {
            printf("Name: Astatine\n");
            printf("Symbol: At\n");
            printf("Atomic Number: 85\n");
            printf("Electronic Configuration: [Xe] 4f^14 5d^10 6s^2 6p^5\n");
            printf("Discovered By: Dale R. Corson, Kenneth Ross MacKenzie, Emilio Segrè\n");
        }
        else if(a == 86)
        {
            printf("Name: Radon\n");
            printf("Symbol: Rn\n");
            printf("Atomic Number: 86\n");
            printf("Electronic Configuration: [Xe] 4f^14 5d^10 6s^2 6p^6\n");
            printf("Discovered By: Friedrich Ernst Dorn\n");
        }
        else if(a == 87) 
        {
            printf("Name: Francium\n");
            printf("Symbol: Fr\n");
            printf("Atomic Number: 87\n");
            printf("Electronic Configuration: [Rn] 7s^1\n");
            printf("Discovered By: Marguerite Perey\n");
        }
        else if(a == 88) 
        {
            printf("Name: Radium\n");
            printf("Symbol: Ra\n");
            printf("Atomic Number: 88\n");
            printf("Electronic Configuration: [Rn] 7s^2\n");
            printf("Discovered By: Marie Curie, Pierre Curie\n");
        }
        else if(a == 89) 
        {
            printf("Name: Actinium\n");
            printf("Symbol: Ac\n");
            printf("Atomic Number: 89\n");
            printf("Electronic Configuration: [Rn] 6d^1 7s^2\n");
            printf("Discovered By: Friedrich Oskar Giesel\n");
        }
        else if(a == 90)
        {
            printf("Name: Thorium\n");
            printf("Symbol: Th\n");
            printf("Atomic Number: 90\n");
            printf("Electronic Configuration: [Rn] 6d^2 7s^2\n");
            printf("Discovered By: Jöns Jacob Berzelius\n");
        }
        else if(a == 91) 
        {
            printf("Name: Protactinium\n");
            printf("Symbol: Pa\n");
            printf("Atomic Number: 91\n");
            printf("Electronic Configuration: [Rn] 5f^2 6d^1 7s^2\n");
            printf("Discovered By: William Crookes\n");
        }
        else if(a == 92) 
        {
            printf("Name: Uranium\n");
            printf("Symbol: U\n");
            printf("Atomic Number: 92\n");
            printf("Electronic Configuration: [Rn] 5f^3 6d^1 7s^2\n");
            printf("Discovered By: Martin Heinrich Klaproth\n");
        }
        else if(a == 93) 
        {
            printf("Name: Neptunium\n");
            printf("Symbol: Np\n");
            printf("Atomic Number: 93\n");
            printf("Electronic Configuration: [Rn] 5f^4 6d^1 7s^2\n");
            printf("Discovered By: Edwin McMillan, Philip Abelson\n");
        }
        else if(a == 94) 
        {
            printf("Name: Plutonium\n");
            printf("Symbol: Pu\n");
            printf("Atomic Number: 94\n");
            printf("Electronic Configuration: [Rn] 5f^6 7s^2\n");
            printf("Discovered By: Glenn T. Seaborg, Arthur C. Wahl\n");
        }
        else if(a == 95)
        {
            printf("Name: Americium\n");
            printf("Symbol: Am\n");
            printf("Atomic Number: 95\n");
            printf("Electronic Configuration: [Rn] 5f^7 7s^2\n");
            printf("Discovered By: Glenn T. Seaborg, Ralph A. James, Leon O. Morgan\n");
        }
        else if(a == 96)
        {
            printf("Name: Curium\n");
            printf("Symbol: Cm\n");
            printf("Atomic Number: 96\n");
            printf("Electronic Configuration: [Rn] 5f^7 6d^1 7s^2\n");
            printf("Discovered By: Glenn T. Seaborg, Ralph A. James, Albert Ghiorso\n");
        }
        else if(a == 97)
        {
            printf("Name: Berkelium\n");
            printf("Symbol: Bk\n");
            printf("Atomic Number: 97\n");
            printf("Electronic Configuration: [Rn] 5f^9 7s^2\n");
            printf("Discovered By: Glenn T. Seaborg, Albert Ghiorso, Stanley G. Thompson\n");
        }
        else if(a == 98) 
        {
            printf("Name: Californium\n");
            printf("Symbol: Cf\n");
            printf("Atomic Number: 98\n");
            printf("Electronic Configuration: [Rn] 5f^10 7s^2\n");
            printf("Discovered By: Glenn T. Seaborg, Albert Ghiorso, Stanley G. Thompson\n");
        }
        else if(a == 99) 
        {
            printf("Name: Einsteinium\n");
            printf("Symbol: Es\n");
            printf("Atomic Number: 99\n");
            printf("Electronic Configuration: [Rn] 5f^11 7s^2\n");
            printf("Discovered By: Albert Ghiorso\n");
        }
        else if(a == 100) 
        {
            printf("Name: Fermium\n");
            printf("Symbol: Fm\n");
            printf("Atomic Number: 100\n");
            printf("Electronic Configuration: [Rn] 5f^12 7s^2\n");
            printf("Discovered By: Albert Ghiorso\n");
        }
        else if(a == 101)
        {
            printf("Name: Mendelevium\n");
            printf("Symbol: Md\n");
            printf("Atomic Number: 101\n");
            printf("Electronic Configuration: [Rn] 5f^13 7s^2\n");
            printf("Discovered By: Albert Ghiorso\n");
        }
        else if(a == 102) 
        {
            printf("Name: Nobelium\n");
            printf("Symbol: No\n");
            printf("Atomic Number: 102\n");
            printf("Electronic Configuration: [Rn] 5f^14 7s^2\n");
            printf("Discovered By: Albert Ghiorso\n");
        }
        else if(a == 103) 
        {
            printf("Name: Lawrencium\n");
            printf("Symbol: Lr\n");
            printf("Atomic Number: 103\n");
            printf("Electronic Configuration: [Rn] 5f^14 7s^2 7p^1\n");
            printf("Discovered By: Albert Ghiorso\n");
        }
        else if(a == 104)
        {
            printf("Name: Rutherfordium\n");
            printf("Symbol: Rf\n");
            printf("Atomic Number: 104\n");
            printf("Electronic Configuration: [Rn] 5f^14 6d^2 7s^2\n");
            printf("Discovered By: Joint Institute for Nuclear Research, Lawrence Berkeley National Laboratory\n");
        }
        else if(a == 105)
        {
            printf("Name: Dubnium\n");
            printf("Symbol: Db\n");
            printf("Atomic Number: 105\n");
            printf("Electronic Configuration: [Rn] 5f^14 6d^3 7s^2\n");
            printf("Discovered By: Joint Institute for Nuclear Research\n");
        }
        else if(a == 106) 
        {
            printf("Name: Seaborgium\n");
            printf("Symbol: Sg\n");
            printf("Atomic Number: 106\n");
            printf("Electronic Configuration: [Rn] 5f^14 6d^4 7s^2\n");
            printf("Discovered By: Lawrence Berkeley National Laboratory\n");
        }
        else if(a == 107) 
        {
            printf("Name: Bohrium\n");
            printf("Symbol: Bh\n");
            printf("Atomic Number: 107\n");
            printf("Electronic Configuration: [Rn] 5f^14 6d^5 7s^2\n");
            printf("Discovered By: GSI Helmholtz Centre for Heavy Ion Research\n");
        }
        else if(a == 108) 
        {
            printf("Name: Hassium\n");
            printf("Symbol: Hs\n");
            printf("Atomic Number: 108\n");
            printf("Electronic Configuration: [Rn] 5f^14 6d^6 7s^2\n");
            printf("Discovered By: GSI Helmholtz Centre for Heavy Ion Research\n");
        }
        else if(a == 109) 
        {
            printf("Name: Meitnerium\n");
            printf("Symbol: Mt\n");
            printf("Atomic Number: 109\n");
            printf("Electronic Configuration: [Rn] 5f^14 6d^7 7s^2\n");
            printf("Discovered By: GSI Helmholtz Centre for Heavy Ion Research\n");
        }
        else if(a == 110) 
        {
            printf("Name: Darmstadtium\n");
            printf("Symbol: Ds\n");
            printf("Atomic Number: 110\n");
            printf("Electronic Configuration: [Rn] 5f^14 6d^9 7s^1\n");
            printf("Discovered By: GSI Helmholtz Centre for Heavy Ion Research\n");
        }
        else if(a == 111) 
        {
            printf("Name: Roentgenium\n");
            printf("Symbol: Rg\n");
            printf("Atomic Number: 111\n");
            printf("Electronic Configuration: [Rn] 5f^14 6d^10 7s^1\n");
            printf("Discovered By: GSI Helmholtz Centre for Heavy Ion Research\n");
        }
        else if(a == 112)
        {
            printf("Name: Copernicium\n");
            printf("Symbol: Cn\n");
            printf("Atomic Number: 112\n");
            printf("Electronic Configuration: [Rn] 5f^14 6d^10 7s^2\n");
            printf("Discovered By: GSI Helmholtz Centre for Heavy Ion Research\n");
        }
        else if(a == 113) 
        {
            printf("Name: Nihonium\n");
            printf("Symbol: Nh\n");
            printf("Atomic Number: 113\n");
            printf("Electronic Configuration: [Rn] 5f^14 6d^10 7s^2 7p^1\n");
            printf("Discovered By: Riken\n");
        }
        else
        {
            printf("Data not found\n");
        }
        
        printf("\nEnter the atomic number of the element to be searched:\n");
        scanf("%d",&a);
    }
    printf("> Periodic Table closed\n");

    return 0;
}