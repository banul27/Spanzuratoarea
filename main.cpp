#include <iostream>
#include <cstring>
#include <windows.h>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;

void greseli(int viata){
    HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h,13);
    if(viata==7){
        cout<<"  +---+" << endl;
        cout<<"  |   |" << endl;
        cout<<"      |" << endl;
        cout<<"      |     O" << endl;
        cout<<"      |    /|\\" << endl;
        cout<<"      |    / \\" << endl;
        cout<<" ======" << endl;
    }
    if(viata==6)
    {
        cout<<"  +---+" << endl;
        cout<<"  |   |" << endl;
        cout<<"      |" << endl;
        cout<<"      |" << endl;
        cout<<"      |" << endl;
        cout<<"      |" << endl;
        cout<<" ======" << endl;
    }
    else if(viata==5)
    {
        cout<<"  +---+" << endl;
        cout<<"  |   |" << endl;
        cout<<"  O   |" << endl;
        cout<<"      |" << endl;
        cout<<"      |" << endl;
        cout<<"      |" << endl;
        cout<<" ======" << endl;
    }
    else if(viata==4)
    {
        cout<<"  +---+" << endl;
        cout<<"  |   |" << endl;
        cout<<"  O   |" << endl;
        cout<<"  |   |" << endl;
        cout<<"      |" << endl;
        cout<<"      |" << endl;
        cout<<" ======" << endl;
    }
    else if(viata==3)
    {
        cout<<"  +---+" << endl;
        cout<<"  |   |" << endl;
        cout<<"  O   |" << endl;
        cout<<" /|   |" << endl;
        cout<<"      |" << endl;
        cout<<"      |" << endl;
        cout<<" ======" << endl;
    }
    else if(viata==2)
    {
        cout<<"  +---+" << endl;
        cout<<"  |   |" << endl;
        cout<<"  O   |" << endl;
        cout<<" /|\\  |" << endl;
        cout<<"      |" << endl;
        cout<<"      |" << endl;
        cout<<" ======" << endl;
    }
    else if(viata==1)
    {
        cout<<"  +---+" << endl;
        cout<<"  |   |" << endl;
        cout<<"  O   |" << endl;
        cout<<" /|\\  |" << endl;
        cout<<" /    |" << endl;
        cout<<"      |" << endl;
        cout<<" ======" << endl;
    }
    else if(viata==0)
    {
        cout<<"  +---+" << endl;
        cout<<"  |   |" << endl;
        cout<<"  O   |" << endl;
        cout<<" /|\\  |" << endl;
        cout<<" / \\  |" << endl;
        cout<<"      |" << endl;
        cout<<" ======" << endl;
    }
    SetConsoleTextAttribute(h,7);
    cout << endl;
}

void spanzuratoarea(int afisare){
    HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h,13);
    cout<<" SSS   PPPP      A      N     N  ZZZZZZ  U    U  RRRR      A   TTTTTTTTT  OOOO      A     RRRR   EEEEEE     A" << endl;
    cout<<"S      P   P    A A     NN    N       Z  U    U  R   R    A A      T     O    O    A A    R   R  E         A A" << endl;
    cout<<"S      P   p   A   A    N N   N      Z   U    U  R   R   A   A     T     O    O   A   A   R   R  E        A   A" << endl;
    cout<<" SSS   PPPP   A     A   N  N  N   ZZZZZ  U    U  RRRR   A     A    T     O    O  A     A  RRRR   EEEE    A     A" << endl;
    cout<<"    S  P      AAAAAAA   N   N N    Z     U    U  R R    AAAAAAA    T     O    O  AAAAAAA  R R    E       AAAAAAA" << endl;
    cout<<"    S  P      A     A   N    NN   Z      U    U  R  R   A     A    T     O    O  A     A  R  R   E       A     A" << endl;
    cout<<" SSS   P      A     A   N     N  ZZZZZZ   UUUU   R   R  A     A    T      OOOO   A     A  R   R  EEEEEE  A     A" << endl;
    cout<< endl;
    SetConsoleTextAttribute(h,7);
}

