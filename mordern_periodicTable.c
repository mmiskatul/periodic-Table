#include<stdio.h>
int main(){
    int n,m,atomicNumber,Exit,Exi;
    printf("Wellcome to morden periodic table\n\n");
    printf(">enter 1 to know about the Element \n\n");
    printf(">Enter 2 to close the periodic table \n\n");
    printf("ENTER\n");
    scanf("%d",&n);
    if(n==1){
        printf(">Press 3 to Search the Element by atomic number \n\n");
        printf("ENTER\n");
        scanf("%d",&m);
        if(m==3){
            printf("Enter the atomic number  the element to be searched :");
            scanf("%d",&atomicNumber);
              if (atomicNumber == 1) {
        printf("Name: Hydrogen\nSymbol: H\nAtomic Number: 1\nElectronic Configuration: 1s^1\nDiscovered by: Henry Cavendish\nCharge: +1\n");
    } else if (atomicNumber == 2) {
        printf("Name: Helium\nSymbol: He\nAtomic Number: 2\nElectronic Configuration: 1s^2\nDiscovered by: William Ramsay\nCharge: 0\n");
    } else if (atomicNumber == 3) {
        printf("Name: Lithium\nSymbol: Li\nAtomic Number: 3\nElectronic Configuration: 1s^2 2s^1\nDiscovered by: Johan August Arfwedson\nCharge: +1\n");
    } else if (atomicNumber == 4) {
        printf("Name: Beryllium\nSymbol: Be\nAtomic Number: 4\nElectronic Configuration: 1s^2 2s^2\nDiscovered by: Nicolas-Louis Vauquelin\nCharge: +2\n");
    } else if (atomicNumber == 5) {
        printf("Name: Boron\nSymbol: B\nAtomic Number: 5\nElectronic Configuration: 1s^2 2s^2 2p^1\nDiscovered by: Joseph Louis Gay-Lussac\nCharge: +3\n");
    } else if (atomicNumber == 6) {
        printf("Name: Carbon\nSymbol: C\nAtomic Number: 6\nElectronic Configuration: 1s^2 2s^2 2p^2\nDiscovered by: Ancient times\nCharge: +4 or -4 (varies)\n");
    } else if (atomicNumber == 7) {
        printf("Name: Nitrogen\nSymbol: N\nAtomic Number: 7\nElectronic Configuration: 1s^2 2s^2 2p^3\nDiscovered by: Daniel Rutherford\nCharge: -3\n");
    } else if (atomicNumber == 8) {
        printf("Name: Oxygen\nSymbol: O\nAtomic Number: 8\nElectronic Configuration: 1s^2 2s^2 2p^4\nDiscovered by: Joseph Priestley\nCharge: -2\n");
    } else if (atomicNumber == 9) {
        printf("Name: Fluorine\nSymbol: F\nAtomic Number: 9\nElectronic Configuration: 1s^2 2s^2 2p^5\nDiscovered by: Henri Moissan\nCharge: -1\n");
    } else if (atomicNumber == 10) {
        printf("Name: Neon\nSymbol: Ne\nAtomic Number: 10\nElectronic Configuration: 1s^2 2s^2 2p^6\nDiscovered by: William Ramsay\nCharge: 0\n");
    }
     else if (atomicNumber == 11) {
        printf("Name: Sodium\nSymbol: Na\nAtomic Number: 11\nElectronic Configuration: 1s^2 2s^2 2p^6 3s^1\nDiscovered by: Humphry Davy\nCharge: +1\n");
    } else if (atomicNumber == 12) {
        printf("Name: Magnesium\nSymbol: Mg\nAtomic Number: 12\nElectronic Configuration: 1s^2 2s^2 2p^6 3s^2\nDiscovered by: Joseph Black\nCharge: +2\n");
    } else if (atomicNumber == 13) {
        printf("Name: Aluminum\nSymbol: Al\nAtomic Number: 13\nElectronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^1\nDiscovered by: Hans Christian Oersted\nCharge: +3\n");
    } else if (atomicNumber == 14) {
        printf("Name: Silicon\nSymbol: Si\nAtomic Number: 14\nElectronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^2\nDiscovered by: Jöns Jacob Berzelius\nCharge: +4\n");
    } else if (atomicNumber == 15) {
        printf("Name: Phosphorus\nSymbol: P\nAtomic Number: 15\nElectronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^3\nDiscovered by: Hennig Brand\nCharge: -3\n");
    } else if (atomicNumber == 16) {
        printf("Name: Sulfur\nSymbol: S\nAtomic Number: 16\nElectronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^4\nDiscovered by: Ancient times\nCharge: -2\n");
    } else if (atomicNumber == 17) {
        printf("Name: Chlorine\nSymbol: Cl\nAtomic Number: 17\nElectronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^5\nDiscovered by: Humphry Davy\nCharge: -1\n");
    } else if (atomicNumber == 18) {
        printf("Name: Argon\nSymbol: Ar\nAtomic Number: 18\nElectronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6\nDiscovered by: Lord Rayleigh and William Ramsay\nCharge: 0\n");
    } else if (atomicNumber == 19) {
        printf("Name: Potassium\nSymbol: K\nAtomic Number: 19\nElectronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^1\nDiscovered by: Humphry Davy\nCharge: +1\n");
    } else if (atomicNumber == 20) {
        printf("Name: Calcium\nSymbol: Ca\nAtomic Number: 20\nElectronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2\nDiscovered by: Humphry Davy\nCharge: +2\n");
    } else if (atomicNumber == 21) {
        printf("Name: Scandium\nSymbol: Sc\nAtomic Number: 21\nElectronic Configuration: [Ar] 3d^1 4s^2\nDiscovered by: Lars Fredrik Nilson\nCharge: +3\n");
    } else if (atomicNumber == 22) {
        printf("Name: Titanium\nSymbol: Ti\nAtomic Number: 22\nElectronic Configuration: [Ar] 3d^2 4s^2\nDiscovered by: William Gregor\nCharge: +4\n");
    } else if (atomicNumber == 23) {
        printf("Name: Vanadium\nSymbol: V\nAtomic Number: 23\nElectronic Configuration: [Ar] 3d^3 4s^2\nDiscovered by: Andres Manuel del Rio\nCharge: +5\n");
    } else if (atomicNumber == 24) {
        printf("Name: Chromium\nSymbol: Cr\nAtomic Number: 24\nElectronic Configuration: [Ar] 3d^5 4s^1\nDiscovered by: Louis Nicolas Vauquelin\nCharge: +6\n");
    } else if (atomicNumber == 25) {
        printf("Name: Manganese\nSymbol: Mn\nAtomic Number: 25\nElectronic Configuration: [Ar] 3d^5 4s^2\nDiscovered by: Johann Gottlieb Gahn\nCharge: +7\n");
    } else if (atomicNumber == 26) {
        printf("Name: Iron\nSymbol: Fe\nAtomic Number: 26\nElectronic Configuration: [Ar] 3d^6 4s^2\nDiscovered by: Ancient times\nCharge: +2 or +3\n");
    } else if (atomicNumber == 27) {
        printf("Name: Cobalt\nSymbol: Co\nAtomic Number: 27\nElectronic Configuration: [Ar] 3d^7 4s^2\nDiscovered by: Georg Brandt\nCharge: +2 or +3\n");
    } else if (atomicNumber == 28) {
        printf("Name: Nickel\nSymbol: Ni\nAtomic Number: 28\nElectronic Configuration: [Ar] 3d^8 4s^2\nDiscovered by: Axel Fredrik Cronstedt\nCharge: +2\n");
    } else if (atomicNumber == 29) {
        printf("Name: Copper\nSymbol: Cu\nAtomic Number: 29\nElectronic Configuration: [Ar] 3d^{10} 4s^1\nDiscovered by: Ancient times\nCharge: +1 or +2\n");
    } else if (atomicNumber == 30) {
        printf("Name: Zinc\nSymbol: Zn\nAtomic Number: 30\nElectronic Configuration: [Ar] 3d^{10} 4s^2\nDiscovered by: Ancient times\nCharge: +2\n");
    }
   else if (atomicNumber == 31) {
        printf("Name: Gallium\nSymbol: Ga\nAtomic Number: 31\nElectronic Configuration: [Ar] 3d^10 4s^2 4p^1\nDiscovered by: Paul Emile Lecoq de Boisbaudran\nCharge: +3\n");
    } else if (atomicNumber == 32) {
        printf("Name: Germanium\nSymbol: Ge\nAtomic Number: 32\nElectronic Configuration: [Ar] 3d^10 4s^2 4p^2\nDiscovered by: Clemens Winkler\nCharge: +4\n");
    } else if (atomicNumber == 33) {
        printf("Name: Arsenic\nSymbol: As\nAtomic Number: 33\nElectronic Configuration: [Ar] 3d^10 4s^2 4p^3\nDiscovered by: Albertus Magnus\nCharge: -3\n");
    } else if (atomicNumber == 34) {
        printf("Name: Selenium\nSymbol: Se\nAtomic Number: 34\nElectronic Configuration: [Ar] 3d^10 4s^2 4p^4\nDiscovered by: Jöns Jacob Berzelius\nCharge: -2\n");
    } else if (atomicNumber == 35) {
        printf("Name: Bromine\nSymbol: Br\nAtomic Number: 35\nElectronic Configuration: [Ar] 3d^10 4s^2 4p^5\nDiscovered by: Antoine Jérôme Balard\nCharge: -1\n");
    } else if (atomicNumber == 36) {
        printf("Name: Krypton\nSymbol: Kr\nAtomic Number: 36\nElectronic Configuration: [Ar] 3d^10 4s^2 4p^6\nDiscovered by: William Ramsay and Morris Travers\nCharge: 0\n");
    } else if (atomicNumber == 37) {
        printf("Name: Rubidium\nSymbol: Rb\nAtomic Number: 37\nElectronic Configuration: [Kr] 5s^1\nDiscovered by: Robert Bunsen and Gustav Kirchhoff\nCharge: +1\n");
    } else if (atomicNumber == 38) {
        printf("Name: Strontium\nSymbol: Sr\nAtomic Number: 38\nElectronic Configuration: [Kr] 5s^2\nDiscovered by: William Cruickshank\nCharge: +2\n");
    } else if (atomicNumber == 39) {
        printf("Name: Yttrium\nSymbol: Y\nAtomic Number: 39\nElectronic Configuration: [Kr] 4d^1 5s^2\nDiscovered by: Johan Gadolin\nCharge: +3\n");
    } else if (atomicNumber == 40) {
        printf("Name: Zirconium\nSymbol: Zr\nAtomic Number: 40\nElectronic Configuration: [Kr] 4d^2 5s^2\nDiscovered by: Martin Heinrich Klaproth\nCharge: +4\n");
    } else if (atomicNumber == 41) {
        printf("Name: Niobium\nSymbol: Nb\nAtomic Number: 41\nElectronic Configuration: [Kr] 4d^4 5s^1\nDiscovered by: Charles Hatchett\nCharge: +5\n");
    } else if (atomicNumber == 42) {
        printf("Name: Molybdenum\nSymbol: Mo\nAtomic Number: 42\nElectronic Configuration: [Kr] 4d^5 5s^1\nDiscovered by: Carl Wilhelm Scheele\nCharge: +6\n");
    } else if (atomicNumber == 43) {
        printf("Name: Technetium\nSymbol: Tc\nAtomic Number: 43\nElectronic Configuration: [Kr] 4d^5 5s^2\nDiscovered by: Carlo Perrier and Emilio Segrè\nCharge: +7\n");
    } else if (atomicNumber == 44) {
        printf("Name: Ruthenium\nSymbol: Ru\nAtomic Number: 44\nElectronic Configuration: [Kr] 4d^7 5s^1\nDiscovered by: Karl Ernst Claus\nCharge: +3\n");
    } else if (atomicNumber == 45) {
        printf("Name: Rhodium\nSymbol: Rh\nAtomic Number: 45\nElectronic Configuration: [Kr] 4d^8 5s^1\nDiscovered by: William Hyde Wollaston\nCharge: +3\n");
    } else if (atomicNumber == 46) {
        printf("Name: Palladium\nSymbol: Pd\nAtomic Number: 46\nElectronic Configuration: [Kr] 4d^10\nDiscovered by: William Hyde Wollaston\nCharge: +2\n");
    } else if (atomicNumber == 47) {
        printf("Name: Silver\nSymbol: Ag\nAtomic Number: 47\nElectronic Configuration: [Kr] 4d^10 5s^1\nDiscovered by: Ancient times\nCharge: +1\n");
    } else if (atomicNumber == 48) {
        printf("Name: Cadmium\nSymbol: Cd\nAtomic Number: 48\nElectronic Configuration: [Kr] 4d^10 5s^2\nDiscovered by: Friedrich Stromeyer\nCharge: +2\n");
    } else if (atomicNumber == 49) {
        printf("Name: Indium\nSymbol: In\nAtomic Number: 49\nElectronic Configuration: [Kr] 4d^10 5s^2 5p^1\nDiscovered by: Ferdinand Reich\nCharge: +3\n");
    } else if (atomicNumber == 50) {
        printf("Name: Tin\nSymbol: Sn\nAtomic Number: 50\nElectronic Configuration: [Kr] 4d^10 5s^2 5p^2\nDiscovered by: Ancient times\nCharge: +2 or +4\n");
    } else if (atomicNumber == 51) {
        printf("Name: Antimony\nSymbol: Sb\nAtomic Number: 51\nElectronic Configuration: [Kr] 4d^10 5s^2 5p^3\nDiscovered by: Ancient times\nCharge: +3 or +5\n");
    }
    else   if (atomicNumber == 52) {
        printf("Name: Tellurium\nSymbol: Te\nAtomic Number: 52\nElectronic Configuration: [Kr] 4d^10 5s^2 5p^4\nDiscovered by: Franz-Joseph Müller von Reichenstein\nCharge: -2\n");
    } else if (atomicNumber == 53) {
        printf("Name: Iodine\nSymbol: I\nAtomic Number: 53\nElectronic Configuration: [Kr] 4d^10 5s^2 5p^5\nDiscovered by: Bernard Courtois\nCharge: -1\n");
    } else if (atomicNumber == 54) {
        printf("Name: Xenon\nSymbol: Xe\nAtomic Number: 54\nElectronic Configuration: [Kr] 4d^10 5s^2 5p^6\nDiscovered by: William Ramsay and Morris Travers\nCharge: 0\n");
    } else if (atomicNumber == 55) {
        printf("Name: Cesium\nSymbol: Cs\nAtomic Number: 55\nElectronic Configuration: [Xe] 6s^1\nDiscovered by: Robert Bunsen and Gustav Kirchhoff\nCharge: +1\n");
    } else if (atomicNumber == 56) {
        printf("Name: Barium\nSymbol: Ba\nAtomic Number: 56\nElectronic Configuration: [Xe] 6s^2\nDiscovered by: Humphry Davy\nCharge: +2\n");
    } else if (atomicNumber == 57) {
        printf("Name: Lanthanum\nSymbol: La\nAtomic Number: 57\nElectronic Configuration: [Xe] 5d^1 6s^2\nDiscovered by: Carl Gustaf Mosander\nCharge: +3\n");
    } else if (atomicNumber == 58) {
        printf("Name: Cerium\nSymbol: Ce\nAtomic Number: 58\nElectronic Configuration: [Xe] 4f^1 5d^1 6s^2\nDiscovered by: Martin Heinrich Klaproth\nCharge: +3 or +4\n");
    } else if (atomicNumber == 59) {
        printf("Name: Praseodymium\nSymbol: Pr\nAtomic Number: 59\nElectronic Configuration: [Xe] 4f^3 6s^2\nDiscovered by: Carl Auer von Welsbach\nCharge: +3\n");
    } else if (atomicNumber == 60) {
        printf("Name: Neodymium\nSymbol: Nd\nAtomic Number: 60\nElectronic Configuration: [Xe] 4f^4 6s^2\nDiscovered by: Carl Auer von Welsbach\nCharge: +3\n");
    } else if (atomicNumber == 61) {
        printf("Name: Promethium\nSymbol: Pm\nAtomic Number: 61\nElectronic Configuration: [Xe] 4f^5 6s^2\nDiscovered by: Jacob A. Marinsky\nCharge: +3\n");
    } else if (atomicNumber == 62) {
        printf("Name: Samarium\nSymbol: Sm\nAtomic Number: 62\nElectronic Configuration: [Xe] 4f^6 6s^2\nDiscovered by: Paul Émile Lecoq de Boisbaudran\nCharge: +3\n");
    } else if (atomicNumber == 63) {
        printf("Name: Europium\nSymbol: Eu\nAtomic Number: 63\nElectronic Configuration: [Xe] 4f^7 6s^2\nDiscovered by: Eugène-Anatole Demarçay\nCharge: +2 or +3\n");
    } else if (atomicNumber == 64) {
        printf("Name: Gadolinium\nSymbol: Gd\nAtomic Number: 64\nElectronic Configuration: [Xe] 4f^7 5d^1 6s^2\nDiscovered by: Jean Charles Galissard de Marignac\nCharge: +3\n");
    } else if (atomicNumber == 65) {
        printf("Name: Terbium\nSymbol: Tb\nAtomic Number: 65\nElectronic Configuration: [Xe] 4f^9 6s^2\nDiscovered by: Carl Gustaf Mosander\nCharge: +3\n");
    } else if (atomicNumber == 66) {
        printf("Name: Dysprosium\nSymbol: Dy\nAtomic Number: 66\nElectronic Configuration: [Xe] 4f^10 6s^2\nDiscovered by: Paul Émile Lecoq de Boisbaudran\nCharge: +3\n");
    } else if (atomicNumber == 67) {
        printf("Name: Holmium\nSymbol: Ho\nAtomic Number: 67\nElectronic Configuration: [Xe] 4f^11 6s^2\nDiscovered by: Marc Delafontaine\nCharge: +3\n");
    } else if (atomicNumber == 68) {
        printf("Name: Erbium\nSymbol: Er\nAtomic Number: 68\nElectronic Configuration: [Xe] 4f^12 6s^2\nDiscovered by: Carl Gustaf Mosander\nCharge: +3\n");
    } else if (atomicNumber == 69) {
        printf("Name: Thulium\nSymbol: Tm\nAtomic Number: 69\nElectronic Configuration: [Xe] 4f^13 6s^2\nDiscovered by: Per Teodor Cleve\nCharge: +3\n");
    } else if (atomicNumber == 70) {
        printf("Name: Ytterbium\nSymbol: Yb\nAtomic Number: 70\nElectronic Configuration: [Xe] 4f^14 6s^2\nDiscovered by: Jean Charles Galissard de Marignac\nCharge: +2 or +3\n");
    }
    else if (atomicNumber == 71) {
        printf("Name: Lutetium\nSymbol: Lu\nAtomic Number: 71\nElectronic Configuration: [Xe] 4f^14 5d^1 6s^2\nDiscovered by: Georges Urbain\nCharge: +3\n");
    } else if (atomicNumber == 72) {
        printf("Name: Hafnium\nSymbol: Hf\nAtomic Number: 72\nElectronic Configuration: [Xe] 4f^14 5d^2 6s^2\nDiscovered by: Dirk Coster and George de Hevesy\nCharge: +4\n");
    } else if (atomicNumber == 73) {
        printf("Name: Tantalum\nSymbol: Ta\nAtomic Number: 73\nElectronic Configuration: [Xe] 4f^14 5d^3 6s^2\nDiscovered by: Anders Gustaf Ekeberg\nCharge: +5\n");
    } else if (atomicNumber == 74) {
        printf("Name: Tungsten\nSymbol: W\nAtomic Number: 74\nElectronic Configuration: [Xe] 4f^14 5d^4 6s^2\nDiscovered by: Carl Wilhelm Scheele\nCharge: +6\n");
    } else if (atomicNumber == 75) {
        printf("Name: Rhenium\nSymbol: Re\nAtomic Number: 75\nElectronic Configuration: [Xe] 4f^14 5d^5 6s^2\nDiscovered by: Masataka Ogawa\nCharge: +7\n");
    } else if (atomicNumber == 76) {
        printf("Name: Osmium\nSymbol: Os\nAtomic Number: 76\nElectronic Configuration: [Xe] 4f^14 5d^6 6s^2\nDiscovered by: Smithson Tennant\nCharge: +4\n");
    } else if (atomicNumber == 77) {
        printf("Name: Iridium\nSymbol: Ir\nAtomic Number: 77\nElectronic Configuration: [Xe] 4f^14 5d^7 6s^2\nDiscovered by: Smithson Tennant\nCharge: +3\n");
    } else if (atomicNumber == 78) {
        printf("Name: Platinum\nSymbol: Pt\nAtomic Number: 78\nElectronic Configuration: [Xe] 4f^14 5d^9 6s^1\nDiscovered by: Antonio de Ulloa\nCharge: +2 or +4\n");
    } else if (atomicNumber == 79) {
        printf("Name: Gold\nSymbol: Au\nAtomic Number: 79\nElectronic Configuration: [Xe] 4f^14 5d^10 6s^1\nDiscovered by: Ancient times\nCharge: +1 or +3\n");
    } else if (atomicNumber == 80) {
        printf("Name: Mercury\nSymbol: Hg\nAtomic Number: 80\nElectronic Configuration: [Xe] 4f^14 5d^10 6s^2\nDiscovered by: Ancient times\nCharge: +1 or +2\n");
    } else if (atomicNumber == 81) {
        printf("Name: Thallium\nSymbol: Tl\nAtomic Number: 81\nElectronic Configuration: [Xe] 4f^14 5d^10 6s^2 6p^1\nDiscovered by: William Crookes\nCharge: +1 or +3\n");
    } else if (atomicNumber == 82) {
        printf("Name: Lead\nSymbol: Pb\nAtomic Number: 82\nElectronic Configuration: [Xe] 4f^14 5d^10 6s^2 6p^2\nDiscovered by: Ancient times\nCharge: +2 or +4\n");
    } else if (atomicNumber == 83) {
        printf("Name: Bismuth\nSymbol: Bi\nAtomic Number: 83\nElectronic Configuration: [Xe] 4f^14 5d^10 6s^2 6p^3\nDiscovered by: Ancient times\nCharge: +3\n");
    } else if (atomicNumber == 84) {
        printf("Name: Polonium\nSymbol: Po\nAtomic Number: 84\nElectronic Configuration: [Xe] 4f^14 5d^10 6s^2 6p^4\nDiscovered by: Marie Curie and Pierre Curie\nCharge: +2 or +4\n");
    } else if (atomicNumber == 85) {
        printf("Name: Astatine\nSymbol: At\nAtomic Number: 85\nElectronic Configuration: [Xe] 4f^14 5d^10 6s^2 6p^5\nDiscovered by: Dale R. Corson, Kenneth Ross MacKenzie, Emilio Segrè\nCharge: -1 or +1\n");
    } else if (atomicNumber == 86) {
        printf("Name: Radon\nSymbol: Rn\nAtomic Number: 86\nElectronic Configuration: [Xe] 4f^14 5d^10 6s^2 6p^6\nDiscovered by: Friedrich Ernst Dorn\nCharge: 0\n");
    } else if (atomicNumber == 87) {
        printf("Name: Francium\nSymbol: Fr\nAtomic Number: 87\nElectronic Configuration: [Rn] 7s^1\nDiscovered by: Marguerite Perey\nCharge: +1\n");
    } else if (atomicNumber == 88) {
        printf("Name: Radium\nSymbol: Ra\nAtomic Number: 88\nElectronic Configuration: [Rn] 7s^2\nDiscovered by: Pierre Curie and Marie Curie\nCharge: +2\n");
    } else if (atomicNumber == 89) {
        printf("Name: Actinium\nSymbol: Ac\nAtomic Number: 89\nElectronic Configuration: [Rn] 6d^1 7s^2\nDiscovered by: Friedrich Oskar Giesel\nCharge: +3\n");
    } else if (atomicNumber == 90) {
        printf("Name: Thorium\nSymbol: Th\nAtomic Number: 90\nElectronic Configuration: [Rn] 6d^2 7s^2\nDiscovered by: Jöns Jacob Berzelius\nCharge: +4\n");
    }
    else  if (atomicNumber == 91) {
        printf("Name: Protactinium\nSymbol: Pa\nAtomic Number: 91\nElectronic Configuration: [Rn] 5f^2 6d^1 7s^2\nDiscovered by: Otto Hahn and Lise Meitner\nCharge: +5\n");
    } else if (atomicNumber == 92) {
        printf("Name: Uranium\nSymbol: U\nAtomic Number: 92\nElectronic Configuration: [Rn] 5f^3 6d^1 7s^2\nDiscovered by: Martin Heinrich Klaproth\nCharge: +6\n");
    } else if (atomicNumber == 93) {
        printf("Name: Neptunium\nSymbol: Np\nAtomic Number: 93\nElectronic Configuration: [Rn] 5f^4 6d^1 7s^2\nDiscovered by: Edwin McMillan and Philip H. Abelson\nCharge: +5\n");
    } else if (atomicNumber == 94) {
        printf("Name: Plutonium\nSymbol: Pu\nAtomic Number: 94\nElectronic Configuration: [Rn] 5f^6 7s^2\nDiscovered by: Glenn T. Seaborg\nCharge: +4\n");
    } else if (atomicNumber == 95) {
        printf("Name: Americium\nSymbol: Am\nAtomic Number: 95\nElectronic Configuration: [Rn] 5f^7 7s^2\nDiscovered by: Glenn T. Seaborg\nCharge: +3\n");
    } else if (atomicNumber == 96) {
        printf("Name: Curium\nSymbol: Cm\nAtomic Number: 96\nElectronic Configuration: [Rn] 5f^7 6d^1 7s^2\nDiscovered by: Glenn T. Seaborg\nCharge: +3\n");
    } else if (atomicNumber == 97) {
        printf("Name: Berkelium\nSymbol: Bk\nAtomic Number: 97\nElectronic Configuration: [Rn] 5f^9 7s^2\nDiscovered by: Glenn T. Seaborg\nCharge: +3\n");
    } else if (atomicNumber == 98) {
        printf("Name: Californium\nSymbol: Cf\nAtomic Number: 98\nElectronic Configuration: [Rn] 5f^10 7s^2\nDiscovered by: Glenn T. Seaborg\nCharge: +3\n");
    } else if (atomicNumber == 99) {
        printf("Name: Einsteinium\nSymbol: Es\nAtomic Number: 99\nElectronic Configuration: [Rn] 5f^11 7s^2\nDiscovered by: Albert Ghiorso\nCharge: +3\n");
    } else if (atomicNumber == 100) {
        printf("Name: Fermium\nSymbol: Fm\nAtomic Number: 100\nElectronic Configuration: [Rn] 5f^12 7s^2\nDiscovered by: Albert Ghiorso\nCharge: +3\n");
    } else if (atomicNumber == 101) {
        printf("Name: Mendelevium\nSymbol: Md\nAtomic Number: 101\nElectronic Configuration: [Rn] 5f^13 7s^2\nDiscovered by: Glenn T. Seaborg\nCharge: +3\n");
    } else if (atomicNumber == 102) {
        printf("Name: Nobelium\nSymbol: No\nAtomic Number: 102\nElectronic Configuration: [Rn] 5f^14 7s^2\nDiscovered by: Joint Institute for Nuclear Research\nCharge: +2 or +3\n");
    } else if (atomicNumber == 103) {
        printf("Name: Lawrencium\nSymbol: Lr\nAtomic Number: 103\nElectronic Configuration: [Rn] 5f^14 7s^2 7p^1\nDiscovered by: Lawrence Berkeley National Laboratory\nCharge: +3\n");
    } else if (atomicNumber == 104) {
        printf("Name: Rutherfordium\nSymbol: Rf\nAtomic Number: 104\nElectronic Configuration: [Rn] 5f^14 6d^2 7s^2\nDiscovered by: Joint Institute for Nuclear Research\nCharge: +4\n");
    } else if (atomicNumber == 105) {
        printf("Name: Dubnium\nSymbol: Db\nAtomic Number: 105\nElectronic Configuration: [Rn] 5f^14 6d^3 7s^2\nDiscovered by: Joint Institute for Nuclear Research\nCharge: +5\n");
    } else if (atomicNumber == 106) {
        printf("Name: Seaborgium\nSymbol: Sg\nAtomic Number: 106\nElectronic Configuration: [Rn] 5f^14 6d^4 7s^2\nDiscovered by: Lawrence Berkeley National Laboratory\nCharge: +6\n");
    } else if (atomicNumber == 107) {
        printf("Name: Bohrium\nSymbol: Bh\nAtomic Number: 107\nElectronic Configuration: [Rn] 5f^14 6d^5 7s^2\nDiscovered by: GSI Helmholtz Centre for Heavy Ion Research\nCharge: +7\n");
    } else if (atomicNumber == 108) {
        printf("Name: Hassium\nSymbol: Hs\nAtomic Number: 108\nElectronic Configuration: [Rn] 5f^14 6d^6 7s^2\nDiscovered by: GSI Helmholtz Centre for Heavy Ion Research\nCharge: +8\n");
    } else if (atomicNumber == 109) {
        printf("Name: Meitnerium\nSymbol: Mt\nAtomic Number: 109\nElectronic Configuration: [Rn] 5f^14 6d^7 7s^2\nDiscovered by: GSI Helmholtz Centre for Heavy Ion Research\nCharge: +7\n");
    } else if (atomicNumber == 110) {
        printf("Name: Darmstadtium\nSymbol: Ds\nAtomic Number: 110\nElectronic Configuration: [Rn] 5f^14 6d^8 7s^2\nDiscovered by: GSI Helmholtz Centre for Heavy Ion Research\nCharge: +6\n");
    } else if (atomicNumber == 111) {
        printf("Name: Roentgenium\nSymbol: Rg\nAtomic Number: 111\nElectronic Configuration: [Rn] 5f^14 6d^9 7s^2\nDiscovered by: GSI Helmholtz Centre for Heavy Ion Research\nCharge: +5\n");
    } else if (atomicNumber == 112) {
        printf("Name: Copernicium\nSymbol: Cn\nAtomic Number: 112\nElectronic Configuration: [Rn] 5f^14 6d^10 7s^2\nDiscovered by: GSI Helmholtz Centre for Heavy Ion Research\nCharge: +2\n");
    } else if (atomicNumber == 113) {
        printf("Name: Nihonium\nSymbol: Nh\nAtomic Number: 113\nElectronic Configuration: [Rn] 5f^14 6d^10 7s^2 7p^1\nDiscovered by: RIKEN\nCharge: +1 or +3\n");
    } else if (atomicNumber == 114) {
        printf("Name: Flerovium\nSymbol: Fl\nAtomic Number: 114\nElectronic Configuration: [Rn] 5f^14 6d^10 7s^2 7p^2\nDiscovered by: Joint Institute for Nuclear Research\nCharge: +2 or +4\n");
    } else if (atomicNumber == 115) {
        printf("Name: Moscovium\nSymbol: Mc\nAtomic Number: 115\nElectronic Configuration: [Rn] 5f^14 6d^10 7s^2 7p^3\nDiscovered by: Joint Institute for Nuclear Research\nCharge: +1 or +3\n");
    } else if (atomicNumber == 116) {
        printf("Name: Livermorium\nSymbol: Lv\nAtomic Number: 116\nElectronic Configuration: [Rn] 5f^14 6d^10 7s^2 7p^4\nDiscovered by: Joint Institute for Nuclear Research\nCharge: +2\n");
    } else if (atomicNumber == 117) {
        printf("Name: Tennessine\nSymbol: Ts\nAtomic Number: 117\nElectronic Configuration: [Rn] 5f^14 6d^10 7s^2 7p^5\nDiscovered by: Joint Institute for Nuclear Research\nCharge: -1\n");
    } else if (atomicNumber == 118) {
        printf("Name: Oganesson\nSymbol: Og\nAtomic Number: 118\nElectronic Configuration: [Rn] 5f^14 6d^10 7s^2 7p^6\nDiscovered by: Joint Institute for Nuclear Research\nCharge: 0\n");
    } else {
        printf("Element not found in this range.\n");
    }
        }
    }
    else if(n==2){
        printf("Do you want to Exit ? (Yes/No)\n\n");
        printf(">Press 6 for Yes \n");
        printf(">Press 7 for No \n");
        printf("Enter \n");
        scanf("%d",&Exit);
        if(Exit==6){
            printf("Are you sure ,You want to close the Periodic Table?\n\n");
            printf(">Press 4 for Yes!\n");
            printf(">Press 5 for No!\n");
            printf("ENTER\n");
            scanf("%d",&Exi);
            if(Exi==4){
                printf("The periodic Table has closed \n");
            }
            else if(Exi==5){
                printf("Periodic Table hasn't closed ,You can continoue to learn more \n");
                printf("Enter the atomic number to be searched\n\n");
                scanf("%d",&atomicNumber);
                      if (atomicNumber == 1) {
        printf("Name: Hydrogen\nSymbol: H\nAtomic Number: 1\nElectronic Configuration: 1s^1\nDiscovered by: Henry Cavendish\nCharge: +1\n");
    } else if (atomicNumber == 2) {
        printf("Name: Helium\nSymbol: He\nAtomic Number: 2\nElectronic Configuration: 1s^2\nDiscovered by: William Ramsay\nCharge: 0\n");
    } else if (atomicNumber == 3) {
        printf("Name: Lithium\nSymbol: Li\nAtomic Number: 3\nElectronic Configuration: 1s^2 2s^1\nDiscovered by: Johan August Arfwedson\nCharge: +1\n");
    } else if (atomicNumber == 4) {
        printf("Name: Beryllium\nSymbol: Be\nAtomic Number: 4\nElectronic Configuration: 1s^2 2s^2\nDiscovered by: Nicolas-Louis Vauquelin\nCharge: +2\n");
    } else if (atomicNumber == 5) {
        printf("Name: Boron\nSymbol: B\nAtomic Number: 5\nElectronic Configuration: 1s^2 2s^2 2p^1\nDiscovered by: Joseph Louis Gay-Lussac\nCharge: +3\n");
    } else if (atomicNumber == 6) {
        printf("Name: Carbon\nSymbol: C\nAtomic Number: 6\nElectronic Configuration: 1s^2 2s^2 2p^2\nDiscovered by: Ancient times\nCharge: +4 or -4 (varies)\n");
    } else if (atomicNumber == 7) {
        printf("Name: Nitrogen\nSymbol: N\nAtomic Number: 7\nElectronic Configuration: 1s^2 2s^2 2p^3\nDiscovered by: Daniel Rutherford\nCharge: -3\n");
    } else if (atomicNumber == 8) {
        printf("Name: Oxygen\nSymbol: O\nAtomic Number: 8\nElectronic Configuration: 1s^2 2s^2 2p^4\nDiscovered by: Joseph Priestley\nCharge: -2\n");
    } else if (atomicNumber == 9) {
        printf("Name: Fluorine\nSymbol: F\nAtomic Number: 9\nElectronic Configuration: 1s^2 2s^2 2p^5\nDiscovered by: Henri Moissan\nCharge: -1\n");
    } else if (atomicNumber == 10) {
        printf("Name: Neon\nSymbol: Ne\nAtomic Number: 10\nElectronic Configuration: 1s^2 2s^2 2p^6\nDiscovered by: William Ramsay\nCharge: 0\n");
    }
     else if (atomicNumber == 11) {
        printf("Name: Sodium\nSymbol: Na\nAtomic Number: 11\nElectronic Configuration: 1s^2 2s^2 2p^6 3s^1\nDiscovered by: Humphry Davy\nCharge: +1\n");
    } else if (atomicNumber == 12) {
        printf("Name: Magnesium\nSymbol: Mg\nAtomic Number: 12\nElectronic Configuration: 1s^2 2s^2 2p^6 3s^2\nDiscovered by: Joseph Black\nCharge: +2\n");
    } else if (atomicNumber == 13) {
        printf("Name: Aluminum\nSymbol: Al\nAtomic Number: 13\nElectronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^1\nDiscovered by: Hans Christian Oersted\nCharge: +3\n");
    } else if (atomicNumber == 14) {
        printf("Name: Silicon\nSymbol: Si\nAtomic Number: 14\nElectronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^2\nDiscovered by: Jöns Jacob Berzelius\nCharge: +4\n");
    } else if (atomicNumber == 15) {
        printf("Name: Phosphorus\nSymbol: P\nAtomic Number: 15\nElectronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^3\nDiscovered by: Hennig Brand\nCharge: -3\n");
    } else if (atomicNumber == 16) {
        printf("Name: Sulfur\nSymbol: S\nAtomic Number: 16\nElectronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^4\nDiscovered by: Ancient times\nCharge: -2\n");
    } else if (atomicNumber == 17) {
        printf("Name: Chlorine\nSymbol: Cl\nAtomic Number: 17\nElectronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^5\nDiscovered by: Humphry Davy\nCharge: -1\n");
    } else if (atomicNumber == 18) {
        printf("Name: Argon\nSymbol: Ar\nAtomic Number: 18\nElectronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6\nDiscovered by: Lord Rayleigh and William Ramsay\nCharge: 0\n");
    } else if (atomicNumber == 19) {
        printf("Name: Potassium\nSymbol: K\nAtomic Number: 19\nElectronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^1\nDiscovered by: Humphry Davy\nCharge: +1\n");
    } else if (atomicNumber == 20) {
        printf("Name: Calcium\nSymbol: Ca\nAtomic Number: 20\nElectronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2\nDiscovered by: Humphry Davy\nCharge: +2\n");
    } else if (atomicNumber == 21) {
        printf("Name: Scandium\nSymbol: Sc\nAtomic Number: 21\nElectronic Configuration: [Ar] 3d^1 4s^2\nDiscovered by: Lars Fredrik Nilson\nCharge: +3\n");
    } else if (atomicNumber == 22) {
        printf("Name: Titanium\nSymbol: Ti\nAtomic Number: 22\nElectronic Configuration: [Ar] 3d^2 4s^2\nDiscovered by: William Gregor\nCharge: +4\n");
    } else if (atomicNumber == 23) {
        printf("Name: Vanadium\nSymbol: V\nAtomic Number: 23\nElectronic Configuration: [Ar] 3d^3 4s^2\nDiscovered by: Andres Manuel del Rio\nCharge: +5\n");
    } else if (atomicNumber == 24) {
        printf("Name: Chromium\nSymbol: Cr\nAtomic Number: 24\nElectronic Configuration: [Ar] 3d^5 4s^1\nDiscovered by: Louis Nicolas Vauquelin\nCharge: +6\n");
    } else if (atomicNumber == 25) {
        printf("Name: Manganese\nSymbol: Mn\nAtomic Number: 25\nElectronic Configuration: [Ar] 3d^5 4s^2\nDiscovered by: Johann Gottlieb Gahn\nCharge: +7\n");
    } else if (atomicNumber == 26) {
        printf("Name: Iron\nSymbol: Fe\nAtomic Number: 26\nElectronic Configuration: [Ar] 3d^6 4s^2\nDiscovered by: Ancient times\nCharge: +2 or +3\n");
    } else if (atomicNumber == 27) {
        printf("Name: Cobalt\nSymbol: Co\nAtomic Number: 27\nElectronic Configuration: [Ar] 3d^7 4s^2\nDiscovered by: Georg Brandt\nCharge: +2 or +3\n");
    } else if (atomicNumber == 28) {
        printf("Name: Nickel\nSymbol: Ni\nAtomic Number: 28\nElectronic Configuration: [Ar] 3d^8 4s^2\nDiscovered by: Axel Fredrik Cronstedt\nCharge: +2\n");
    } else if (atomicNumber == 29) {
        printf("Name: Copper\nSymbol: Cu\nAtomic Number: 29\nElectronic Configuration: [Ar] 3d^{10} 4s^1\nDiscovered by: Ancient times\nCharge: +1 or +2\n");
    } else if (atomicNumber == 30) {
        printf("Name: Zinc\nSymbol: Zn\nAtomic Number: 30\nElectronic Configuration: [Ar] 3d^{10} 4s^2\nDiscovered by: Ancient times\nCharge: +2\n");
    }
   else if (atomicNumber == 31) {
        printf("Name: Gallium\nSymbol: Ga\nAtomic Number: 31\nElectronic Configuration: [Ar] 3d^10 4s^2 4p^1\nDiscovered by: Paul Emile Lecoq de Boisbaudran\nCharge: +3\n");
    } else if (atomicNumber == 32) {
        printf("Name: Germanium\nSymbol: Ge\nAtomic Number: 32\nElectronic Configuration: [Ar] 3d^10 4s^2 4p^2\nDiscovered by: Clemens Winkler\nCharge: +4\n");
    } else if (atomicNumber == 33) {
        printf("Name: Arsenic\nSymbol: As\nAtomic Number: 33\nElectronic Configuration: [Ar] 3d^10 4s^2 4p^3\nDiscovered by: Albertus Magnus\nCharge: -3\n");
    } else if (atomicNumber == 34) {
        printf("Name: Selenium\nSymbol: Se\nAtomic Number: 34\nElectronic Configuration: [Ar] 3d^10 4s^2 4p^4\nDiscovered by: Jöns Jacob Berzelius\nCharge: -2\n");
    } else if (atomicNumber == 35) {
        printf("Name: Bromine\nSymbol: Br\nAtomic Number: 35\nElectronic Configuration: [Ar] 3d^10 4s^2 4p^5\nDiscovered by: Antoine Jérôme Balard\nCharge: -1\n");
    } else if (atomicNumber == 36) {
        printf("Name: Krypton\nSymbol: Kr\nAtomic Number: 36\nElectronic Configuration: [Ar] 3d^10 4s^2 4p^6\nDiscovered by: William Ramsay and Morris Travers\nCharge: 0\n");
    } else if (atomicNumber == 37) {
        printf("Name: Rubidium\nSymbol: Rb\nAtomic Number: 37\nElectronic Configuration: [Kr] 5s^1\nDiscovered by: Robert Bunsen and Gustav Kirchhoff\nCharge: +1\n");
    } else if (atomicNumber == 38) {
        printf("Name: Strontium\nSymbol: Sr\nAtomic Number: 38\nElectronic Configuration: [Kr] 5s^2\nDiscovered by: William Cruickshank\nCharge: +2\n");
    } else if (atomicNumber == 39) {
        printf("Name: Yttrium\nSymbol: Y\nAtomic Number: 39\nElectronic Configuration: [Kr] 4d^1 5s^2\nDiscovered by: Johan Gadolin\nCharge: +3\n");
    } else if (atomicNumber == 40) {
        printf("Name: Zirconium\nSymbol: Zr\nAtomic Number: 40\nElectronic Configuration: [Kr] 4d^2 5s^2\nDiscovered by: Martin Heinrich Klaproth\nCharge: +4\n");
    } else if (atomicNumber == 41) {
        printf("Name: Niobium\nSymbol: Nb\nAtomic Number: 41\nElectronic Configuration: [Kr] 4d^4 5s^1\nDiscovered by: Charles Hatchett\nCharge: +5\n");
    } else if (atomicNumber == 42) {
        printf("Name: Molybdenum\nSymbol: Mo\nAtomic Number: 42\nElectronic Configuration: [Kr] 4d^5 5s^1\nDiscovered by: Carl Wilhelm Scheele\nCharge: +6\n");
    } else if (atomicNumber == 43) {
        printf("Name: Technetium\nSymbol: Tc\nAtomic Number: 43\nElectronic Configuration: [Kr] 4d^5 5s^2\nDiscovered by: Carlo Perrier and Emilio Segrè\nCharge: +7\n");
    } else if (atomicNumber == 44) {
        printf("Name: Ruthenium\nSymbol: Ru\nAtomic Number: 44\nElectronic Configuration: [Kr] 4d^7 5s^1\nDiscovered by: Karl Ernst Claus\nCharge: +3\n");
    } else if (atomicNumber == 45) {
        printf("Name: Rhodium\nSymbol: Rh\nAtomic Number: 45\nElectronic Configuration: [Kr] 4d^8 5s^1\nDiscovered by: William Hyde Wollaston\nCharge: +3\n");
    } else if (atomicNumber == 46) {
        printf("Name: Palladium\nSymbol: Pd\nAtomic Number: 46\nElectronic Configuration: [Kr] 4d^10\nDiscovered by: William Hyde Wollaston\nCharge: +2\n");
    } else if (atomicNumber == 47) {
        printf("Name: Silver\nSymbol: Ag\nAtomic Number: 47\nElectronic Configuration: [Kr] 4d^10 5s^1\nDiscovered by: Ancient times\nCharge: +1\n");
    } else if (atomicNumber == 48) {
        printf("Name: Cadmium\nSymbol: Cd\nAtomic Number: 48\nElectronic Configuration: [Kr] 4d^10 5s^2\nDiscovered by: Friedrich Stromeyer\nCharge: +2\n");
    } else if (atomicNumber == 49) {
        printf("Name: Indium\nSymbol: In\nAtomic Number: 49\nElectronic Configuration: [Kr] 4d^10 5s^2 5p^1\nDiscovered by: Ferdinand Reich\nCharge: +3\n");
    } else if (atomicNumber == 50) {
        printf("Name: Tin\nSymbol: Sn\nAtomic Number: 50\nElectronic Configuration: [Kr] 4d^10 5s^2 5p^2\nDiscovered by: Ancient times\nCharge: +2 or +4\n");
    } else if (atomicNumber == 51) {
        printf("Name: Antimony\nSymbol: Sb\nAtomic Number: 51\nElectronic Configuration: [Kr] 4d^10 5s^2 5p^3\nDiscovered by: Ancient times\nCharge: +3 or +5\n");
    }
    else   if (atomicNumber == 52) {
        printf("Name: Tellurium\nSymbol: Te\nAtomic Number: 52\nElectronic Configuration: [Kr] 4d^10 5s^2 5p^4\nDiscovered by: Franz-Joseph Müller von Reichenstein\nCharge: -2\n");
    } else if (atomicNumber == 53) {
        printf("Name: Iodine\nSymbol: I\nAtomic Number: 53\nElectronic Configuration: [Kr] 4d^10 5s^2 5p^5\nDiscovered by: Bernard Courtois\nCharge: -1\n");
    } else if (atomicNumber == 54) {
        printf("Name: Xenon\nSymbol: Xe\nAtomic Number: 54\nElectronic Configuration: [Kr] 4d^10 5s^2 5p^6\nDiscovered by: William Ramsay and Morris Travers\nCharge: 0\n");
    } else if (atomicNumber == 55) {
        printf("Name: Cesium\nSymbol: Cs\nAtomic Number: 55\nElectronic Configuration: [Xe] 6s^1\nDiscovered by: Robert Bunsen and Gustav Kirchhoff\nCharge: +1\n");
    } else if (atomicNumber == 56) {
        printf("Name: Barium\nSymbol: Ba\nAtomic Number: 56\nElectronic Configuration: [Xe] 6s^2\nDiscovered by: Humphry Davy\nCharge: +2\n");
    } else if (atomicNumber == 57) {
        printf("Name: Lanthanum\nSymbol: La\nAtomic Number: 57\nElectronic Configuration: [Xe] 5d^1 6s^2\nDiscovered by: Carl Gustaf Mosander\nCharge: +3\n");
    } else if (atomicNumber == 58) {
        printf("Name: Cerium\nSymbol: Ce\nAtomic Number: 58\nElectronic Configuration: [Xe] 4f^1 5d^1 6s^2\nDiscovered by: Martin Heinrich Klaproth\nCharge: +3 or +4\n");
    } else if (atomicNumber == 59) {
        printf("Name: Praseodymium\nSymbol: Pr\nAtomic Number: 59\nElectronic Configuration: [Xe] 4f^3 6s^2\nDiscovered by: Carl Auer von Welsbach\nCharge: +3\n");
    } else if (atomicNumber == 60) {
        printf("Name: Neodymium\nSymbol: Nd\nAtomic Number: 60\nElectronic Configuration: [Xe] 4f^4 6s^2\nDiscovered by: Carl Auer von Welsbach\nCharge: +3\n");
    } else if (atomicNumber == 61) {
        printf("Name: Promethium\nSymbol: Pm\nAtomic Number: 61\nElectronic Configuration: [Xe] 4f^5 6s^2\nDiscovered by: Jacob A. Marinsky\nCharge: +3\n");
    } else if (atomicNumber == 62) {
        printf("Name: Samarium\nSymbol: Sm\nAtomic Number: 62\nElectronic Configuration: [Xe] 4f^6 6s^2\nDiscovered by: Paul Émile Lecoq de Boisbaudran\nCharge: +3\n");
    } else if (atomicNumber == 63) {
        printf("Name: Europium\nSymbol: Eu\nAtomic Number: 63\nElectronic Configuration: [Xe] 4f^7 6s^2\nDiscovered by: Eugène-Anatole Demarçay\nCharge: +2 or +3\n");
    } else if (atomicNumber == 64) {
        printf("Name: Gadolinium\nSymbol: Gd\nAtomic Number: 64\nElectronic Configuration: [Xe] 4f^7 5d^1 6s^2\nDiscovered by: Jean Charles Galissard de Marignac\nCharge: +3\n");
    } else if (atomicNumber == 65) {
        printf("Name: Terbium\nSymbol: Tb\nAtomic Number: 65\nElectronic Configuration: [Xe] 4f^9 6s^2\nDiscovered by: Carl Gustaf Mosander\nCharge: +3\n");
    } else if (atomicNumber == 66) {
        printf("Name: Dysprosium\nSymbol: Dy\nAtomic Number: 66\nElectronic Configuration: [Xe] 4f^10 6s^2\nDiscovered by: Paul Émile Lecoq de Boisbaudran\nCharge: +3\n");
    } else if (atomicNumber == 67) {
        printf("Name: Holmium\nSymbol: Ho\nAtomic Number: 67\nElectronic Configuration: [Xe] 4f^11 6s^2\nDiscovered by: Marc Delafontaine\nCharge: +3\n");
    } else if (atomicNumber == 68) {
        printf("Name: Erbium\nSymbol: Er\nAtomic Number: 68\nElectronic Configuration: [Xe] 4f^12 6s^2\nDiscovered by: Carl Gustaf Mosander\nCharge: +3\n");
    } else if (atomicNumber == 69) {
        printf("Name: Thulium\nSymbol: Tm\nAtomic Number: 69\nElectronic Configuration: [Xe] 4f^13 6s^2\nDiscovered by: Per Teodor Cleve\nCharge: +3\n");
    } else if (atomicNumber == 70) {
        printf("Name: Ytterbium\nSymbol: Yb\nAtomic Number: 70\nElectronic Configuration: [Xe] 4f^14 6s^2\nDiscovered by: Jean Charles Galissard de Marignac\nCharge: +2 or +3\n");
    }
    else if (atomicNumber == 71) {
        printf("Name: Lutetium\nSymbol: Lu\nAtomic Number: 71\nElectronic Configuration: [Xe] 4f^14 5d^1 6s^2\nDiscovered by: Georges Urbain\nCharge: +3\n");
    } else if (atomicNumber == 72) {
        printf("Name: Hafnium\nSymbol: Hf\nAtomic Number: 72\nElectronic Configuration: [Xe] 4f^14 5d^2 6s^2\nDiscovered by: Dirk Coster and George de Hevesy\nCharge: +4\n");
    } else if (atomicNumber == 73) {
        printf("Name: Tantalum\nSymbol: Ta\nAtomic Number: 73\nElectronic Configuration: [Xe] 4f^14 5d^3 6s^2\nDiscovered by: Anders Gustaf Ekeberg\nCharge: +5\n");
    } else if (atomicNumber == 74) {
        printf("Name: Tungsten\nSymbol: W\nAtomic Number: 74\nElectronic Configuration: [Xe] 4f^14 5d^4 6s^2\nDiscovered by: Carl Wilhelm Scheele\nCharge: +6\n");
    } else if (atomicNumber == 75) {
        printf("Name: Rhenium\nSymbol: Re\nAtomic Number: 75\nElectronic Configuration: [Xe] 4f^14 5d^5 6s^2\nDiscovered by: Masataka Ogawa\nCharge: +7\n");
    } else if (atomicNumber == 76) {
        printf("Name: Osmium\nSymbol: Os\nAtomic Number: 76\nElectronic Configuration: [Xe] 4f^14 5d^6 6s^2\nDiscovered by: Smithson Tennant\nCharge: +4\n");
    } else if (atomicNumber == 77) {
        printf("Name: Iridium\nSymbol: Ir\nAtomic Number: 77\nElectronic Configuration: [Xe] 4f^14 5d^7 6s^2\nDiscovered by: Smithson Tennant\nCharge: +3\n");
    } else if (atomicNumber == 78) {
        printf("Name: Platinum\nSymbol: Pt\nAtomic Number: 78\nElectronic Configuration: [Xe] 4f^14 5d^9 6s^1\nDiscovered by: Antonio de Ulloa\nCharge: +2 or +4\n");
    } else if (atomicNumber == 79) {
        printf("Name: Gold\nSymbol: Au\nAtomic Number: 79\nElectronic Configuration: [Xe] 4f^14 5d^10 6s^1\nDiscovered by: Ancient times\nCharge: +1 or +3\n");
    } else if (atomicNumber == 80) {
        printf("Name: Mercury\nSymbol: Hg\nAtomic Number: 80\nElectronic Configuration: [Xe] 4f^14 5d^10 6s^2\nDiscovered by: Ancient times\nCharge: +1 or +2\n");
    } else if (atomicNumber == 81) {
        printf("Name: Thallium\nSymbol: Tl\nAtomic Number: 81\nElectronic Configuration: [Xe] 4f^14 5d^10 6s^2 6p^1\nDiscovered by: William Crookes\nCharge: +1 or +3\n");
    } else if (atomicNumber == 82) {
        printf("Name: Lead\nSymbol: Pb\nAtomic Number: 82\nElectronic Configuration: [Xe] 4f^14 5d^10 6s^2 6p^2\nDiscovered by: Ancient times\nCharge: +2 or +4\n");
    } else if (atomicNumber == 83) {
        printf("Name: Bismuth\nSymbol: Bi\nAtomic Number: 83\nElectronic Configuration: [Xe] 4f^14 5d^10 6s^2 6p^3\nDiscovered by: Ancient times\nCharge: +3\n");
    } else if (atomicNumber == 84) {
        printf("Name: Polonium\nSymbol: Po\nAtomic Number: 84\nElectronic Configuration: [Xe] 4f^14 5d^10 6s^2 6p^4\nDiscovered by: Marie Curie and Pierre Curie\nCharge: +2 or +4\n");
    } else if (atomicNumber == 85) {
        printf("Name: Astatine\nSymbol: At\nAtomic Number: 85\nElectronic Configuration: [Xe] 4f^14 5d^10 6s^2 6p^5\nDiscovered by: Dale R. Corson, Kenneth Ross MacKenzie, Emilio Segrè\nCharge: -1 or +1\n");
    } else if (atomicNumber == 86) {
        printf("Name: Radon\nSymbol: Rn\nAtomic Number: 86\nElectronic Configuration: [Xe] 4f^14 5d^10 6s^2 6p^6\nDiscovered by: Friedrich Ernst Dorn\nCharge: 0\n");
    } else if (atomicNumber == 87) {
        printf("Name: Francium\nSymbol: Fr\nAtomic Number: 87\nElectronic Configuration: [Rn] 7s^1\nDiscovered by: Marguerite Perey\nCharge: +1\n");
    } else if (atomicNumber == 88) {
        printf("Name: Radium\nSymbol: Ra\nAtomic Number: 88\nElectronic Configuration: [Rn] 7s^2\nDiscovered by: Pierre Curie and Marie Curie\nCharge: +2\n");
    } else if (atomicNumber == 89) {
        printf("Name: Actinium\nSymbol: Ac\nAtomic Number: 89\nElectronic Configuration: [Rn] 6d^1 7s^2\nDiscovered by: Friedrich Oskar Giesel\nCharge: +3\n");
    } else if (atomicNumber == 90) {
        printf("Name: Thorium\nSymbol: Th\nAtomic Number: 90\nElectronic Configuration: [Rn] 6d^2 7s^2\nDiscovered by: Jöns Jacob Berzelius\nCharge: +4\n");
    }
    else  if (atomicNumber == 91) {
        printf("Name: Protactinium\nSymbol: Pa\nAtomic Number: 91\nElectronic Configuration: [Rn] 5f^2 6d^1 7s^2\nDiscovered by: Otto Hahn and Lise Meitner\nCharge: +5\n");
    } else if (atomicNumber == 92) {
        printf("Name: Uranium\nSymbol: U\nAtomic Number: 92\nElectronic Configuration: [Rn] 5f^3 6d^1 7s^2\nDiscovered by: Martin Heinrich Klaproth\nCharge: +6\n");
    } else if (atomicNumber == 93) {
        printf("Name: Neptunium\nSymbol: Np\nAtomic Number: 93\nElectronic Configuration: [Rn] 5f^4 6d^1 7s^2\nDiscovered by: Edwin McMillan and Philip H. Abelson\nCharge: +5\n");
    } else if (atomicNumber == 94) {
        printf("Name: Plutonium\nSymbol: Pu\nAtomic Number: 94\nElectronic Configuration: [Rn] 5f^6 7s^2\nDiscovered by: Glenn T. Seaborg\nCharge: +4\n");
    } else if (atomicNumber == 95) {
        printf("Name: Americium\nSymbol: Am\nAtomic Number: 95\nElectronic Configuration: [Rn] 5f^7 7s^2\nDiscovered by: Glenn T. Seaborg\nCharge: +3\n");
    } else if (atomicNumber == 96) {
        printf("Name: Curium\nSymbol: Cm\nAtomic Number: 96\nElectronic Configuration: [Rn] 5f^7 6d^1 7s^2\nDiscovered by: Glenn T. Seaborg\nCharge: +3\n");
    } else if (atomicNumber == 97) {
        printf("Name: Berkelium\nSymbol: Bk\nAtomic Number: 97\nElectronic Configuration: [Rn] 5f^9 7s^2\nDiscovered by: Glenn T. Seaborg\nCharge: +3\n");
    } else if (atomicNumber == 98) {
        printf("Name: Californium\nSymbol: Cf\nAtomic Number: 98\nElectronic Configuration: [Rn] 5f^10 7s^2\nDiscovered by: Glenn T. Seaborg\nCharge: +3\n");
    } else if (atomicNumber == 99) {
        printf("Name: Einsteinium\nSymbol: Es\nAtomic Number: 99\nElectronic Configuration: [Rn] 5f^11 7s^2\nDiscovered by: Albert Ghiorso\nCharge: +3\n");
    } else if (atomicNumber == 100) {
        printf("Name: Fermium\nSymbol: Fm\nAtomic Number: 100\nElectronic Configuration: [Rn] 5f^12 7s^2\nDiscovered by: Albert Ghiorso\nCharge: +3\n");
    } else if (atomicNumber == 101) {
        printf("Name: Mendelevium\nSymbol: Md\nAtomic Number: 101\nElectronic Configuration: [Rn] 5f^13 7s^2\nDiscovered by: Glenn T. Seaborg\nCharge: +3\n");
    } else if (atomicNumber == 102) {
        printf("Name: Nobelium\nSymbol: No\nAtomic Number: 102\nElectronic Configuration: [Rn] 5f^14 7s^2\nDiscovered by: Joint Institute for Nuclear Research\nCharge: +2 or +3\n");
    } else if (atomicNumber == 103) {
        printf("Name: Lawrencium\nSymbol: Lr\nAtomic Number: 103\nElectronic Configuration: [Rn] 5f^14 7s^2 7p^1\nDiscovered by: Lawrence Berkeley National Laboratory\nCharge: +3\n");
    } else if (atomicNumber == 104) {
        printf("Name: Rutherfordium\nSymbol: Rf\nAtomic Number: 104\nElectronic Configuration: [Rn] 5f^14 6d^2 7s^2\nDiscovered by: Joint Institute for Nuclear Research\nCharge: +4\n");
    } else if (atomicNumber == 105) {
        printf("Name: Dubnium\nSymbol: Db\nAtomic Number: 105\nElectronic Configuration: [Rn] 5f^14 6d^3 7s^2\nDiscovered by: Joint Institute for Nuclear Research\nCharge: +5\n");
    } else if (atomicNumber == 106) {
        printf("Name: Seaborgium\nSymbol: Sg\nAtomic Number: 106\nElectronic Configuration: [Rn] 5f^14 6d^4 7s^2\nDiscovered by: Lawrence Berkeley National Laboratory\nCharge: +6\n");
    } else if (atomicNumber == 107) {
        printf("Name: Bohrium\nSymbol: Bh\nAtomic Number: 107\nElectronic Configuration: [Rn] 5f^14 6d^5 7s^2\nDiscovered by: GSI Helmholtz Centre for Heavy Ion Research\nCharge: +7\n");
    } else if (atomicNumber == 108) {
        printf("Name: Hassium\nSymbol: Hs\nAtomic Number: 108\nElectronic Configuration: [Rn] 5f^14 6d^6 7s^2\nDiscovered by: GSI Helmholtz Centre for Heavy Ion Research\nCharge: +8\n");
    } else if (atomicNumber == 109) {
        printf("Name: Meitnerium\nSymbol: Mt\nAtomic Number: 109\nElectronic Configuration: [Rn] 5f^14 6d^7 7s^2\nDiscovered by: GSI Helmholtz Centre for Heavy Ion Research\nCharge: +7\n");
    } else if (atomicNumber == 110) {
        printf("Name: Darmstadtium\nSymbol: Ds\nAtomic Number: 110\nElectronic Configuration: [Rn] 5f^14 6d^8 7s^2\nDiscovered by: GSI Helmholtz Centre for Heavy Ion Research\nCharge: +6\n");
    } else if (atomicNumber == 111) {
        printf("Name: Roentgenium\nSymbol: Rg\nAtomic Number: 111\nElectronic Configuration: [Rn] 5f^14 6d^9 7s^2\nDiscovered by: GSI Helmholtz Centre for Heavy Ion Research\nCharge: +5\n");
    } else if (atomicNumber == 112) {
        printf("Name: Copernicium\nSymbol: Cn\nAtomic Number: 112\nElectronic Configuration: [Rn] 5f^14 6d^10 7s^2\nDiscovered by: GSI Helmholtz Centre for Heavy Ion Research\nCharge: +2\n");
    } else if (atomicNumber == 113) {
        printf("Name: Nihonium\nSymbol: Nh\nAtomic Number: 113\nElectronic Configuration: [Rn] 5f^14 6d^10 7s^2 7p^1\nDiscovered by: RIKEN\nCharge: +1 or +3\n");
    } else if (atomicNumber == 114) {
        printf("Name: Flerovium\nSymbol: Fl\nAtomic Number: 114\nElectronic Configuration: [Rn] 5f^14 6d^10 7s^2 7p^2\nDiscovered by: Joint Institute for Nuclear Research\nCharge: +2 or +4\n");
    } else if (atomicNumber == 115) {
        printf("Name: Moscovium\nSymbol: Mc\nAtomic Number: 115\nElectronic Configuration: [Rn] 5f^14 6d^10 7s^2 7p^3\nDiscovered by: Joint Institute for Nuclear Research\nCharge: +1 or +3\n");
    } else if (atomicNumber == 116) {
        printf("Name: Livermorium\nSymbol: Lv\nAtomic Number: 116\nElectronic Configuration: [Rn] 5f^14 6d^10 7s^2 7p^4\nDiscovered by: Joint Institute for Nuclear Research\nCharge: +2\n");
    } else if (atomicNumber == 117) {
        printf("Name: Tennessine\nSymbol: Ts\nAtomic Number: 117\nElectronic Configuration: [Rn] 5f^14 6d^10 7s^2 7p^5\nDiscovered by: Joint Institute for Nuclear Research\nCharge: -1\n");
    } else if (atomicNumber == 118) {
        printf("Name: Oganesson\nSymbol: Og\nAtomic Number: 118\nElectronic Configuration: [Rn] 5f^14 6d^10 7s^2 7p^6\nDiscovered by: Joint Institute for Nuclear Research\nCharge: 0\n");
    } else {
        printf("Element not found in this range.\n");
    }
            }
        }
        else if(Exit==7){
            printf("Priodic Table has not closed you can lear more Element \n\n");
            printf("Enter the atomic number of the Element to be Searched : \n");
            scanf("%d",&atomicNumber);
             if (atomicNumber == 1) {
        printf("Name: Hydrogen\nSymbol: H\nAtomic Number: 1\nElectronic Configuration: 1s^1\nDiscovered by: Henry Cavendish\nCharge: +1\n");
    } else if (atomicNumber == 2) {
        printf("Name: Helium\nSymbol: He\nAtomic Number: 2\nElectronic Configuration: 1s^2\nDiscovered by: William Ramsay\nCharge: 0\n");
    } else if (atomicNumber == 3) {
        printf("Name: Lithium\nSymbol: Li\nAtomic Number: 3\nElectronic Configuration: 1s^2 2s^1\nDiscovered by: Johan August Arfwedson\nCharge: +1\n");
    } else if (atomicNumber == 4) {
        printf("Name: Beryllium\nSymbol: Be\nAtomic Number: 4\nElectronic Configuration: 1s^2 2s^2\nDiscovered by: Nicolas-Louis Vauquelin\nCharge: +2\n");
    } else if (atomicNumber == 5) {
        printf("Name: Boron\nSymbol: B\nAtomic Number: 5\nElectronic Configuration: 1s^2 2s^2 2p^1\nDiscovered by: Joseph Louis Gay-Lussac\nCharge: +3\n");
    } else if (atomicNumber == 6) {
        printf("Name: Carbon\nSymbol: C\nAtomic Number: 6\nElectronic Configuration: 1s^2 2s^2 2p^2\nDiscovered by: Ancient times\nCharge: +4 or -4 (varies)\n");
    } else if (atomicNumber == 7) {
        printf("Name: Nitrogen\nSymbol: N\nAtomic Number: 7\nElectronic Configuration: 1s^2 2s^2 2p^3\nDiscovered by: Daniel Rutherford\nCharge: -3\n");
    } else if (atomicNumber == 8) {
        printf("Name: Oxygen\nSymbol: O\nAtomic Number: 8\nElectronic Configuration: 1s^2 2s^2 2p^4\nDiscovered by: Joseph Priestley\nCharge: -2\n");
    } else if (atomicNumber == 9) {
        printf("Name: Fluorine\nSymbol: F\nAtomic Number: 9\nElectronic Configuration: 1s^2 2s^2 2p^5\nDiscovered by: Henri Moissan\nCharge: -1\n");
    } else if (atomicNumber == 10) {
        printf("Name: Neon\nSymbol: Ne\nAtomic Number: 10\nElectronic Configuration: 1s^2 2s^2 2p^6\nDiscovered by: William Ramsay\nCharge: 0\n");
    }
     else if (atomicNumber == 11) {
        printf("Name: Sodium\nSymbol: Na\nAtomic Number: 11\nElectronic Configuration: 1s^2 2s^2 2p^6 3s^1\nDiscovered by: Humphry Davy\nCharge: +1\n");
    } else if (atomicNumber == 12) {
        printf("Name: Magnesium\nSymbol: Mg\nAtomic Number: 12\nElectronic Configuration: 1s^2 2s^2 2p^6 3s^2\nDiscovered by: Joseph Black\nCharge: +2\n");
    } else if (atomicNumber == 13) {
        printf("Name: Aluminum\nSymbol: Al\nAtomic Number: 13\nElectronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^1\nDiscovered by: Hans Christian Oersted\nCharge: +3\n");
    } else if (atomicNumber == 14) {
        printf("Name: Silicon\nSymbol: Si\nAtomic Number: 14\nElectronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^2\nDiscovered by: Jöns Jacob Berzelius\nCharge: +4\n");
    } else if (atomicNumber == 15) {
        printf("Name: Phosphorus\nSymbol: P\nAtomic Number: 15\nElectronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^3\nDiscovered by: Hennig Brand\nCharge: -3\n");
    } else if (atomicNumber == 16) {
        printf("Name: Sulfur\nSymbol: S\nAtomic Number: 16\nElectronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^4\nDiscovered by: Ancient times\nCharge: -2\n");
    } else if (atomicNumber == 17) {
        printf("Name: Chlorine\nSymbol: Cl\nAtomic Number: 17\nElectronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^5\nDiscovered by: Humphry Davy\nCharge: -1\n");
    } else if (atomicNumber == 18) {
        printf("Name: Argon\nSymbol: Ar\nAtomic Number: 18\nElectronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6\nDiscovered by: Lord Rayleigh and William Ramsay\nCharge: 0\n");
    } else if (atomicNumber == 19) {
        printf("Name: Potassium\nSymbol: K\nAtomic Number: 19\nElectronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^1\nDiscovered by: Humphry Davy\nCharge: +1\n");
    } else if (atomicNumber == 20) {
        printf("Name: Calcium\nSymbol: Ca\nAtomic Number: 20\nElectronic Configuration: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^2\nDiscovered by: Humphry Davy\nCharge: +2\n");
    } else if (atomicNumber == 21) {
        printf("Name: Scandium\nSymbol: Sc\nAtomic Number: 21\nElectronic Configuration: [Ar] 3d^1 4s^2\nDiscovered by: Lars Fredrik Nilson\nCharge: +3\n");
    } else if (atomicNumber == 22) {
        printf("Name: Titanium\nSymbol: Ti\nAtomic Number: 22\nElectronic Configuration: [Ar] 3d^2 4s^2\nDiscovered by: William Gregor\nCharge: +4\n");
    } else if (atomicNumber == 23) {
        printf("Name: Vanadium\nSymbol: V\nAtomic Number: 23\nElectronic Configuration: [Ar] 3d^3 4s^2\nDiscovered by: Andres Manuel del Rio\nCharge: +5\n");
    } else if (atomicNumber == 24) {
        printf("Name: Chromium\nSymbol: Cr\nAtomic Number: 24\nElectronic Configuration: [Ar] 3d^5 4s^1\nDiscovered by: Louis Nicolas Vauquelin\nCharge: +6\n");
    } else if (atomicNumber == 25) {
        printf("Name: Manganese\nSymbol: Mn\nAtomic Number: 25\nElectronic Configuration: [Ar] 3d^5 4s^2\nDiscovered by: Johann Gottlieb Gahn\nCharge: +7\n");
    } else if (atomicNumber == 26) {
        printf("Name: Iron\nSymbol: Fe\nAtomic Number: 26\nElectronic Configuration: [Ar] 3d^6 4s^2\nDiscovered by: Ancient times\nCharge: +2 or +3\n");
    } else if (atomicNumber == 27) {
        printf("Name: Cobalt\nSymbol: Co\nAtomic Number: 27\nElectronic Configuration: [Ar] 3d^7 4s^2\nDiscovered by: Georg Brandt\nCharge: +2 or +3\n");
    } else if (atomicNumber == 28) {
        printf("Name: Nickel\nSymbol: Ni\nAtomic Number: 28\nElectronic Configuration: [Ar] 3d^8 4s^2\nDiscovered by: Axel Fredrik Cronstedt\nCharge: +2\n");
    } else if (atomicNumber == 29) {
        printf("Name: Copper\nSymbol: Cu\nAtomic Number: 29\nElectronic Configuration: [Ar] 3d^{10} 4s^1\nDiscovered by: Ancient times\nCharge: +1 or +2\n");
    } else if (atomicNumber == 30) {
        printf("Name: Zinc\nSymbol: Zn\nAtomic Number: 30\nElectronic Configuration: [Ar] 3d^{10} 4s^2\nDiscovered by: Ancient times\nCharge: +2\n");
    }
   else if (atomicNumber == 31) {
        printf("Name: Gallium\nSymbol: Ga\nAtomic Number: 31\nElectronic Configuration: [Ar] 3d^10 4s^2 4p^1\nDiscovered by: Paul Emile Lecoq de Boisbaudran\nCharge: +3\n");
    } else if (atomicNumber == 32) {
        printf("Name: Germanium\nSymbol: Ge\nAtomic Number: 32\nElectronic Configuration: [Ar] 3d^10 4s^2 4p^2\nDiscovered by: Clemens Winkler\nCharge: +4\n");
    } else if (atomicNumber == 33) {
        printf("Name: Arsenic\nSymbol: As\nAtomic Number: 33\nElectronic Configuration: [Ar] 3d^10 4s^2 4p^3\nDiscovered by: Albertus Magnus\nCharge: -3\n");
    } else if (atomicNumber == 34) {
        printf("Name: Selenium\nSymbol: Se\nAtomic Number: 34\nElectronic Configuration: [Ar] 3d^10 4s^2 4p^4\nDiscovered by: Jöns Jacob Berzelius\nCharge: -2\n");
    } else if (atomicNumber == 35) {
        printf("Name: Bromine\nSymbol: Br\nAtomic Number: 35\nElectronic Configuration: [Ar] 3d^10 4s^2 4p^5\nDiscovered by: Antoine Jérôme Balard\nCharge: -1\n");
    } else if (atomicNumber == 36) {
        printf("Name: Krypton\nSymbol: Kr\nAtomic Number: 36\nElectronic Configuration: [Ar] 3d^10 4s^2 4p^6\nDiscovered by: William Ramsay and Morris Travers\nCharge: 0\n");
    } else if (atomicNumber == 37) {
        printf("Name: Rubidium\nSymbol: Rb\nAtomic Number: 37\nElectronic Configuration: [Kr] 5s^1\nDiscovered by: Robert Bunsen and Gustav Kirchhoff\nCharge: +1\n");
    } else if (atomicNumber == 38) {
        printf("Name: Strontium\nSymbol: Sr\nAtomic Number: 38\nElectronic Configuration: [Kr] 5s^2\nDiscovered by: William Cruickshank\nCharge: +2\n");
    } else if (atomicNumber == 39) {
        printf("Name: Yttrium\nSymbol: Y\nAtomic Number: 39\nElectronic Configuration: [Kr] 4d^1 5s^2\nDiscovered by: Johan Gadolin\nCharge: +3\n");
    } else if (atomicNumber == 40) {
        printf("Name: Zirconium\nSymbol: Zr\nAtomic Number: 40\nElectronic Configuration: [Kr] 4d^2 5s^2\nDiscovered by: Martin Heinrich Klaproth\nCharge: +4\n");
    } else if (atomicNumber == 41) {
        printf("Name: Niobium\nSymbol: Nb\nAtomic Number: 41\nElectronic Configuration: [Kr] 4d^4 5s^1\nDiscovered by: Charles Hatchett\nCharge: +5\n");
    } else if (atomicNumber == 42) {
        printf("Name: Molybdenum\nSymbol: Mo\nAtomic Number: 42\nElectronic Configuration: [Kr] 4d^5 5s^1\nDiscovered by: Carl Wilhelm Scheele\nCharge: +6\n");
    } else if (atomicNumber == 43) {
        printf("Name: Technetium\nSymbol: Tc\nAtomic Number: 43\nElectronic Configuration: [Kr] 4d^5 5s^2\nDiscovered by: Carlo Perrier and Emilio Segrè\nCharge: +7\n");
    } else if (atomicNumber == 44) {
        printf("Name: Ruthenium\nSymbol: Ru\nAtomic Number: 44\nElectronic Configuration: [Kr] 4d^7 5s^1\nDiscovered by: Karl Ernst Claus\nCharge: +3\n");
    } else if (atomicNumber == 45) {
        printf("Name: Rhodium\nSymbol: Rh\nAtomic Number: 45\nElectronic Configuration: [Kr] 4d^8 5s^1\nDiscovered by: William Hyde Wollaston\nCharge: +3\n");
    } else if (atomicNumber == 46) {
        printf("Name: Palladium\nSymbol: Pd\nAtomic Number: 46\nElectronic Configuration: [Kr] 4d^10\nDiscovered by: William Hyde Wollaston\nCharge: +2\n");
    } else if (atomicNumber == 47) {
        printf("Name: Silver\nSymbol: Ag\nAtomic Number: 47\nElectronic Configuration: [Kr] 4d^10 5s^1\nDiscovered by: Ancient times\nCharge: +1\n");
    } else if (atomicNumber == 48) {
        printf("Name: Cadmium\nSymbol: Cd\nAtomic Number: 48\nElectronic Configuration: [Kr] 4d^10 5s^2\nDiscovered by: Friedrich Stromeyer\nCharge: +2\n");
    } else if (atomicNumber == 49) {
        printf("Name: Indium\nSymbol: In\nAtomic Number: 49\nElectronic Configuration: [Kr] 4d^10 5s^2 5p^1\nDiscovered by: Ferdinand Reich\nCharge: +3\n");
    } else if (atomicNumber == 50) {
        printf("Name: Tin\nSymbol: Sn\nAtomic Number: 50\nElectronic Configuration: [Kr] 4d^10 5s^2 5p^2\nDiscovered by: Ancient times\nCharge: +2 or +4\n");
    } else if (atomicNumber == 51) {
        printf("Name: Antimony\nSymbol: Sb\nAtomic Number: 51\nElectronic Configuration: [Kr] 4d^10 5s^2 5p^3\nDiscovered by: Ancient times\nCharge: +3 or +5\n");
    }
    else   if (atomicNumber == 52) {
        printf("Name: Tellurium\nSymbol: Te\nAtomic Number: 52\nElectronic Configuration: [Kr] 4d^10 5s^2 5p^4\nDiscovered by: Franz-Joseph Müller von Reichenstein\nCharge: -2\n");
    } else if (atomicNumber == 53) {
        printf("Name: Iodine\nSymbol: I\nAtomic Number: 53\nElectronic Configuration: [Kr] 4d^10 5s^2 5p^5\nDiscovered by: Bernard Courtois\nCharge: -1\n");
    } else if (atomicNumber == 54) {
        printf("Name: Xenon\nSymbol: Xe\nAtomic Number: 54\nElectronic Configuration: [Kr] 4d^10 5s^2 5p^6\nDiscovered by: William Ramsay and Morris Travers\nCharge: 0\n");
    } else if (atomicNumber == 55) {
        printf("Name: Cesium\nSymbol: Cs\nAtomic Number: 55\nElectronic Configuration: [Xe] 6s^1\nDiscovered by: Robert Bunsen and Gustav Kirchhoff\nCharge: +1\n");
    } else if (atomicNumber == 56) {
        printf("Name: Barium\nSymbol: Ba\nAtomic Number: 56\nElectronic Configuration: [Xe] 6s^2\nDiscovered by: Humphry Davy\nCharge: +2\n");
    } else if (atomicNumber == 57) {
        printf("Name: Lanthanum\nSymbol: La\nAtomic Number: 57\nElectronic Configuration: [Xe] 5d^1 6s^2\nDiscovered by: Carl Gustaf Mosander\nCharge: +3\n");
    } else if (atomicNumber == 58) {
        printf("Name: Cerium\nSymbol: Ce\nAtomic Number: 58\nElectronic Configuration: [Xe] 4f^1 5d^1 6s^2\nDiscovered by: Martin Heinrich Klaproth\nCharge: +3 or +4\n");
    } else if (atomicNumber == 59) {
        printf("Name: Praseodymium\nSymbol: Pr\nAtomic Number: 59\nElectronic Configuration: [Xe] 4f^3 6s^2\nDiscovered by: Carl Auer von Welsbach\nCharge: +3\n");
    } else if (atomicNumber == 60) {
        printf("Name: Neodymium\nSymbol: Nd\nAtomic Number: 60\nElectronic Configuration: [Xe] 4f^4 6s^2\nDiscovered by: Carl Auer von Welsbach\nCharge: +3\n");
    } else if (atomicNumber == 61) {
        printf("Name: Promethium\nSymbol: Pm\nAtomic Number: 61\nElectronic Configuration: [Xe] 4f^5 6s^2\nDiscovered by: Jacob A. Marinsky\nCharge: +3\n");
    } else if (atomicNumber == 62) {
        printf("Name: Samarium\nSymbol: Sm\nAtomic Number: 62\nElectronic Configuration: [Xe] 4f^6 6s^2\nDiscovered by: Paul Émile Lecoq de Boisbaudran\nCharge: +3\n");
    } else if (atomicNumber == 63) {
        printf("Name: Europium\nSymbol: Eu\nAtomic Number: 63\nElectronic Configuration: [Xe] 4f^7 6s^2\nDiscovered by: Eugène-Anatole Demarçay\nCharge: +2 or +3\n");
    } else if (atomicNumber == 64) {
        printf("Name: Gadolinium\nSymbol: Gd\nAtomic Number: 64\nElectronic Configuration: [Xe] 4f^7 5d^1 6s^2\nDiscovered by: Jean Charles Galissard de Marignac\nCharge: +3\n");
    } else if (atomicNumber == 65) {
        printf("Name: Terbium\nSymbol: Tb\nAtomic Number: 65\nElectronic Configuration: [Xe] 4f^9 6s^2\nDiscovered by: Carl Gustaf Mosander\nCharge: +3\n");
    } else if (atomicNumber == 66) {
        printf("Name: Dysprosium\nSymbol: Dy\nAtomic Number: 66\nElectronic Configuration: [Xe] 4f^10 6s^2\nDiscovered by: Paul Émile Lecoq de Boisbaudran\nCharge: +3\n");
    } else if (atomicNumber == 67) {
        printf("Name: Holmium\nSymbol: Ho\nAtomic Number: 67\nElectronic Configuration: [Xe] 4f^11 6s^2\nDiscovered by: Marc Delafontaine\nCharge: +3\n");
    } else if (atomicNumber == 68) {
        printf("Name: Erbium\nSymbol: Er\nAtomic Number: 68\nElectronic Configuration: [Xe] 4f^12 6s^2\nDiscovered by: Carl Gustaf Mosander\nCharge: +3\n");
    } else if (atomicNumber == 69) {
        printf("Name: Thulium\nSymbol: Tm\nAtomic Number: 69\nElectronic Configuration: [Xe] 4f^13 6s^2\nDiscovered by: Per Teodor Cleve\nCharge: +3\n");
    } else if (atomicNumber == 70) {
        printf("Name: Ytterbium\nSymbol: Yb\nAtomic Number: 70\nElectronic Configuration: [Xe] 4f^14 6s^2\nDiscovered by: Jean Charles Galissard de Marignac\nCharge: +2 or +3\n");
    }
    else if (atomicNumber == 71) {
        printf("Name: Lutetium\nSymbol: Lu\nAtomic Number: 71\nElectronic Configuration: [Xe] 4f^14 5d^1 6s^2\nDiscovered by: Georges Urbain\nCharge: +3\n");
    } else if (atomicNumber == 72) {
        printf("Name: Hafnium\nSymbol: Hf\nAtomic Number: 72\nElectronic Configuration: [Xe] 4f^14 5d^2 6s^2\nDiscovered by: Dirk Coster and George de Hevesy\nCharge: +4\n");
    } else if (atomicNumber == 73) {
        printf("Name: Tantalum\nSymbol: Ta\nAtomic Number: 73\nElectronic Configuration: [Xe] 4f^14 5d^3 6s^2\nDiscovered by: Anders Gustaf Ekeberg\nCharge: +5\n");
    } else if (atomicNumber == 74) {
        printf("Name: Tungsten\nSymbol: W\nAtomic Number: 74\nElectronic Configuration: [Xe] 4f^14 5d^4 6s^2\nDiscovered by: Carl Wilhelm Scheele\nCharge: +6\n");
    } else if (atomicNumber == 75) {
        printf("Name: Rhenium\nSymbol: Re\nAtomic Number: 75\nElectronic Configuration: [Xe] 4f^14 5d^5 6s^2\nDiscovered by: Masataka Ogawa\nCharge: +7\n");
    } else if (atomicNumber == 76) {
        printf("Name: Osmium\nSymbol: Os\nAtomic Number: 76\nElectronic Configuration: [Xe] 4f^14 5d^6 6s^2\nDiscovered by: Smithson Tennant\nCharge: +4\n");
    } else if (atomicNumber == 77) {
        printf("Name: Iridium\nSymbol: Ir\nAtomic Number: 77\nElectronic Configuration: [Xe] 4f^14 5d^7 6s^2\nDiscovered by: Smithson Tennant\nCharge: +3\n");
    } else if (atomicNumber == 78) {
        printf("Name: Platinum\nSymbol: Pt\nAtomic Number: 78\nElectronic Configuration: [Xe] 4f^14 5d^9 6s^1\nDiscovered by: Antonio de Ulloa\nCharge: +2 or +4\n");
    } else if (atomicNumber == 79) {
        printf("Name: Gold\nSymbol: Au\nAtomic Number: 79\nElectronic Configuration: [Xe] 4f^14 5d^10 6s^1\nDiscovered by: Ancient times\nCharge: +1 or +3\n");
    } else if (atomicNumber == 80) {
        printf("Name: Mercury\nSymbol: Hg\nAtomic Number: 80\nElectronic Configuration: [Xe] 4f^14 5d^10 6s^2\nDiscovered by: Ancient times\nCharge: +1 or +2\n");
    } else if (atomicNumber == 81) {
        printf("Name: Thallium\nSymbol: Tl\nAtomic Number: 81\nElectronic Configuration: [Xe] 4f^14 5d^10 6s^2 6p^1\nDiscovered by: William Crookes\nCharge: +1 or +3\n");
    } else if (atomicNumber == 82) {
        printf("Name: Lead\nSymbol: Pb\nAtomic Number: 82\nElectronic Configuration: [Xe] 4f^14 5d^10 6s^2 6p^2\nDiscovered by: Ancient times\nCharge: +2 or +4\n");
    } else if (atomicNumber == 83) {
        printf("Name: Bismuth\nSymbol: Bi\nAtomic Number: 83\nElectronic Configuration: [Xe] 4f^14 5d^10 6s^2 6p^3\nDiscovered by: Ancient times\nCharge: +3\n");
    } else if (atomicNumber == 84) {
        printf("Name: Polonium\nSymbol: Po\nAtomic Number: 84\nElectronic Configuration: [Xe] 4f^14 5d^10 6s^2 6p^4\nDiscovered by: Marie Curie and Pierre Curie\nCharge: +2 or +4\n");
    } else if (atomicNumber == 85) {
        printf("Name: Astatine\nSymbol: At\nAtomic Number: 85\nElectronic Configuration: [Xe] 4f^14 5d^10 6s^2 6p^5\nDiscovered by: Dale R. Corson, Kenneth Ross MacKenzie, Emilio Segrè\nCharge: -1 or +1\n");
    } else if (atomicNumber == 86) {
        printf("Name: Radon\nSymbol: Rn\nAtomic Number: 86\nElectronic Configuration: [Xe] 4f^14 5d^10 6s^2 6p^6\nDiscovered by: Friedrich Ernst Dorn\nCharge: 0\n");
    } else if (atomicNumber == 87) {
        printf("Name: Francium\nSymbol: Fr\nAtomic Number: 87\nElectronic Configuration: [Rn] 7s^1\nDiscovered by: Marguerite Perey\nCharge: +1\n");
    } else if (atomicNumber == 88) {
        printf("Name: Radium\nSymbol: Ra\nAtomic Number: 88\nElectronic Configuration: [Rn] 7s^2\nDiscovered by: Pierre Curie and Marie Curie\nCharge: +2\n");
    } else if (atomicNumber == 89) {
        printf("Name: Actinium\nSymbol: Ac\nAtomic Number: 89\nElectronic Configuration: [Rn] 6d^1 7s^2\nDiscovered by: Friedrich Oskar Giesel\nCharge: +3\n");
    } else if (atomicNumber == 90) {
        printf("Name: Thorium\nSymbol: Th\nAtomic Number: 90\nElectronic Configuration: [Rn] 6d^2 7s^2\nDiscovered by: Jöns Jacob Berzelius\nCharge: +4\n");
    }
    else  if (atomicNumber == 91) {
        printf("Name: Protactinium\nSymbol: Pa\nAtomic Number: 91\nElectronic Configuration: [Rn] 5f^2 6d^1 7s^2\nDiscovered by: Otto Hahn and Lise Meitner\nCharge: +5\n");
    } else if (atomicNumber == 92) {
        printf("Name: Uranium\nSymbol: U\nAtomic Number: 92\nElectronic Configuration: [Rn] 5f^3 6d^1 7s^2\nDiscovered by: Martin Heinrich Klaproth\nCharge: +6\n");
    } else if (atomicNumber == 93) {
        printf("Name: Neptunium\nSymbol: Np\nAtomic Number: 93\nElectronic Configuration: [Rn] 5f^4 6d^1 7s^2\nDiscovered by: Edwin McMillan and Philip H. Abelson\nCharge: +5\n");
    } else if (atomicNumber == 94) {
        printf("Name: Plutonium\nSymbol: Pu\nAtomic Number: 94\nElectronic Configuration: [Rn] 5f^6 7s^2\nDiscovered by: Glenn T. Seaborg\nCharge: +4\n");
    } else if (atomicNumber == 95) {
        printf("Name: Americium\nSymbol: Am\nAtomic Number: 95\nElectronic Configuration: [Rn] 5f^7 7s^2\nDiscovered by: Glenn T. Seaborg\nCharge: +3\n");
    } else if (atomicNumber == 96) {
        printf("Name: Curium\nSymbol: Cm\nAtomic Number: 96\nElectronic Configuration: [Rn] 5f^7 6d^1 7s^2\nDiscovered by: Glenn T. Seaborg\nCharge: +3\n");
    } else if (atomicNumber == 97) {
        printf("Name: Berkelium\nSymbol: Bk\nAtomic Number: 97\nElectronic Configuration: [Rn] 5f^9 7s^2\nDiscovered by: Glenn T. Seaborg\nCharge: +3\n");
    } else if (atomicNumber == 98) {
        printf("Name: Californium\nSymbol: Cf\nAtomic Number: 98\nElectronic Configuration: [Rn] 5f^10 7s^2\nDiscovered by: Glenn T. Seaborg\nCharge: +3\n");
    } else if (atomicNumber == 99) {
        printf("Name: Einsteinium\nSymbol: Es\nAtomic Number: 99\nElectronic Configuration: [Rn] 5f^11 7s^2\nDiscovered by: Albert Ghiorso\nCharge: +3\n");
    } else if (atomicNumber == 100) {
        printf("Name: Fermium\nSymbol: Fm\nAtomic Number: 100\nElectronic Configuration: [Rn] 5f^12 7s^2\nDiscovered by: Albert Ghiorso\nCharge: +3\n");
    } else if (atomicNumber == 101) {
        printf("Name: Mendelevium\nSymbol: Md\nAtomic Number: 101\nElectronic Configuration: [Rn] 5f^13 7s^2\nDiscovered by: Glenn T. Seaborg\nCharge: +3\n");
    } else if (atomicNumber == 102) {
        printf("Name: Nobelium\nSymbol: No\nAtomic Number: 102\nElectronic Configuration: [Rn] 5f^14 7s^2\nDiscovered by: Joint Institute for Nuclear Research\nCharge: +2 or +3\n");
    } else if (atomicNumber == 103) {
        printf("Name: Lawrencium\nSymbol: Lr\nAtomic Number: 103\nElectronic Configuration: [Rn] 5f^14 7s^2 7p^1\nDiscovered by: Lawrence Berkeley National Laboratory\nCharge: +3\n");
    } else if (atomicNumber == 104) {
        printf("Name: Rutherfordium\nSymbol: Rf\nAtomic Number: 104\nElectronic Configuration: [Rn] 5f^14 6d^2 7s^2\nDiscovered by: Joint Institute for Nuclear Research\nCharge: +4\n");
    } else if (atomicNumber == 105) {
        printf("Name: Dubnium\nSymbol: Db\nAtomic Number: 105\nElectronic Configuration: [Rn] 5f^14 6d^3 7s^2\nDiscovered by: Joint Institute for Nuclear Research\nCharge: +5\n");
    } else if (atomicNumber == 106) {
        printf("Name: Seaborgium\nSymbol: Sg\nAtomic Number: 106\nElectronic Configuration: [Rn] 5f^14 6d^4 7s^2\nDiscovered by: Lawrence Berkeley National Laboratory\nCharge: +6\n");
    } else if (atomicNumber == 107) {
        printf("Name: Bohrium\nSymbol: Bh\nAtomic Number: 107\nElectronic Configuration: [Rn] 5f^14 6d^5 7s^2\nDiscovered by: GSI Helmholtz Centre for Heavy Ion Research\nCharge: +7\n");
    } else if (atomicNumber == 108) {
        printf("Name: Hassium\nSymbol: Hs\nAtomic Number: 108\nElectronic Configuration: [Rn] 5f^14 6d^6 7s^2\nDiscovered by: GSI Helmholtz Centre for Heavy Ion Research\nCharge: +8\n");
    } else if (atomicNumber == 109) {
        printf("Name: Meitnerium\nSymbol: Mt\nAtomic Number: 109\nElectronic Configuration: [Rn] 5f^14 6d^7 7s^2\nDiscovered by: GSI Helmholtz Centre for Heavy Ion Research\nCharge: +7\n");
    } else if (atomicNumber == 110) {
        printf("Name: Darmstadtium\nSymbol: Ds\nAtomic Number: 110\nElectronic Configuration: [Rn] 5f^14 6d^8 7s^2\nDiscovered by: GSI Helmholtz Centre for Heavy Ion Research\nCharge: +6\n");
    } else if (atomicNumber == 111) {
        printf("Name: Roentgenium\nSymbol: Rg\nAtomic Number: 111\nElectronic Configuration: [Rn] 5f^14 6d^9 7s^2\nDiscovered by: GSI Helmholtz Centre for Heavy Ion Research\nCharge: +5\n");
    } else if (atomicNumber == 112) {
        printf("Name: Copernicium\nSymbol: Cn\nAtomic Number: 112\nElectronic Configuration: [Rn] 5f^14 6d^10 7s^2\nDiscovered by: GSI Helmholtz Centre for Heavy Ion Research\nCharge: +2\n");
    } else if (atomicNumber == 113) {
        printf("Name: Nihonium\nSymbol: Nh\nAtomic Number: 113\nElectronic Configuration: [Rn] 5f^14 6d^10 7s^2 7p^1\nDiscovered by: RIKEN\nCharge: +1 or +3\n");
    } else if (atomicNumber == 114) {
        printf("Name: Flerovium\nSymbol: Fl\nAtomic Number: 114\nElectronic Configuration: [Rn] 5f^14 6d^10 7s^2 7p^2\nDiscovered by: Joint Institute for Nuclear Research\nCharge: +2 or +4\n");
    } else if (atomicNumber == 115) {
        printf("Name: Moscovium\nSymbol: Mc\nAtomic Number: 115\nElectronic Configuration: [Rn] 5f^14 6d^10 7s^2 7p^3\nDiscovered by: Joint Institute for Nuclear Research\nCharge: +1 or +3\n");
    } else if (atomicNumber == 116) {
        printf("Name: Livermorium\nSymbol: Lv\nAtomic Number: 116\nElectronic Configuration: [Rn] 5f^14 6d^10 7s^2 7p^4\nDiscovered by: Joint Institute for Nuclear Research\nCharge: +2\n");
    } else if (atomicNumber == 117) {
        printf("Name: Tennessine\nSymbol: Ts\nAtomic Number: 117\nElectronic Configuration: [Rn] 5f^14 6d^10 7s^2 7p^5\nDiscovered by: Joint Institute for Nuclear Research\nCharge: -1\n");
    } else if (atomicNumber == 118) {
        printf("Name: Oganesson\nSymbol: Og\nAtomic Number: 118\nElectronic Configuration: [Rn] 5f^14 6d^10 7s^2 7p^6\nDiscovered by: Joint Institute for Nuclear Research\nCharge: 0\n");
    } else {
        printf("Element not found in this range.\n");
    }
        }
    }
}