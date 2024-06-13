#include <cstdlib>
#include <cstdio>

int nextStep{};
int score{0};
char playerName[25] = {'\0'};

void insertName() {
  printf("                                                                                                                                 \n");
  printf("    ***********  Inserisci Nome Giocatore  ***********                                                                           \n");
  printf("                                                                                                                                 \n");
  scanf(" %s", playerName);
  printf("                                                                                                                                 \n");
  printf("    Benevenuto, %s! Cominciamo con le domande :P                                                                                 \n", playerName);
  printf("                                                                                                                                 \n");
}

char insertAnswer() {
  char userAnswer;
  printf("                                                                                                                                 \n");
  printf("$> ");
  scanf(" %c", &userAnswer);
  return userAnswer;
}

void splash() {
  // Uno semplice splash screen di Benvenuto
  printf("                                                                                                                                 \n");
  printf("                                                             .-'''-.                                       ___      ___      ___   \n");
  printf("      .---.   .-''-.                                        '   _    \\                                  .'/   \\  .'/   \\  .'/   \\  \n");
  printf("  .--.|   |  //'` `\\|            .--.                     /   /` '.   \\    _..._         __.....__     / /     \\/ /     \\/ /     \\ \n");
  printf("  |__||   | '/'    '|            |__|                    .   |     \\  '  .'     '.   .-''         '.   | |     || |     || |     | \n");
  printf("  .--.|   ||'      '|            .--.                    |   '      |  '.   .-.   . /     .-''\"'-.  `. | |     || |     || |     | \n");
  printf("  |  ||   |||     /||            |  |                    \\    \\     / / |  '   '  |/     /________\\   \\|/`.   .'|/`.   .'|/`.   .' \n");
  printf("  |  ||   | \'. .'/||     _    _ |  |.--------. .--------.`.   ` ..' /  |  |   |  ||                  | `.|   |  `.|   |  `.|   |  \n");
  printf("  |  ||   |  `--'` ||    | '  / ||  ||____    | |____    |   '-...-'`   |  |   |  |\\    .-------------'  ||___|   ||___|   ||___|  \n");
  printf("  |  ||   |        ||   .' | .' ||  |    /   /      /   /               |  |   |  | \\    '-.____...---.  |/___/   |/___/   |/___/  \n");
  printf("  |__||   |        || />/  | /  ||__|  .'   /     .'   /                |  |   |  |  `.             .'   .'.--.   .'.--.   .'.--.  \n");
  printf("      '---'        ||//|   `'.  |     /    /___  /    /___              |  |   |  |    `''-...... -'    | |    | | |    | | |    | \n");
  printf("                   |'/ '   .'|  '/   |         ||         |             |  |   |  |                     \\_\\    / \\_\\    / \\_\\    / \n");
  printf("                   |/   `-'  `--'    |_________||_________|             '--'   '--'                      `''--'   `''--'   `''--'  \n");
  printf("                                                                                                                                   \n");
}

void istruzioni() {
  // Le istruzioni de il quizzone!
  printf("                                                                                                                                 \n");
  printf("  Benvenuti a \"il quizzone!\", un test che verifica le vostre competenze in meccanica quantistica!                              \n");
  printf("  Il programma vi sottoporra' 10 domande a risposta multipla, per ogno domanda l'utente deve fornire                             \n");
  printf("  una risposta tra A, B e C.                                                                                                     \n");
  printf("                                                                                                                                 \n");
}

void clearScreen() {
  // invia il comando cls per ripulire la schermata di windows
  system("cls");
}

void menuPrincipale() {
  // Il menu principale de il quizzone!
  char scelta;
  printf("                                                                                                                                 \n");
  printf("    ***********  Menu princpale  ***********                                                                                     \n");
  printf("      A) Inizia una nuova partita                                                                                                \n");
  printf("      B) Esci dal gioco                                                                                                          \n");
  printf("                                                                                                                                 \n");
  scelta = insertAnswer();
  if (scelta == 'A' || scelta == 'a') {
    nextStep = 0;
  } else {
    nextStep =1;
  }
}