void viata_ramasa(int viata){
    HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
    if(viata > 1){
        cout << "Mai ai ";
        SetConsoleTextAttribute(h,13);
        cout << viata;
        SetConsoleTextAttribute(h,7);
        cout << " incercari ramase." << endl;
        cout << endl;
    }
    if (viata == 1){
        SetConsoleTextAttribute(h,13);
        cout << "Ultima";
        SetConsoleTextAttribute(h,7);
        cout << " sansa!" << endl;
        cout << endl;
    }
}

void culoare(char n[50]){
    HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h,13);
    cout << n;
    SetConsoleTextAttribute(h,7);
}

void raspunsuri(char incerc[100]){
    HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
    cout << "Incercari ghicite: ";
    SetConsoleTextAttribute(h,13);
    cout << incerc << endl << endl;
    SetConsoleTextAttribute(h,7);
}

char fisier[50][50];
char incercari[100];
int winstreak, winstreak2;
int main(){
    int variabila=-1;
    bool PlayAgain=true;
    bool schimbaremod = false;
    HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
    int v[50];
    spanzuratoarea(winstreak);
    bool Singleplayer = false;
    bool Multiplayer = false;

    cout << "Choose your gamemode:" << endl << endl;
    culoare("SINGLEPLAYER");
    cout << " - Apasa ";
    culoare ("1");
    cout << " pentru a continua." << endl;
    culoare("MULTIPLAYER");
    cout << " - Apasa ";
    culoare ("2");
    cout << " pentru a continua." << endl << endl;
    int alegere;
    SetConsoleTextAttribute(h,13);
    cin >> alegere;
    SetConsoleTextAttribute(h,7);

    if(alegere == 1)
        Singleplayer = true;
    if(alegere == 2)
        Multiplayer = true;
    if(alegere != 1 && alegere != 2)
        PlayAgain= false;
    cin.ignore();
    system("cls");
    spanzuratoarea(winstreak);

    while(PlayAgain==1){
        int i, pr=0, viata=6, contor=0;
        char cuvant[50], raspuns[50], litera[50];
        int lungimecuv;

        if(Multiplayer == true){
            cout << "Introdu un cuvant pentru a incepe: ";
            cin.getline(cuvant,50);
        }

        int indice = 1;
        int numarcuvintefisier = 0;
        char ajutor[50];
        if(Singleplayer == true){
            ifstream librarie("cuvinte.txt");
            while(librarie >> ajutor){
                strcpy(fisier[indice], ajutor);
                indice++;
                numarcuvintefisier++;
            }
            librarie.close();
            srand(time(nullptr));
            int frecv[numarcuvintefisier+1] = {0};
            int numarrandom = rand() % numarcuvintefisier + 1;
            int pup=0;

            for(i=1; i<=numarcuvintefisier; i++){
                if(frecv[i] == 0)
                    pup = 1;
            }

            if(pup == 0)
                frecv[numarcuvintefisier+1] = {0};

            if(frecv[numarrandom] == 0){
                strcpy(cuvant, fisier[numarrandom]);
                frecv[numarrandom] = 1;
            }
            else{
                while(frecv[numarrandom] != 0)
                    numarrandom = rand() % numarcuvintefisier + 1;
                strcpy(cuvant, fisier[numarrandom]);
                frecv[numarrandom] = 1;
            }
        }

        system("cls");
        lungimecuv = strlen(cuvant);

        spanzuratoarea(winstreak);
        cout << "Prietenul tau, Mihai, are nevoie de ajutor! Ghiceste cuvantul pentru a-l salva!" << endl;

        if(Multiplayer == true){
            if(lungimecuv<3){
                viata=0;
            }
            for (i=0; i<lungimecuv; i++){
                if(cuvant[i]>='A' && cuvant[i]<='Z')
                    cuvant[i]=cuvant[i] + 32;
                if(cuvant[i]<'A' || cuvant[i]>'z'){
                    viata=0;
                }
            }
        }

        for(i=1; i<lungimecuv; i++)
            raspuns[i] = '_';
        greseli(viata);

        if(schimbaremod == false){
            if(winstreak==1){
                culoare("Primul");
                cout << " tau meci castigat! Keep it up!" << endl << endl;
            }

            if(winstreak>1){
                cout << "Ai castigat ";
                SetConsoleTextAttribute(h,13);
                cout << winstreak;
                SetConsoleTextAttribute(h,7);
                cout << " meciuri la rand! You're on fire!" << endl << endl;
            }

            if(winstreak2>1 && winstreak==0){
                cout << "Ai pierdut winstreak-ul de ";
                SetConsoleTextAttribute(h,13);
                cout << winstreak2;
                SetConsoleTextAttribute(h,7);
                cout << " meciuri. Poti mai mult de atat!" << endl << endl;
            }

            if(winstreak2==1 && winstreak==0){
                cout << "Doar ce castigasei ";
                culoare("1");
                cout << " meci si deja ai pierdut? Poate data viitoare!" << endl << endl;
            }
            winstreak2=winstreak;
        }
        else{
            if(winstreak>=1){
                cout << "Ai pierdut winstreak-ul de ";
                SetConsoleTextAttribute(h,13);
                cout << winstreak;
                SetConsoleTextAttribute(h,7);
                cout << " deoarece ai schimbat modul de joc din ";
                if(Singleplayer == true){
                    culoare("MULTIPLAYER");
                    cout << " in ";
                    culoare("SINGLEPLAYER");
                }
                if(Multiplayer == true){
                    culoare("SINGLEPLAYER");
                    cout << " in ";
                    culoare("MULTIPLAYER");
                }
                cout << ". Sorry! :(" << endl << endl;
            }
            schimbaremod = false;
            winstreak=0;
        }

        for(i=0; i<lungimecuv; i++)
            v[i]=0;

        int x=i-1;
        raspuns[0]=cuvant[0];
        raspuns[x]=cuvant[x];

        strcat(incercari, cuvant);
        strcpy(incercari+1, incercari+lungimecuv);
        if(raspuns[0] != raspuns[x]){
            strcat(incercari, ", ");
            strcat(incercari, cuvant);
            strcpy(incercari+3, incercari+lungimecuv+2);
        }

        raspunsuri(incercari);
        for(i=0; i<lungimecuv; i++){
            if(viata==0)
                raspuns[i]=cuvant[i];
            if(cuvant[i]==cuvant[0]){
                raspuns[i]=cuvant[0];
                v[i]=1;
            }
            if(cuvant[i]==cuvant[x]){
                raspuns[i]=cuvant[x];
                v[i]=1;
            }
            cout << raspuns[i] << " ";
        }
        cout << endl;

        if(Multiplayer == true){
            int verificarelitere = 0;
            for(i=0; i<lungimecuv; i++)
                if(v[i]==0)
                    verificarelitere = 1;
            if(verificarelitere == 0)
                viata = 0;
        }

        if(viata>0){
            cout << "Ai ";
            culoare("6");
            cout<< " vieti la dispozitie! Bafta! :3" << endl << endl;
        }

        if(Multiplayer == true){
            if(viata == 0){
                cout << endl << "CE-AI FACUT???" << endl << "L-ai lasat balta pe Mihai si ai ales un cuvant sub ";
                culoare("3 litere");
                cout << ", ";
                culoare("deja rezolvat");
                cout << " sau care contine ";
                culoare("caractere interzise");
                cout << ". Unluckyyy." << endl;
                contor=1;
            }
        }

        while (viata>0){
            cout << "Introdu o litera or take a guess: ";
            cin.getline (litera,50);
            int lungimelit = strlen(litera);

            system("cls");
            spanzuratoarea(winstreak);
            cout << "Prietenul tau, Mihai, are nevoie de ajutor! Ghiceste cuvantul pentru a-l salva!" << endl;

            int caracterenepermise = 0;
            for(i=0; i<lungimelit; i++)
                if (litera[i]>='A' && litera[i]<='Z')
                    litera[i]=litera[i] + 32;
            for(i=0; i<lungimelit; i++)
                if (litera[i]<'a' || litera[i]>'z')
                    caracterenepermise = 1;

            if(lungimelit > 0){
                strcat(incercari, ", ");
                strcat(incercari, litera);
            }

            if(lungimelit>1 && lungimelit<lungimecuv || lungimelit>lungimecuv){
                viata--;
                greseli(viata);
                pr=1;
                if(viata>0){
                    if(winstreak==1){
                        culoare("Primul");
                        cout << " tau meci castigat! Keep it up!" << endl << endl;
                    }
                    if(winstreak>1){
                        cout << "Ai castigat ";
                        SetConsoleTextAttribute(h,13);
                        cout << winstreak;
                        SetConsoleTextAttribute(h,7);
                        cout << " meciuri la rand! You're on fire!" << endl << endl;
                    }
                }
                raspunsuri(incercari);

                for (int i=0; i<lungimecuv; i++)
                    cout << raspuns[i] << " ";
                cout << endl;
                cout << "VREI SA-L OMORI PE MIHAI? Introdu doar cate ";
                culoare("o litera,");
                cout << " sau incearca sa ghicesti ";
                culoare("direct cuvantul!");
                cout << endl;
                viata_ramasa(viata);
            }

            if(lungimelit==lungimecuv){
                if(strcmp(litera, cuvant)==0){
                    greseli(viata);
                    raspunsuri(incercari);

                    for(i=0; i<lungimecuv; i++)
                        cout << cuvant[i] << " ";
                    cout << endl;
                    if(pr==0){
                        cout << endl;
                        cout << "Uau, ai ghicit cuvantul: ";
                        culoare(cuvant);
                        cout << " din prima! Mihai se poate baza pe tine!" << endl;
                        winstreak++;
                        break;
                    }
                    else{
                        cout << endl;
                        cout << "L-ai salvat pe Mihai ghicind cuvantul: ";
                        culoare(cuvant);
                        cout << ". You are a true friend." << endl;
                        winstreak++;
                        break;
                    }
                }
                else{
                    pr=1;
                    viata--;
                    greseli(viata);
                    if(viata>0){
                        if(winstreak==1){
                            culoare("Primul");
                            cout << " tau meci castigat! Keep it up!" << endl << endl;
                        }
                        if(winstreak>1){
                            cout << "Ai castigat ";
                            SetConsoleTextAttribute(h,13);
                            cout << winstreak;
                            SetConsoleTextAttribute(h,7);
                            cout << " meciuri la rand! You're on fire!" << endl << endl;
                        }
                    }
                    raspunsuri(incercari);

                    for(i=0; i<lungimecuv; i++)
                        cout << raspuns[i] << " ";
                    cout << endl;
                    if(caracterenepermise == 0)
                        cout << "Daca te duci, te duci de tot, iar Mihai nu mai are mult!" << endl;
                    else{
                        cout << "Ai folosit ";
                        culoare("caractere interzise!");
                        cout << " Fii mai atent!" << endl;
                    }
                    viata_ramasa(viata);
                }
            }

            if(lungimelit == 0){
                greseli(viata);
                if(viata>0){
                    if(winstreak==1){
                        culoare("Primul");
                        cout << " tau meci castigat! Keep it up!" << endl << endl;
                    }
                    if(winstreak>1){
                        cout << "Ai castigat ";
                        SetConsoleTextAttribute(h,13);
                        cout << winstreak;
                        SetConsoleTextAttribute(h,7);
                        cout << " meciuri la rand! You're on fire!" << endl << endl;
                    }
                }
                raspunsuri(incercari);
                for(i=0; i<lungimecuv; i++)
                    cout << raspuns[i] << " ";
                cout << endl;
                cout << "Continua-ti jocul ghicind o litera sau un cuvant!" << endl;
                viata_ramasa(viata);
            }

            if(lungimelit==1){
                pr=1;
                bool literagasita = false;
                int k = 0;
                for (i=0; i<lungimecuv; i++) {
                    if (cuvant[i] == litera[0]){
                        if(v[i]==1)
                            k = 1;
                        else{
                            raspuns[i] = litera[0];
                            literagasita = true;
                            v[i]=1;
                            k = 2;
                        }
                    }
                }

                if(k!=2)
                    viata--;

                bool toateliterele = true;
                for (int i=0; i<lungimecuv; i++)
                    if (raspuns[i] == '_') {
                        toateliterele = false;
                        break;
                    }

                greseli(viata);
                if(viata>0 && toateliterele == false){
                    if(winstreak==1){
                        culoare("Primul");
                        cout << " tau meci castigat! Keep it up!" << endl << endl;
                    }
                    if(winstreak>1){
                        cout << "Ai castigat ";
                        SetConsoleTextAttribute(h,13);
                        cout << winstreak;
                        SetConsoleTextAttribute(h,7);
                        cout << " meciuri la rand! You're on fire!" << endl << endl;
                    }
                }
                raspunsuri(incercari);

                for(i=0; i<lungimecuv; i++)
                    cout << raspuns[i] << " ";
                cout << endl;

                if(k == 1 && viata > 0){
                    cout << "Ai ghicit deja litera ";
                    culoare(litera);
                    cout << ". Halal prieten." << endl;
                }

                if(k == 2){
                    cout << "Mihai respira usurat, cuvantul contine litera: ";
                    culoare(litera);
                    cout << "." << endl << endl;
                }

                if(k == 0){
                    if(caracterenepermise == 0){
                        cout << "Cuvantul nu contine litera ";
                        culoare(litera);
                        cout << ".";
                        if(viata > 0)
                            cout <<" Mai incearca!";
                        cout << endl;
                    }
                    else{
                        culoare(litera);
                        cout << " este un ";
                        culoare("caracter interzis!");
                        cout << " Fii mai atent!" << endl;
                    }
                }

                if(literagasita == 0)
                    viata_ramasa(viata);

                if (toateliterele == true) {
                    cout << endl;
                    cout << "L-ai salvat pe Mihai ghicind cuvantul: ";
                    culoare(cuvant);
                    cout << ". You are a true friend." << endl;
                    winstreak++;
                    break;
                }
            }
        }
        if(viata==0){
            winstreak=0;
            if(contor==0){
                cout << endl;
                cout << "Whomp, whomp. Cuvantul era: ";
                culoare(cuvant);
                cout << "." << endl << "Mult noroc data viitoare! :3" << endl;
            }
        }

        cout << endl << endl;
        cout << "Vrei sa joci din nou? Apasa ";
        culoare("1");
        cout << " pentru a continua." << endl;
        cout << "Vrei sa schimbi modul de joc la ";
        if(Singleplayer == true)
            culoare("MULTIPLAYER?");
        if(Multiplayer == true)
            culoare("SINGLEPLAYER?");
        cout << " Apasa ";
        culoare("2");
        cout << " pentru a continua." << endl << endl;

        int alegere2;
        SetConsoleTextAttribute(h,13);
        cin >> alegere2;
        SetConsoleTextAttribute(h,7);

        if(alegere2!=1 && alegere2!=2)
            PlayAgain = false;
        cin.ignore();
        if(alegere2==2){
            if(Singleplayer == true){
                Singleplayer = false;
                Multiplayer = true;
            }
            else if(Multiplayer == true){
                Multiplayer = false;
                Singleplayer = true;
            }
            schimbaremod = true;
        }

        int lungimeincercari = strlen(incercari);
        for(i=0; i<=lungimecuv; i++)
            cuvant[i]='\0';
        for(i=0; i<=lungimeincercari; i++)
            incercari[i]='\0';
        cout << endl;
    }

    system("cls");
    spanzuratoarea(winstreak);
    cout << "Stai linistit! Mihai este acum in siguranta!" << endl;
    greseli(7);
    cout << "Sper ca te-ai distrat jucandu-te ";
    culoare("spanzuratoarea!");
    cout << endl;
    return 0;
}