void questionario() {
  char userAnswer;
  printf("                                                                                                                        \n");
  printf("  Chi era il leader dell'Unione Sovietica durante la seconda guerra mondiale?                                           \n");
  printf("                                                                                                                        \n");
  printf("  A) Joseph Stalin                                                                                                      \n");
  printf("  B) Nikita Khrushchev                                                                                                  \n");
  printf("  C) Vladimir Lenin                                                                                                     \n");
  printf("  D) Mikhail Gorbachev                                                                                                  \n");
  printf("                                                                                                                        \n");
  //Risposta corretta: A) Joseph Stalin
  userAnswer = insertAnswer();
  if (userAnswer  == 'A' || userAnswer  == 'a') {
    score++;
  }
  printf("                                                                                                                        \n");
  printf("  Quale evento diede inizio alla prima guerra mondiale nel 1914?                                                        \n");
  printf("                                                                                                                        \n");
  printf("  A) L'attentato di Sarajevo                                                                                            \n");
  printf("  B) La rivoluzione russa                                                                                               \n");
  printf("  C) La firma del Trattato di Versailles                                                                                \n");
  printf("  D) L'occupazione della Ruhr                                                                                           \n");
  printf("                                                                                                                        \n");
  //Risposta corretta: A) L'attentato di Sarajevo
  userAnswer = insertAnswer();
  if (userAnswer  == 'A' || userAnswer  == 'a') {
    score++;
  }
  printf("                                                                                                                        \n");
  printf("  Qual è stato il primo impero mondiale della storia, fondato nel 27 a.C.?                                              \n");
  printf("                                                                                                                        \n");
  printf("  A) Impero Persiano                                                                                                    \n");
  printf("  B) Impero Romano                                                                                                      \n");
  printf("  C) Impero Mongolo                                                                                                     \n");
  printf("  D) Impero Bizantino                                                                                                   \n");
  printf("                                                                                                                        \n");
  //Risposta corretta: B) Impero Romano
  userAnswer = insertAnswer();
  if (userAnswer  == 'B' || userAnswer  == 'b') {
    score++;
  }
  printf("                                                                                                                        \n");
  printf("  Chi ha scoperto l'America nel 1492?                                                                                   \n");
  printf("                                                                                                                        \n");
  printf("  A) Cristoforo Colombo                                                                                                 \n");
  printf("  B) Marco Polo                                                                                                         \n");
  printf("  C) Ferdinando Magellano                                                                                               \n");
  printf("  D) Vasco da Gama                                                                                                      \n");
  printf("                                                                                                                        \n");
  //Risposta corretta: A) Cristoforo Colombo
  userAnswer = insertAnswer();
  if (userAnswer  == 'A' || userAnswer  == 'a') {
    score++;
  }
  printf("                                                                                                                        \n");
  printf("  Qual era il nome della grande coalizione che combatteva contro l'Asse durante la seconda guerra mondiale?             \n");
  printf("                                                                                                                        \n");
  printf("  A) Alleanza delle Potenze Centrali                                                                                    \n");
  printf("  B) Potenze dell'Asse                                                                                                  \n");
  printf("  C) Alleati                                                                                                            \n");
  printf("  D) Potenze dell'Intesa                                                                                                \n");
  printf("                                                                                                                        \n");
  //Risposta corretta: C) Alleati
  userAnswer = insertAnswer();
  if (userAnswer  == 'C' || userAnswer  == 'c') {
    score++;
  }
  printf("                                                                                                                        \n");
  printf("  Quale imperatore romano ha adottato il cristianesimo come religione ufficiale dell'impero nel 313 d.C.?               \n");
  printf("                                                                                                                        \n");
  printf("  A) Costantino I                                                                                                       \n");
  printf("  B) Augusto                                                                                                            \n");
  printf("  C) Nerone                                                                                                             \n");
  printf("  D) Diocleziano                                                                                                        \n");
  printf("                                                                                                                        \n");
  //Risposta corretta: A) Costantino I
  userAnswer = insertAnswer();
  if (userAnswer  == 'A' || userAnswer  == 'a') {
    score++;
  }
  printf("                                                                                                                        \n");
  printf("  Quale evento segnò la fine della Guerra Fredda nel 1991?                                                              \n");
  printf("                                                                                                                        \n");
  printf("  A) La caduta del muro di Berlino                                                                                      \n");
  printf("  B) La firma del Trattato START                                                                                        \n");
  printf("  C) La dissoluzione dell'Unione Sovietica                                                                              \n");
  printf("  D) La riunificazione della Germania                                                                                   \n");
  printf("                                                                                                                        \n");
  //Risposta corretta: C) La dissoluzione dell'Unione Sovietica
  userAnswer = insertAnswer();
  if (userAnswer  == 'C' || userAnswer  == 'c') {
    score++;
  }
  printf("                                                                                                                        \n");
  printf("  Qual è stato l'effetto più significativo della rivoluzione industriale nel XIX secolo?                                \n");
  printf("                                                                                                                        \n");
  printf("  A) Aumento della produzione agricola                                                                                  \n");
  printf("  B) Miglioramento delle condizioni sanitarie                                                                           \n");
  printf("  C) Crescita delle città e urbanizzazione                                                                              \n");
  printf("  D) Riduzione delle tasse                                                                                              \n");
  printf("                                                                                                                        \n");
  //Risposta corretta: C) Crescita delle città e urbanizzazione
  userAnswer = insertAnswer();
  if (userAnswer  == 'C' || userAnswer  == 'c') {
    score++;
  }
  printf("                                                                                                                        \n");
  printf("  Chi era il leader nazista responsabile dell'Olocausto durante la seconda guerra mondiale?                             \n");
  printf("                                                                                                                        \n");
  printf("  A) Adolf Hitler                                                                                                       \n");
  printf("  B) Heinrich Himmler                                                                                                   \n");
  printf("  C) Hermann Göring                                                                                                     \n");
  printf("  D) Joseph Goebbels                                                                                                    \n");
  printf("                                                                                                                        \n");
  //Risposta corretta: B) Heinrich Himmler
  userAnswer = insertAnswer();
  if (userAnswer  == 'B' || userAnswer  == 'b') {
    score++;
  }
  printf("                                                                                                                        \n");
  printf("  Qual è stato l'evento che ha segnato l'inizio della rivoluzione francese nel 1789?                                    \n");
  printf("                                                                                                                        \n");
  printf("  A) L'Assedio della Bastiglia                                                                                          \n");
  printf("  B) La Rivolta delle Tasse                                                                                             \n");
  printf("  C) La Dichiarazione dei Diritti dell'Uomo e del Cittadino                                                             \n");
  printf("  D) La Maratona delle Tuileries                                                                                        \n");
  printf("                                                                                                                        \n");
  //Risposta corretta: A) L'Assedio della Bastiglia
  userAnswer = insertAnswer();
  if (userAnswer  == 'A' || userAnswer  == 'a') {
    score++;
  }
}

void risultati() {
  char userAnswer;
  printf("                                                                                                                        \n");
  printf("  Ciao %s, hai totalizzato %d punti.                                                                                    \n", playerName, score);
  printf("                                                                                                                        \n");
  printf("  Ti andrebbe di giocare una nuova partita? [Y/N]                                                                       \n");
  printf("                                                                                                                        \n");
  userAnswer = insertAnswer();
  if (userAnswer  == 'Y' || userAnswer  == 'y') {
    score = 0;
    nextStep = 0;
  } else {
  nextStep = 1;
  }
}

void uscita() {
  printf("                                                                                                                        \n");
  printf("  Peccato %s, ci vediamo alla prossima partita!.                                                                        \n", playerName);
  printf("                                                                                                                        \n");
}

int main() {

  splash();
  istruzioni();
  menuPrincipale();
  while (nextStep == 0) {
    insertName();
    questionario();
    risultati();
  }
  uscita();
  return 0;
}
